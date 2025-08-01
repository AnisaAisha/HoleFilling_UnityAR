using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEditor;
using System.Linq;
using System;

public class CustomMesh : MonoBehaviour
{
    private List<Vector3> vertices;
    private List<int> triangles;
    private Mesh mesh;
    private int depthImgWidth, depthImgHeight;
    private HalfedgeMesh halfedgeMesh;
    private GameObject meshGameObj;
    List<List<Edge>> holes_list = new List<List<Edge>>();
    bool isDrawing = false;
    int current_hole_idx = 0;
    Vector3 bestv1, bestv2;
    Vector3 currv1, currv2;
    bool isDrawSplitLine = false;
    Vector2[] uvs;
    Color[] colors;
    Texture2D texture;
    float avgEdgeLength;


    // Public variables
    public TextAsset pointCloudFile;
    public Material mat;
    public Material baseMat;
    public Material wireframeMat;
    public int minHoleEdges = 2;
    public float minNeighborDistance = 0.1f;
    public float triangleCreationRadius = 0.0005f;
    public float smoothingFactor = 0.1f;
    public float splitLengthFactor = 0.8f;
    public FillMethod holeFillingMethod;
    public EdgeFlipMethod edgeFlipMethod;
    public enum FillMethod
    {
        Centroid,
        Decimation
    }

    public enum EdgeFlipMethod
    {
        AspectRatio,
        Circumcircle
    }
    public float threshold = float.MaxValue;

    void Start()
    {
        halfedgeMesh = new HalfedgeMesh();

        GetPoints();
        CreateMeshFromPoints();
        IdentifyHoles();

        Renderer rend = meshGameObj.GetComponent<Renderer>();
        Vector3 meshCenter = rend.bounds.center;
        Camera.main.transform.LookAt(meshCenter);
    }

    void GetPoints()
    {
        string[] pointsData = pointCloudFile.text.Split(new[] { "\n", "\r\n" }, System.StringSplitOptions.RemoveEmptyEntries);
        vertices = new List<Vector3>();

        string[] dims = pointsData[0].Split();
        depthImgWidth = System.Convert.ToInt32(dims[0]);
        depthImgHeight = System.Convert.ToInt32(dims[1]);

        for (int i = 1; i < pointsData.Length - 1; i++)
        {
            string[] point = pointsData[i].Split();
            float x = float.Parse(point[0]);
            float y = float.Parse(point[1]);
            float z = float.Parse(point[2]);
            vertices.Add(new Vector3(x, y, z));
        }
    }

    void CreateMeshFromPoints()
    {
        triangles = new List<int>();

        Debug.Log("depth, height: " + depthImgWidth + " " + depthImgHeight);

        int rows = depthImgHeight;
        int cols = depthImgWidth;

        float totalLength = 0f;
        int edgeCount = 0;

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < cols; y++)
            {
                int i = x * rows + y;

                // Horizontal neighbor
                if (y < cols - 1)
                {
                    int j = i + 1;
                    totalLength += Vector3.Distance(vertices[i], vertices[j]);
                    edgeCount++;
                }

                // Vertical neighbor
                if (x < rows - 1)
                {
                    int j = i + cols;
                    totalLength += Vector3.Distance(vertices[i], vertices[j]);
                    edgeCount++;
                }
            }
        }

        avgEdgeLength = edgeCount > 0 ? totalLength / edgeCount : 0f;
        Debug.Log("Estimated average edge length: " + avgEdgeLength);

        Vertex[] v_list = new Vertex[vertices.Count];
        uvs = new Vector2[vertices.Count];
        colors = new Color[vertices.Count];

        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < cols; y++)
            {
                int i = x * rows + y;

                v_list[i] = new Vertex(vertices[i], i);
                float u = x / (float)(rows);
                float v = y / (float)(cols);
                uvs[i] = new Vector2(u, v);
                colors[i] = new Color(0.4f, 0.8f, 0.4f, 1.0f);

                if (isValidTriangle(i + cols, i + cols + 1, i + 1, threshold * avgEdgeLength))
                {
                    triangles.Add(i + 1);
                    triangles.Add(i + cols + 1);
                    triangles.Add(i + cols);

                    v_list[i + 1] = v_list[i + 1] != null ? v_list[i + 1] : new Vertex(vertices[i + 1], i + 1);
                    v_list[i + cols + 1] = v_list[i + cols + 1] != null ? v_list[i + cols + 1] : new Vertex(vertices[i + cols + 1], i + cols + 1);
                    v_list[i + cols] = v_list[i + cols] != null ? v_list[i + cols] : new Vertex(vertices[i + cols], i + cols);
                }

                if (isValidTriangle(i + cols, i + 1, i, threshold * avgEdgeLength))
                {
                    triangles.Add(i);
                    triangles.Add(i + 1);
                    triangles.Add(i + cols);

                    v_list[i] = v_list[i] != null ? v_list[i] : new Vertex(vertices[i], i);
                    v_list[i + 1] = v_list[i + 1] != null ? v_list[i + 1] : new Vertex(vertices[i + 1], i + 1);
                    v_list[i + cols] = v_list[i + cols] != null ? v_list[i + cols] : new Vertex(vertices[i + cols], i + cols);
                }
            }
        }

        halfedgeMesh.BuildHalfEdgeMesh(v_list, triangles.ToArray());
        float edgeLength = halfedgeMesh.ComputeAverageEdgeLength();
        Debug.Log("average edge length is..." + edgeLength);

        // Create mesh
        mesh = new Mesh();
        mesh.Clear(false);
        mesh.vertices = vertices.ToArray();

        // Submesh 0: Main mesh
        mesh.uv = uvs;
        mesh.triangles = triangles.ToArray();
        mesh.RecalculateNormals();

        GameObject s = new GameObject("Object");
        s.AddComponent<MeshFilter>();
        s.AddComponent<MeshRenderer>();
        s.GetComponent<MeshFilter>().mesh = mesh;
        s.AddComponent<MeshCollider>();

        Renderer rend = s.GetComponent<Renderer>();

        // Create and assign materials
        Material baseMat = new Material(Shader.Find("Standard"));
        texture = CreateTexture(rows, cols, colors);
        baseMat.SetTexture("_MainTex", texture);

        rend.material = baseMat;

        meshGameObj = s;

        Debug.Log("Main mesh counts: " + vertices.Count + " " + triangles.Count);
    }

    bool isValidTriangle(int ai, int bi, int ci, float t)
    {
        Vector3 a = vertices[ai];
        Vector3 b = vertices[bi];
        Vector3 c = vertices[ci];

        float ab = Vector3.Distance(a, b);
        float bc = Vector3.Distance(b, c);
        float ca = Vector3.Distance(c, a);

        if (ab > t || bc > t || ca > t)
        {
            return false;
        }
        return true;
    }

    Texture2D CreateTexture(int rows, int cols, Color[] colors) {
        Texture2D texture = new Texture2D(rows - 1, cols - 1);
        texture.SetPixels(colors);
		texture.Apply();
		return (texture);
	}

    void IdentifyHoles()
    {
        List<Edge> boundary_edges = new List<Edge>();

        // Step 1: Identify all boundary edges
        foreach (Edge he in halfedgeMesh.edgesDict.Values)
        {
            if (he.opposite == null)
            {
                he.isBoundary = true;
                boundary_edges.Add(he);
            }
        }
        Debug.Log("boundary edges count: " + boundary_edges.Count);

        // Step 2: Process each boundary edge and find boundary loops
        HashSet<Edge> visitedEdges = new HashSet<Edge>();
        foreach (Edge edge in boundary_edges)
        {
            // Skip edges that have already been processed as part of a loop
            if (visitedEdges.Contains(edge))
                continue;

            Edge curr_edge = edge;
            List<Edge> hole_edges = new List<Edge>();

            do
            {
                // Add the current edge to the hole and mark it as visited
                hole_edges.Add(curr_edge);
                visitedEdges.Add(curr_edge);

                // Move to the next edge, but make sure it's on the boundary
                curr_edge = curr_edge.next;
                while (curr_edge != null && !curr_edge.isBoundary)
                {
                    curr_edge = curr_edge.opposite?.next; // Move to the next boundary edge
                }

            } while (curr_edge != edge && curr_edge != null); // Continue until we loop back to the starting edge

            // Step 3: Only add if it's a valid hole with more than 2 edges
            if (hole_edges.Count > minHoleEdges)
            {
                holes_list.Add(hole_edges);
            }
        }
        Debug.Log("Holes total count: " + holes_list.Count);
    }

    void RemoveNonManifold()
    {
        // Identify non-manifold vertices
        List<int> nonmanifold_indices = new List<int>();
        foreach (var v in halfedgeMesh.vertices)
        {
            if (v != null && v.vertex_edges.Count(e => e.isBoundary) == 2)
            {
                nonmanifold_indices.Add(v.index);
            }
        }

        // Remove triangles that have non-manifold vertices
        List<int> trianglesCopy = triangles.ToList();
        for (int i = 0; i < trianglesCopy.Count; i += 3)
        {
            foreach (var vi in nonmanifold_indices)
            {
                if (trianglesCopy[i] == vi || trianglesCopy[i + 1] == vi || trianglesCopy[i + 2] == vi)
                {
                    RemoveTriangle(trianglesCopy[i], trianglesCopy[i + 1], trianglesCopy[i + 2]);
                    break;
                }
            }
        }

        // Remap the vertex indices after discarding the unused ones
        List<Vector3> new_vertices = new List<Vector3>();
        List<Vertex> vertex_list = new List<Vertex>();
        Dictionary<int, int> oldToNewIndexMap = new Dictionary<int, int>();

        for (int i = 0; i < vertices.Count; i++)
        {
            if (!nonmanifold_indices.Contains(i))
            {
                new_vertices.Add(vertices[i]);
                vertex_list.Add(new Vertex(vertices[i], i));
                oldToNewIndexMap[i] = new_vertices.Count - 1;
            }
        }

        // Rebuild the triangles list with updated vertex indices
        List<int> new_triangles = new List<int>();
        foreach (var triangleIndex in triangles)
        {
            new_triangles.Add(oldToNewIndexMap[triangleIndex]);
        }

        // Assign new vertices and triangles
        triangles = new_triangles;
        vertices = new_vertices;

        // Update the mesh and rebuild halfedge data structure
        UpdateMesh();
        halfedgeMesh.Reset();
        halfedgeMesh.BuildHalfEdgeMesh(vertex_list.ToArray(), triangles.ToArray());
    }

    void UpdateMesh()
    {
        mesh.vertices = vertices.ToArray();
        mesh.triangles = triangles.ToArray();
        mesh.RecalculateNormals();
        meshGameObj.GetComponent<MeshFilter>().mesh = mesh;
    }

    void RemoveTriangle(int p, int q, int r) {
        for (int t = 0; t < triangles.Count; t += 3) {
            int a = triangles[t];
            int b = triangles[t + 1];
            int c = triangles[t + 2];

            // Check if the triangle matches (p, q, r) in any order
            if ((a == p && b == q && c == r) ||
                (a == p && b == r && c == q) ||
                (a == q && b == p && c == r) ||
                (a == q && b == r && c == p) ||
                (a == r && b == p && c == q) ||
                (a == r && b == q && c == p))
            {
                // Remove this specific triangle
                triangles.RemoveRange(t, 3);
                Debug.Log("successfully removed triangle!!");
            }
        }
    }

    void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        if (halfedgeMesh != null && current_hole_idx < holes_list.Count)
        {
            List<Edge> hole = holes_list[current_hole_idx];
            if (hole != null)
            {
                foreach (Edge he in hole)
                {
                    var thickness = 10;
                    if (isDrawing) Handles.DrawBezier(he.vertex.position, he.next.vertex.position, he.vertex.position, he.next.vertex.position, Color.red, null, thickness);
                    if (isDrawSplitLine)
                    {
                        Handles.DrawBezier(bestv1, bestv2, bestv1, bestv2, Color.blue, null, thickness);
                        Handles.DrawBezier(currv1, currv2, currv1, currv2, Color.magenta, null, thickness);
                    }
                }
            }

        }
    }

    void Update()
    {
        float dx = Input.GetAxis("Horizontal");
        float dz = Input.GetAxis("Vertical");
        float upDown = 0;

        // Game View Navigation Controls using Keyboard
        if (Input.GetKey(KeyCode.Q)) upDown = -1; // Q to move down
        if (Input.GetKey(KeyCode.E)) upDown = 1; // E to move up
        // Vector3 move = new Vector3(dx, upDown, dz) * rotationSpeed * Time.deltaTime;
        // transform.Translate(move);

        // Key Press Navigation
        // Hole navigation. "H" for Next and "P" for previous
        if (Input.GetKeyDown(KeyCode.H))
        {
            isDrawing = true;
            current_hole_idx = (current_hole_idx + 1) % holes_list.Count;
            Debug.Log("Current hole vertex count: " + holes_list[current_hole_idx].Count);
            // current_boundary_vertices.Clear();
        }
        if (Input.GetKeyDown(KeyCode.P))
        {
            isDrawing = true;
            current_hole_idx = (current_hole_idx - 1 + holes_list.Count) % holes_list.Count;
            Debug.Log("Current hole vertex count: " + holes_list[current_hole_idx].Count);
            // current_boundary_vertices.Clear();
        }

        // Hole modification algorithms
        if (Input.GetKeyDown(KeyCode.N))
        {
            RemoveNonManifold();
            holes_list.Clear();
            IdentifyHoles();
        }
    }

}



public class Vertex {
    public int index, valence;
    public Vector3 position;
    public Edge edge;
    // Vector3 normal;
    // Face[] vertex_faces;
    public List<Edge> vertex_edges;

    public Vertex() {
        this.index = 0;
        this.position = Vector3.zero;
        this.valence = 0;
        vertex_edges = new List<Edge>();
    }

    public Vertex(Vector3 position, int index) {
        this.index = index;
        this.position = position;

        // instantiate
        valence = 0;
        vertex_edges = new List<Edge>();
        // edge = new Edge();
    }

    public void AddVertexEdge(Edge e) {
        vertex_edges.Add(e);
        valence++;
    }
}

public class Face
{
    public Edge edge;
    public List<Vertex> face_vertices;
    // public int[] face_vertices;
    public List<Edge> face_edges;
    public int face_idx;

    public Face(Edge edge)
    {
        this.edge = edge;
        face_vertices = new List<Vertex>();
        // face_vertices = new int[3];
    }

    public void AddEdge(Edge e)
    {
        face_edges.Add(e);
    }
    public void AddVertex(Vertex v1, Vertex v2, Vertex v3)
    {
        face_vertices.Add(v1);
        face_vertices.Add(v2);
        face_vertices.Add(v3);
    }
}

public class Edge
{
    public Edge next, opposite;
    public Face face;
    public Vertex vertex;
    public bool isBoundary = false;

    public Edge()
    {
        this.vertex = null;
        this.next = this.opposite = null;
        this.isBoundary = false;
    }
    public Edge(Vertex v)
    {
        this.vertex = v;
        this.next = this.opposite = null;
        this.isBoundary = false;
    }
}
