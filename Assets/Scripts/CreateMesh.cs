using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEditor;
using System.Linq;
using System;

public class CreateMesh : MonoBehaviour
{
    private List<Vector3> vertices;
    private List<int> triangles;
    private Mesh mesh;
    private int depthImgWidth, depthImgHeight;
    private Color[] vertexColors;
    private HalfedgeMesh halfedgeMesh;
    private GameObject meshGameObj;
    List<List<Edge>> holes_list = new List<List<Edge>>();
    bool isDrawing = false;
    int current_hole_idx = 0;
    Vector3 bestv1, bestv2;
    Vector3 currv1, currv2;
    bool isDrawSplitLine = false;
    LoopSplitting loopSplit;
    Vector2[] uvs;
    Color[] colors;
    Texture2D texture;
    List<int> subMeshTriangles;
    EdgeFlip edgeFlip;
    EdgeSplit edgeSplit;
    SmoothMesh smoothMesh;
    List<Edge> current_hole_edges = new List<Edge>();
    bool isEdgeSplit = false;
    Dictionary<Tuple<int, int>, Edge> newEdgeDict;
    bool isTriangleHighlight = false;


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
    public enum FillMethod {
        Centroid,
        Decimation
    }

    public enum EdgeFlipMethod {
        AspectRatio,
        Circumcircle
    }

    
    //distance threshold to cut off vertices
    // private float threshold = 0.003f; // for ornament
    // private float threshold = 0.05f; // for hello kitty 
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

        // Mesh modification operations
        loopSplit = new LoopSplitting(minNeighborDistance);
        loopSplit.SetVerticesAndTriangles(vertices, triangles);
        loopSplit.halfedgeMesh = halfedgeMesh; 
        edgeSplit = new EdgeSplit(splitLengthFactor);
        smoothMesh = new SmoothMesh(smoothingFactor);
        edgeFlip = new EdgeFlip();
    }

    void GetPoints() {
        string[] pointsData = pointCloudFile.text.Split(new[] { "\n", "\r\n" }, System.StringSplitOptions.RemoveEmptyEntries);
        vertices = new List<Vector3>();

        string[] dims = pointsData[0].Split();
        depthImgWidth = System.Convert.ToInt32(dims[0]);
        depthImgHeight = System.Convert.ToInt32(dims[1]);

        for (int i = 1; i < pointsData.Length - 1; i++) {
            string[] point = pointsData[i].Split();
            float x = float.Parse(point[0]);
            float y = float.Parse(point[1]);
            float z = float.Parse(point[2]);
            vertices.Add(new Vector3(x, y, z));
        }
    }

//     void CreateMeshFromPoints() {
//         triangles = new List<int>();
//         Debug.Log("depth, height: " + depthImgWidth + " " + depthImgHeight);

//         // Image is not rotated, so width and height reversed here temporarily (192x256)
//         int rows = depthImgHeight;
//         int cols = depthImgWidth;

//         Vertex[] v_list = new Vertex[vertices.Count];
//         // Vector3[] barycentricCoords = new Vector3[vertices.Count];
//         uvs = new Vector2[vertices.Count];
//         colors = new Color[vertices.Count];

//         for (int x = 0; x < rows; x++) {
//             for (int y = 0; y < cols; y++) {
//                 int i = x * rows + y;

//                 v_list[i] = new Vertex(vertices[i], i);
//                 float u = x / (float)(rows);
//                 float v = y / (float)(cols);
//                 uvs[i] = new Vector2(u, v);
//                 colors[i] = new Color (0.4f, 0.8f, 0.4f, 1.0f);

//                 // only add triangle if dist < threshold
//                 if (isValidTriangle(i + cols, i + cols + 1, i + 1)) {
//                     triangles.Add(i + 1);
//                     triangles.Add(i + cols + 1);
//                     triangles.Add(i + cols);

//                     // Create Vertex and add to list
//                     v_list[i + 1] = new Vertex(vertices[i + 1], i + 1);
//                     v_list[i + cols + 1] = new Vertex(vertices[i + cols + 1], i + cols + 1);
//                     v_list[i + cols] = new Vertex(vertices[i + cols], i + cols);

//                     AddEdge(edgeSet, wireframeLines, i + 1, i + cols + 1);
//                     AddEdge(edgeSet, wireframeLines, i + cols + 1, i + cols);
//                     AddEdge(edgeSet, wireframeLines, i + cols, i + 1);
//                 }

//                 if (isValidTriangle(i + cols, i + 1, i)) {
//                     triangles.Add(i);
//                     triangles.Add(i + 1);
//                     triangles.Add(i + cols);
//                     v_list[i] = new Vertex(vertices[i], i);
//                     v_list[i + 1] = new Vertex(vertices[i + 1], i + 1);
//                     v_list[i + cols] = new Vertex(vertices[i + cols], i + cols);

//                     AddEdge(edgeSet, wireframeLines, i, i + 1);
//                     AddEdge(edgeSet, wireframeLines, i + 1, i + cols);
//                     AddEdge(edgeSet, wireframeLines, i + cols, i);
//                 }
//             }
//         }
//         halfedgeMesh.BuildHalfEdgeMesh(v_list, triangles.ToArray());       

//         // Create mesh
//         // mesh = new Mesh();
//         // mesh.vertices = vertices.ToArray();
//         // mesh.triangles = triangles.ToArray();
//         // mesh.uv = uvs;
//         // // mesh.SetUVs(1, barycentricCoords);
//         // mesh.RecalculateNormals();

//         // GameObject s = new GameObject("Object");
//         // s.AddComponent<MeshFilter>();
//         // s.AddComponent<MeshRenderer>();
//         // s.GetComponent<MeshFilter>().mesh = mesh;
//         // s.AddComponent<MeshCollider>();
//         // Renderer rend = s.GetComponent<Renderer>();
//         // // rend.material.color = new Color (0.4f, 0.8f, 0.4f, 1.0f);

//         // // Material mat = new Material(Shader.Find("Standard"));
//         // Material mat = new Material(Shader.Find("Custom/FlatShadingNoInterpolation"));
//         // // //Custom/VertexColor"));
//         // texture = CreateTexture(rows, cols, colors);
// 		// mat.SetTexture("_MainTex", texture);
// 		// rend.material = mat;

//         // meshGameObj = s;

//         mesh = new Mesh();
//         mesh.subMeshCount = 2; // Create 2 submeshes

//         mesh.vertices = vertices.ToArray();
//         mesh.SetTriangles(triangles, 0); // Submesh 0 → Normal mesh
//         mesh.SetIndices(wireframeLines.ToArray(), MeshTopology.Lines, 1); // Submesh 1 → Wireframe

//         mesh.uv = uvs;
//         mesh.RecalculateNormals();

//         GameObject s = new GameObject("Object");
//         s.AddComponent<MeshFilter>();
//         s.AddComponent<MeshRenderer>();
//         s.GetComponent<MeshFilter>().mesh = mesh;
//         s.AddComponent<MeshCollider>();

//         Renderer rend = s.GetComponent<Renderer>();

//         // Create and assign materials
//         Material baseMat = new Material(Shader.Find("Custom/FlatShadingNoInterpolation"));
//         Material wireframeMat = new Material(Shader.Find("Unlit/Color")); // Simple wireframe material
//         wireframeMat.color = Color.black;

//         texture = CreateTexture(rows, cols, colors);
//         baseMat.SetTexture("_MainTex", texture);

//         rend.materials = new Material[] { baseMat, wireframeMat };

//         meshGameObj = s;


//         Debug.Log("checking in main counts: " + vertices.Count + " " + triangles.Count);

//         // ExportMeshToPLY("scannedMesh.ply");
//     }
//         List<int> wireframeLines = new List<int>(); // Store edges for wireframe
//     HashSet<(int, int)> edgeSet = new HashSet<(int, int)>(); // To avoid duplicate edges

//     void AddEdge(HashSet<(int, int)> edgeSet, List<int> wireframeLines, int a, int b) {
//     var edge = a < b ? (a, b) : (b, a);
//     if (!edgeSet.Contains(edge)) {
//         edgeSet.Add(edge);
//         wireframeLines.Add(a);
//         wireframeLines.Add(b);
//     }
// }

    void CreateMeshFromPoints() {
        triangles = new List<int>();

        Debug.Log("depth, height: " + depthImgWidth + " " + depthImgHeight);

        int rows = depthImgHeight;
        int cols = depthImgWidth;

        Vertex[] v_list = new Vertex[vertices.Count];
        uvs = new Vector2[vertices.Count];
        colors = new Color[vertices.Count];

        for (int x = 0; x < rows; x++) {
            for (int y = 0; y < cols; y++) {
                int i = x * rows + y;

                v_list[i] = new Vertex(vertices[i], i);
                float u = x / (float)(rows);
                float v = y / (float)(cols);
                uvs[i] = new Vector2(u, v);
                colors[i] = new Color(0.4f, 0.8f, 0.4f, 1.0f);

                if (isValidTriangle(i + cols, i + cols + 1, i + 1)) {
                    triangles.Add(i + 1);
                    triangles.Add(i + cols + 1);
                    triangles.Add(i + cols);

                    v_list[i + 1] = new Vertex(vertices[i + 1], i + 1);
                    v_list[i + cols + 1] = new Vertex(vertices[i + cols + 1], i + cols + 1);
                    v_list[i + cols] = new Vertex(vertices[i + cols], i + cols);
                }

                if (isValidTriangle(i + cols, i + 1, i)) {
                    triangles.Add(i);
                    triangles.Add(i + 1);
                    triangles.Add(i + cols);

                    v_list[i] = new Vertex(vertices[i], i);
                    v_list[i + 1] = new Vertex(vertices[i + 1], i + 1);
                    v_list[i + cols] = new Vertex(vertices[i + cols], i + cols);
                }
            }
        }

        halfedgeMesh.BuildHalfEdgeMesh(v_list, triangles.ToArray());

        // Create mesh
        mesh = new Mesh();
        mesh.Clear(false);
        mesh.vertices = vertices.ToArray();
        // mesh.subMeshCount = 2; // Two submeshes

        // Submesh 0: Main mesh
        mesh.uv = uvs;
        mesh.SetTriangles(triangles, 0);
        mesh.RecalculateNormals();

        // Submesh 1: Wireframe
        int[] wires = new int[triangles.Count * 2]; // 6 indices per triangle (each edge used twice)
        for (int iTria = 0; iTria < triangles.Count / 3; iTria++) {
            for (int iVertex = 0; iVertex < 3; iVertex++) {
                wires[6 * iTria + 2 * iVertex] = triangles[3 * iTria + iVertex];
                wires[6 * iTria + 2 * iVertex + 1] = triangles[3 * iTria + (iVertex + 1) % 3];
            }
        }
        // mesh.SetIndices(wires, MeshTopology.Lines, 1);

        GameObject s = new GameObject("Object");
        s.AddComponent<MeshFilter>();
        s.AddComponent<MeshRenderer>();
        s.GetComponent<MeshFilter>().mesh = mesh;
        
        // s.AddComponent<MeshCollider>();
        Mesh colliderMesh = new Mesh();
        colliderMesh.vertices = mesh.vertices;
        colliderMesh.triangles = triangles.ToArray(); // Ensure it has valid triangles

        colliderMesh.RecalculateNormals();
        colliderMesh.RecalculateBounds();

        // ✅ Add and assign MeshCollider before adding wireframe
        MeshCollider meshCollider = s.AddComponent<MeshCollider>();
        meshCollider.sharedMesh = colliderMesh;

        mesh.subMeshCount = 2;
        mesh.SetIndices(wires, MeshTopology.Lines, 1);
        s.GetComponent<MeshFilter>().mesh = mesh;

        Renderer rend = s.GetComponent<Renderer>();

        // Create and assign materials
        Material baseMat = new Material(Shader.Find("Standard"));
        Material wireframeMat = new Material(Shader.Find("Unlit/Color")); // Simple wireframe material
        wireframeMat.color = Color.black;

        texture = CreateTexture(rows, cols, colors);
        baseMat.SetTexture("_MainTex", texture);

        rend.materials = new Material[] { baseMat, wireframeMat };

        meshGameObj = s;

        Debug.Log("Main mesh counts: " + vertices.Count + " " + triangles.Count);
    }


    bool isValidTriangle(int ai, int bi, int ci) {
        Vector3 a = vertices[ai];
        Vector3 b = vertices[bi];
        Vector3 c = vertices[ci];

        float ab = Vector3.Distance(a, b);
        float bc = Vector3.Distance(b, c);
        float ca = Vector3.Distance(c, a);

        if (ab > threshold || bc > threshold || ca > threshold) {
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

    // Using GL Lines in Game view
    void OnPostRender()
    {
        if (isDrawing && current_hole_idx < holes_list.Count) {
            GL.PushMatrix();
            mat.SetPass(0);
            GL.Begin(GL.LINES);
            GL.Color(Color.red);

            List<Edge> hole = holes_list[current_hole_idx];
            if (hole != null) {
                foreach(Edge e in hole) {
                    Vector3 vpos = meshGameObj.transform.TransformPoint(e.vertex.position);
                    Vector3 next_vpos = meshGameObj.transform.TransformPoint(e.next.vertex.position);
                    GL.Vertex(vpos);
                    GL.Vertex(next_vpos);
                }
            }
            
            GL.End();
            GL.PopMatrix();
        }
    }

    // Using Gizmos in Editor
    void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        if (halfedgeMesh != null && current_hole_idx < holes_list.Count)
        {
            List<Edge> hole = holes_list[current_hole_idx];
            if (hole != null) {
                foreach (Edge he in hole)
                {
                    var thickness = 10;
                    if (isDrawing) Handles.DrawBezier(he.vertex.position, he.next.vertex.position, he.vertex.position, he.next.vertex.position, Color.red, null, thickness);
                    if (isDrawSplitLine) {
                        Handles.DrawBezier(bestv1, bestv2, bestv1, bestv2, Color.blue, null, thickness);
                        Handles.DrawBezier(currv1, currv2, currv1, currv2, Color.magenta, null, thickness);
                    }
                    // For 1 pixel line //Gizmos.DrawLine(he.vertex.position, he.next.vertex.position);
                }
            }
            
        }

        if (showBoundaries) {
            
            // foreach (var he in current_hole_edges)
            // {
                
            //     // if (he.opposite == null) {
            //         // Debug.Log(he + " " + he.next + " ");
            //         // if (isDrawing) Gizmos.DrawLine(he.vertex.position, he.next.vertex.position);
            //         if (he != null && he.next != null) Handles.DrawBezier(he.vertex.position, he.next.vertex.position, he.vertex.position, he.next.vertex.position, Color.cyan, null, 5);
            //     // }
            //     // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            //     // sphere.transform.position = he.vertex.position;
            //     // sphere.transform.localScale = Vector3.one * 0.001f;
            //     // sphere.GetComponent<Renderer>().material.color = Color.red;
            // }
            // foreach (var kvp in newEdgeDict) {
            //     var he = kvp.Value;
            //     if (he != null && he.next != null) Handles.DrawBezier(he.vertex.position, he.next.vertex.position, he.vertex.position, he.next.vertex.position, Color.yellow, null, 5);
            // }

            foreach (var he in overlappingTriangles) {
                Handles.DrawBezier(he.vertex.position, he.next.vertex.position, he.vertex.position, he.next.vertex.position, Color.magenta, null, 5);
                Handles.DrawBezier(he.next.vertex.position, he.next.next.vertex.position, he.next.vertex.position, he.next.next.vertex.position, Color.magenta, null, 5);
            }
        }
    }

    void IdentifyHoles() {
        // List<Edge> boundary_edges = new List<Edge>();

        // // Step 1: Identify all boundary edges
        // foreach (Edge he in halfedgeMesh.edgesDict.Values)
        // {
        //     if (he.opposite == null) {
        //         he.isBoundary = true;
        //         boundary_edges.Add(he);
        //     }
        // }
        // Debug.Log("boundary edges count: " + boundary_edges.Count);

        // HashSet<Edge> visitedEdges = new HashSet<Edge>();

        // // Step 2: Process each boundary edge and find boundary loops
        // foreach (Edge edge in boundary_edges)
        // {
        //     // Skip edges that have already been processed as part of a loop
        //     if (visitedEdges.Contains(edge))
        //         continue;

        //     Edge curr_edge = edge;
        //     List<Edge> hole_edges = new List<Edge>();
        //     float minY = float.MaxValue;
        //     int minIndex = -1;

        //     do {
        //         // Add the current edge to the hole and mark it as visited
        //         hole_edges.Add(curr_edge);
        //         visitedEdges.Add(curr_edge);

        //         // Track the vertex with the smallest Y (and largest X if there's a tie)
        //         Vector3 currPos = curr_edge.vertex.position;
        //         if (currPos.y < minY || (currPos.y == minY && currPos.x > hole_edges[minIndex].vertex.position.x)) {
        //             minY = currPos.y;
        //             minIndex = hole_edges.Count - 1;  // Update the index of the smallest Y vertex
        //         }

        //         // Move to the next edge, but make sure it's on the boundary
        //         curr_edge = curr_edge.next;

        //         // Safety check: ensure the next edge is also a boundary edge
        //         while (curr_edge != null && !curr_edge.isBoundary) {
        //             curr_edge = curr_edge.opposite?.next;  // Move to the next boundary edge
        //         }

        //     } while (curr_edge != edge && curr_edge != null);  // Continue until we loop back to the starting edge

        //     // Step 3: Only add if it's a valid hole with more than 2 edges
        //     bool isClockwise = CheckOrientation(hole_edges, minIndex);
        //     if (hole_edges.Count > minHoleEdges && isClockwise) {
        //         holes_list.Add(hole_edges);
        //     }

        //     // Debug.Log("Hole edges count: " + hole_edges.Count);
        // }
        
        List<Edge> boundary_edges = new List<Edge>();

        // Step 1: Identify all boundary edges
        foreach (Edge he in halfedgeMesh.edgesDict.Values) {
            if (he.opposite == null) {
                he.isBoundary = true;
                boundary_edges.Add(he);
            }
        }
        Debug.Log("boundary edges count: " + boundary_edges.Count);

        HashSet<Edge> visitedEdges = new HashSet<Edge>();

        // Step 2: Process each boundary edge and find boundary loops
        foreach (Edge edge in boundary_edges) {
            // Skip edges that have already been processed as part of a loop
            if (visitedEdges.Contains(edge))
                continue;

            Edge curr_edge = edge;
            List<Edge> hole_edges = new List<Edge>();

            do {
                // Add the current edge to the hole and mark it as visited
                hole_edges.Add(curr_edge);
                visitedEdges.Add(curr_edge);

                // Move to the next edge, but make sure it's on the boundary
                curr_edge = curr_edge.next;

                // Safety check: ensure the next edge is also a boundary edge
                while (curr_edge != null && !curr_edge.isBoundary) {
                    curr_edge = curr_edge.opposite?.next; // Move to the next boundary edge
                }

            } while (curr_edge != edge && curr_edge != null); // Continue until we loop back to the starting edge

            // Step 3: Only add if it's a valid hole with more than 2 edges
            if (hole_edges.Count > minHoleEdges) {
                holes_list.Add(hole_edges);
            }
            // holes_list.Add(hole_edges);

            // Debug.Log("Hole edges count: " + hole_edges.Count);
        }
        Debug.Log("Holes total count: " + holes_list.Count);
    }

    bool CheckOrientation(List<Edge> hole_edges, int minIndex) {
        int n = hole_edges.Count;
        Vector3 A = hole_edges[minIndex].vertex.position;
        Vector3 B = hole_edges[(minIndex - 1 + n) % n].vertex.position;  // Previous vertex
        Vector3 C = hole_edges[(minIndex + 1) % n].vertex.position;      // Next vertex

        Vector2 AB = new Vector2(B.x - A.x, B.y - A.y);
        Vector2 AC = new Vector2(C.x - A.x, C.y - A.y);

        // Compute the cross product (2D)
        float crossProduct = AB.x * AC.y - AB.y * AC.x;

        // If crossProduct < 0, it's clockwise; otherwise, it's counterclockwise
        return crossProduct < 0;
    }


    void FillHolesCentroid() {
        if (halfedgeMesh != null && current_hole_idx < holes_list.Count)
        {
            List<Edge> hole = holes_list[current_hole_idx];
            Vector3[] hole_vertices = new Vector3[hole.Count];
            for (int i = 0; i < hole.Count; i++) {
                hole_vertices[i] = hole[i].vertex.position;
            }

            Vector3 centroid = CalculateCentroid(hole_vertices);
            int centroidIdx = vertices.Count;
            vertices.Add(centroid);

            // Create triangles to fill the hole
            for (int i = 0; i < hole.Count; i++) {
                int v1 = hole[i].vertex.index;
                int v2 = hole[(i + 1) % hole.Count].vertex.index;
                triangles.Add(v1);
                triangles.Add(centroidIdx);
                triangles.Add(v2);
            }

            Vertex new_centroid_vertex = new Vertex(centroid, vertices.Count - 1);
            // halfedgeMesh.AddVertex(new_centroid_vertex);
            halfedgeMesh.AddNewEdge(new_centroid_vertex, hole);
            // halfedgeMesh.UpdateMesh();

            // Update Mesh
            mesh.vertices = vertices.ToArray();
            mesh.triangles = triangles.ToArray();
            mesh.RecalculateNormals();
            meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

            Debug.Log("centroid triangle count: " + triangles.Count);
        }
    }

    Vector3 CalculateCentroid(Vector3[] verts) {
        Vector3 centroid = Vector3.zero;;
        foreach(Vector3 v in verts) {
            centroid += v;
        }
        return centroid/verts.Length;
    }

    Edge FindPreviousEdge(Edge startEdge) {
        Edge curr_edge = startEdge;
        Edge prev_edge = null;
        do {
            if (curr_edge.opposite == null) {
                prev_edge = curr_edge;
                curr_edge = curr_edge.next;
            } else {
                curr_edge = curr_edge.opposite?.next;
            }
        } while (curr_edge != startEdge && curr_edge != null); 
        return prev_edge;
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
            }
        }

        // Face associatedTriangle = boundaryEdge.face;
        // if (associatedTriangle != null) {
        //     halfedgeMesh.faces.Remove(associatedTriangle);
        // }
    }

    // Check if a vertex has more than 2 boundary edges
    void RemoveNonManifold() {
        List<Vector3> vertices_copy = vertices.ToList();
        List<Edge> hole_copy = holes_list[current_hole_idx].ToList();
        Dictionary<Vertex, List<Edge>> vertexBoundaryEdges = new Dictionary<Vertex, List<Edge>>();
        List<Tuple<int, int>> etoreomove = new List<Tuple<int, int>>();

        // halfedgeMesh.RemoveAllNonManifold();

        foreach(Edge edge in hole_copy) {
        // foreach (var kvp in halfedgeMesh.edgesDict) {
        //     Edge edge = kvp.Value;
            if (edge.opposite == null) {
                Vertex vertex = edge.vertex;
                Vertex nextVertex = edge.next.vertex;
                if (!vertexBoundaryEdges.ContainsKey(vertex)) {
                    vertexBoundaryEdges[vertex] = new List<Edge>();
                }
                vertexBoundaryEdges[vertex].Add(edge);

                if (!vertexBoundaryEdges.ContainsKey(nextVertex)) {
                    vertexBoundaryEdges[nextVertex] = new List<Edge>();
                }
                vertexBoundaryEdges[nextVertex].Add(edge);
            }
        }

        foreach (var entry in vertexBoundaryEdges) {
            Vertex vertex = entry.Key;
            List<Edge> boundaryEdges = entry.Value;
            // Debug.Log("outer loop");
            if (boundaryEdges.Count > 2) {
                Debug.Log("this will be printex the number of non manifold vertex");
                // debug_points.Add(vertex.position);

                Edge prev_edge = null;
                for (int m = 0; m < boundaryEdges.Count; m++) {
                    Debug.Log("Checking boundary edge at index : " + m + " how many edges left? " + (boundaryEdges.Count - m));
                    Edge boundaryEdge = boundaryEdges[m];

                    // Need to generalize this!!!
                    Edge nextEdge = boundaryEdge.next;
                    Debug.Log("next opp exist? " + m + " " + nextEdge.opposite);
                    Edge newBoundary = null;

                    if (nextEdge.opposite != null) {
                        Edge e2 = nextEdge.opposite; // another new boundary
                        Edge prevEdge = FindPreviousEdge(boundaryEdge);
                        Edge e1 = nextEdge.next.opposite;


                        newBoundary = halfedgeMesh.RemoveBoundaryEdge(boundaryEdge, prevEdge, e1, e2);
                        boundaryEdges.Insert(m + 1, newBoundary);

                    } else {
                        Edge prevEdge = FindPreviousEdge(boundaryEdge);
                        Edge e1 = nextEdge.next.opposite;
                        // Edge e1opp = e1.opposite.next;
                        // Edge e2 = e1.next.next; // another new boundary
                        Edge e2 = e1.next.opposite.next;

                        newBoundary = halfedgeMesh.RemoveBoundaryEdgeAnother(boundaryEdge, prevEdge, e1, e2, nextEdge);
                    }
                    // Update hole
                    Edge curr_edge = newBoundary;
                    List<Edge> hole_edges = new List<Edge>();
                    HashSet<Edge> visitedEdges = new HashSet<Edge>();
                    do {
                        if (curr_edge.opposite == null) {
                            hole_edges.Add(curr_edge);
                            curr_edge = curr_edge.next;
                        } else {
                            curr_edge = curr_edge.opposite?.next;
                        }

                    } while (curr_edge != newBoundary && curr_edge != null); 
                    holes_list[current_hole_idx] = hole_edges;  

                    int p = boundaryEdge.vertex.index;
                    int q = nextEdge.vertex.index;
                    int r = nextEdge.next.vertex.index;

                    RemoveTriangle(p, q, r);

                    Dictionary<Vertex, List<Edge>> updatedVertexBoundaryEdges = new Dictionary<Vertex, List<Edge>>();
                    foreach(Edge edge in holes_list[current_hole_idx]) {
                        if (edge.opposite == null) {
                            Vertex v = edge.vertex;
                            Vertex nv = edge.next.vertex;
                            if (!updatedVertexBoundaryEdges.ContainsKey(v)) {
                                updatedVertexBoundaryEdges[v] = new List<Edge>();
                            }
                            updatedVertexBoundaryEdges[v].Add(edge);

                            if (!updatedVertexBoundaryEdges.ContainsKey(nv)) {
                                updatedVertexBoundaryEdges[nv] = new List<Edge>();
                            }
                            updatedVertexBoundaryEdges[nv].Add(edge);
                        }
                    }

                    Debug.Log("comparison: " + vertexBoundaryEdges[vertex].Count + " " + updatedVertexBoundaryEdges[vertex].Count);
                    if (updatedVertexBoundaryEdges[vertex]. Count <= 2) {
                        break;
                    }
                }
            }
            
        }

        UpdateMesh();
    }
    

    void UpdateMesh() {
        Material tempMat = meshGameObj.GetComponent<Renderer>().material;
        MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();

        mesh.Clear();
        mesh.vertices = vertices.ToArray();
        mesh.triangles = triangles.ToArray();
        mesh.RecalculateNormals();
        meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

        renderer.material = tempMat;
        // holes_list.Clear();
    }

    HashSet<Vertex> current_boundary_vertices = new HashSet<Vertex>();
    List<Edge> overlappingTriangles = new List<Edge>();
    void FillHolesDecimation() {
        if (halfedgeMesh != null && current_hole_idx < holes_list.Count)
        {
            // Actual Code
            List<Edge> hole = holes_list[current_hole_idx];
            loopSplit.totalCount = hole.Count;
            loopSplit.halfedgeMesh = halfedgeMesh;

            foreach (var e in hole) {
                current_boundary_vertices.Add(e.vertex);
            }

            // loopSplit.TriangulateHole(hole, null, null);
            // subMeshTriangles = new List<int>();
            // List<Edge> newedges = loopSplit.GetNewEdges();
            // Debug.Log("new edges count: " + newedges.Count);
            // edgeFlip = new EdgeFlip(loopSplit.GetNewEdges());

            // new code

            loopSplit.NewTriangulateHole(hole, null, null);
            subMeshTriangles = new List<int>();
            List<Edge> newedges = loopSplit.GetNewEdges();
            // Debug.Log("new edges count: " + newedges.Count);
            current_hole_edges = new List<Edge>(newedges); //newedges;
            halfedgeMesh = loopSplit.halfedgeMesh;

            // VisualizeEdges(current_hole_edges);
            // edgeFlip.halfedgeMesh = loopSplit.halfedgeMesh;
            
            // Debugging code
            // bestv1 = loopSplit.bestv1;
            // bestv2 = loopSplit.bestv2;
            // isDrawSplitLine = true;
            // holes_list[current_hole_idx] = loopSplit.GetUpdatedHole();

            // Update Mesh
            vertices = loopSplit.GetUpdatedVertices();
            mesh.vertices = vertices.ToArray();
            subMeshTriangles = loopSplit.GetSubmesh();

            mesh.subMeshCount = 4;
            // mesh.SetTriangles(triangles.ToArray(), 0);
            mesh.SetTriangles(subMeshTriangles.ToArray(), 1);
            // mesh.RecalculateNormals();

            int[] wires = GetWireframeLines(triangles.ToArray());
            int[] submeshWires = GetWireframeLines(subMeshTriangles.ToArray());

            mesh.SetTriangles(triangles.ToArray(), 2);
            mesh.SetTriangles(subMeshTriangles.ToArray(), 3);
            mesh.SetIndices(wires, MeshTopology.Lines, 2); // Wireframe submesh
            mesh.SetIndices(submeshWires, MeshTopology.Lines, 3);

            MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();
            Material[] materials = new Material[] {
                meshGameObj.GetComponent<Renderer>().material,
                mat,
                wireframeMat,
                wireframeMat
            };            
            renderer.materials = materials;
            
            meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

            newEdgeDict = loopSplit.newEdgeDict;
            // current_hole_edges = new List<Edge>(freshNewEdges);
            // newEdgeDict = freshNewEdgeDict;

            // Debug.Log("new edge dict count:  " + newEdgeDict.Count + " " + current_hole_edges.Count);
            
            // Highlighting skinnier triangles
            foreach (var kvp in newEdgeDict) {
                var e = kvp.Value;
                float aspRatio = CalculateAspectRatio(e.vertex.position, e.next.vertex.position, e.next.next.vertex.position);

                Debug.Log("checking aspect ratios..." + aspRatio);

                if (aspRatio >90f) {
                    showBoundaries = true;
                    overlappingTriangles.Add(e);
                    GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    sphere.transform.position = e.vertex.position;
                    sphere.transform.localScale = Vector3.one * 0.0005f;
                    sphere.GetComponent<Renderer>().material.color = Color.red;
                    GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    sphere2.transform.position = e.next.vertex.position;
                    sphere2.transform.localScale = Vector3.one * 0.0005f;
                    sphere2.GetComponent<Renderer>().material.color = Color.green;
                    GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    sphere3.transform.position = e.next.next.vertex.position;
                    sphere3.transform.localScale = Vector3.one * 0.0005f;
                    sphere3.GetComponent<Renderer>().material.color = Color.blue;
                }
            }
        }
    }

    float CalculateAspectRatio(Vector3 A, Vector3 B, Vector3 C) {
        float distA = Vector3.Distance(A, B);
        float distB = Vector3.Distance(B, C);
        float distC = Vector3.Distance(C, A);

        float s = ( distA + distB + distC ) / 2f;
        float ar = (distA * distB * distC) / (8f * (s - distA) * (s - distB) * (s - distC));
        float k = (8f * (s - distA) * (s - distB) * (s - distC));
        if (k == 0) return 0;
        return ar;
    }

    int[] GetWireframeLines(int[] wireTriangles) {
        int[] wires = new int[wireTriangles.Length * 2];
        for (int iTria = 0; iTria < wireTriangles.Length / 3; iTria++) {
            for (int iVertex = 0; iVertex < 3; iVertex++) {
                wires[6 * iTria + 2 * iVertex] = wireTriangles[3 * iTria + iVertex];
                wires[6 * iTria + 2 * iVertex + 1] = wireTriangles[3 * iTria + (iVertex + 1) % 3];
            }
        }
        return wires;
    }

    void VisualizeEdges(List<Edge> edges) {
        foreach (var e in edges) {
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere.transform.position = e.vertex.position;
            sphere.transform.localScale = Vector3.one * 0.001f;
            sphere.GetComponent<Renderer>().material.color = Color.yellow;

            GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere2.transform.position = e.next.vertex.position;
            sphere2.transform.localScale = Vector3.one * 0.001f;
            sphere2.GetComponent<Renderer>().material.color = Color.red;

            Debug.Log("Checking opposite..." + e.opposite);
        }
    }

     void PerformEdgeFlip() {
        Debug.Log("before flip triangles: " + subMeshTriangles.Count);
        // edgeFlip = new EdgeFlip(loopSplit.GetNewEdges(), edgeFlipIters);
        // Debug.Log("before edge flip current edge count: " + current_hole_edges.Count + " " + subMeshTriangles.Count);
        edgeFlip.new_edges = current_hole_edges;
        edgeFlip.newEdgeDict = newEdgeDict;
        edgeFlip.triangles = subMeshTriangles; //triangles.ToList();
        edgeFlip.halfedgeMesh = halfedgeMesh;

        // bool isFlip = edgeFlip.PerformEdgeFlip();
        // edgeFlip.EdgeFlipPublic();
        bool isFlip = edgeFlipMethod == EdgeFlipMethod.AspectRatio ? edgeFlip.PerformEdgeFlip() : edgeFlip.EdgeFlipCircumcircle();

        if (isFlip) {
            Debug.Log("after flip triangles: " + edgeFlip.new_triangles.Count);

            // Update Mesh
            // mesh.SetTriangles(edgeFlip.new_triangles.ToArray(), 1);
            // subMeshTriangles = new List<int>(edgeFlip.new_triangles);
            // mesh.RecalculateBounds();
            // mesh.RecalculateNormals();
            // MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();
            // Material tempMat = meshGameObj.GetComponent<Renderer>().material;
            // Material[] materials = new Material[] {
            //     tempMat,
            //     mat
            // };            
            // renderer.materials = materials;
            // meshGameObj.GetComponent<MeshFilter>().mesh = mesh;
            
            // triangles = edgeFlip.new_triangles;
            subMeshTriangles = new List<int>(edgeFlip.new_triangles);
            mesh.Clear();
            mesh.vertices = vertices.ToArray();
            mesh.subMeshCount = 4;
            mesh.SetTriangles(triangles.ToArray(), 0);
            mesh.SetTriangles(subMeshTriangles.ToArray(), 1);
            mesh.RecalculateNormals();

            int[] wires = GetWireframeLines(triangles.ToArray());
            int[] submeshWires = GetWireframeLines(subMeshTriangles.ToArray());

            mesh.SetTriangles(triangles.ToArray(), 2);
            mesh.SetTriangles(subMeshTriangles.ToArray(), 3);
            mesh.SetIndices(wires, MeshTopology.Lines, 2); // Wireframe submesh
            mesh.SetIndices(submeshWires, MeshTopology.Lines, 3);

            MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();
            Material[] materials = new Material[] {
                baseMat,
                mat,
                wireframeMat,
                wireframeMat
            };            
            renderer.materials = materials;
            
            meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

            // edgeFlip.Reset();
            // current_hole_edges.Clear();
            // current_hole_edges.AddRange(edgeFlip.updated_edges);

            current_hole_edges = new List<Edge>(edgeFlip.updated_edges);
            newEdgeDict = new Dictionary<Tuple<int, int>, Edge>(edgeFlip.newEdgeDict); //new Dictionary<Tuple<int, int>, Edge>(edgeFlip.newEdgeDict); //edgeFlip.newEdgeDict;
            // newEdgeDict = new Dictionary<Tuple<int, int>, Edge>(edgeFlip.anothernewEdgeDict);
            edgeFlip.Reset();
        } else {
            Debug.Log("None of the edges were flipped!");
        }
        Debug.Log("after edge flip current edge count: " + newEdgeDict.Count + " " + current_hole_edges.Count);
    }

    void PerformEdgeSplit() {
        Debug.Log("before edge split: " + current_hole_edges.Count + " " + newEdgeDict.Count + " " + mesh.GetTriangles(1).Length); //+ " " + subMeshTriangles.Count + " " + edgeSplit.new_triangles.Count);
        edgeSplit.new_edges = current_hole_edges;
        edgeSplit.vertices = mesh.vertices.ToList();
        edgeSplit.halfedgeMesh = halfedgeMesh;
        edgeSplit.newEdgeDict = newEdgeDict;

        // Perform the actual vertex split
        edgeSplit.CreateEdgeSplit();

        // setting new splitted triangles with updated vertices
        Debug.Log("after split triangles: " + edgeSplit.new_triangles.Count);

        // Update the mesh
        // mesh.vertices = edgeSplit.vertices.ToArray();
        // mesh.SetTriangles(edgeSplit.new_triangles.ToArray(), 1);
        // subMeshTriangles = new List<int>(edgeSplit.new_triangles);
        // mesh.RecalculateNormals();
        // MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();
        // Material[] materials = new Material[] {
        //     meshGameObj.GetComponent<Renderer>().material,
        //     mat
        // };            
        // renderer.materials = materials;
        // meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

        mesh.Clear();
        mesh.vertices = edgeSplit.vertices.ToArray();
        vertices = edgeSplit.vertices;
        mesh.subMeshCount = 4;
        mesh.SetTriangles(triangles.ToArray(), 0);
        mesh.SetTriangles(edgeSplit.new_triangles.ToArray(), 1);
        mesh.RecalculateNormals();
        subMeshTriangles = new List<int>(edgeSplit.new_triangles);

        int[] wires = GetWireframeLines(triangles.ToArray());
        int[] submeshWires = GetWireframeLines(subMeshTriangles.ToArray());

        mesh.SetTriangles(triangles.ToArray(), 2);
        mesh.SetTriangles(subMeshTriangles.ToArray(), 3);
        mesh.SetIndices(wires, MeshTopology.Lines, 2); // Wireframe submesh
        mesh.SetIndices(submeshWires, MeshTopology.Lines, 3);

        MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();
        Material[] materials = new Material[] {
            baseMat,
            mat,
            wireframeMat,
            wireframeMat
        };            
        renderer.materials = materials;
        
        meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

        // Reset and update global variables
        
        current_hole_edges = new List<Edge>(edgeSplit.new_edges_created); //edgeSplit.new_edges;
        newEdgeDict = new Dictionary<Tuple<int, int>, Edge>(edgeSplit.newEdgeDict);
        // Debug.Log("after edge split: " + current_hole_edges.Count + " " + subMeshTriangles.Count +  " " + edgeSplit.new_triangles.Count);

        isEdgeSplit = true;
        smoothing_edges.AddRange(edgeSplit.new_vertex_edges);
        edgeSplit.Reset();

        Debug.Log("after edge split counts: " + newEdgeDict.Count + " " + current_hole_edges.Count);
    }

    List<Edge> smoothing_edges = new List<Edge>();
    void PerformSmoothing() {
        if (isEdgeSplit) {
            // smoothMesh.hole_edges = loopSplit.GetNewEdges();
            smoothMesh.vertices = mesh.vertices.ToList();
            smoothMesh.boundary_vertices = current_boundary_vertices;
            smoothMesh.SetHoleEdges(smoothing_edges);
            smoothMesh.SetHalfEdge(halfedgeMesh);
            smoothMesh.LaplacianSmoothing();

            // Update the Mesh
            // mesh.vertices = smoothMesh.vertices.ToArray();
            // mesh.RecalculateNormals();
            // mesh.RecalculateBounds();
            // MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();
            // Material[] materials = new Material[] {
            //     meshGameObj.GetComponent<Renderer>().material,
            //     mat
            // };            
            // renderer.materials = materials;
            // meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

            mesh.Clear();
            mesh.vertices = smoothMesh.vertices.ToArray();
            vertices = edgeSplit.vertices;
            mesh.subMeshCount = 4;
            mesh.SetTriangles(triangles.ToArray(), 0);
            mesh.SetTriangles(subMeshTriangles.ToArray(), 1);
            mesh.RecalculateNormals();

            int[] wires = GetWireframeLines(triangles.ToArray());
            int[] submeshWires = GetWireframeLines(subMeshTriangles.ToArray());

            mesh.SetTriangles(triangles.ToArray(), 2);
            mesh.SetTriangles(subMeshTriangles.ToArray(), 3);
            mesh.SetIndices(wires, MeshTopology.Lines, 2); // Wireframe submesh
            mesh.SetIndices(submeshWires, MeshTopology.Lines, 3);

            MeshRenderer renderer = meshGameObj.GetComponent<MeshRenderer>();
            Material[] materials = new Material[] {
                baseMat,
                mat,
                wireframeMat,
                wireframeMat
            };            
            renderer.materials = materials;
            
            meshGameObj.GetComponent<MeshFilter>().mesh = mesh;

            smoothing_edges = smoothMesh.hole_edges;
        } else {
            Debug.Log("Cannot smooth hole before edge split!");
        }
    }

    bool showBoundaries = false;
    void CreateHole() {
        Debug.Log("mouse pos: " + Input.mousePosition);
        Vector3 fixedPos = Input.mousePosition; 
        // Vector3 fixedPos = new Vector3(440f, 308f, 0f);
        Ray inputRay = Camera.main.ScreenPointToRay(fixedPos); //Input.mousePosition);
        RaycastHit hit;

        Debug.Log("raycast check: " + Physics.Raycast(inputRay, out hit, Mathf.Infinity));

		if (Physics.Raycast(inputRay, out hit, Mathf.Infinity)) {
            Debug.Log("raycast check: " + hit);
            MeshFilter meshFilter = hit.collider.GetComponent<MeshFilter>();

            if (meshFilter != null) {
                int hitIdx = hit.triangleIndex;
                Debug.Log("do we have hitidx" + hitIdx);
                isClicked = false;
                List<int> currTriangles = triangles; //mesh.triangles.ToList();
                List<int> newTriangles = new List<int>();

                for (int i = 0; i < currTriangles.Count; i += 3)
                {
                    // Get the three vertices of the triangle
                    Vector3 v1 = vertices[currTriangles[i]];
                    Vector3 v2 = vertices[currTriangles[i + 1]];
                    Vector3 v3 = vertices[currTriangles[i + 2]];

                    // Check if the triangle is inside or intersects the sphere
                    if (!IsTriangleInSphere(v1, v2, v3, hit.point, triangleCreationRadius))
                    {
                        // Keep the triangle if it doesn't intersect the sphere
                        newTriangles.Add(currTriangles[i]);
                        newTriangles.Add(currTriangles[i + 1]);
                        newTriangles.Add(currTriangles[i + 2]);

                    } else {
                        Debug.Log("removing triangle...");
                        halfedgeMesh.RemoveTriangle(currTriangles[i], currTriangles[i + 1], currTriangles[i + 2]);
                    }
                    
                }
                halfedgeMesh.RemoveAllEdges();

                // Update the mesh with the filtered triangles
                // mesh.triangles = newTriangles.ToArray();
                // triangles = newTriangles;
                
                // // Recalculate bounds and normals
                // mesh.RecalculateBounds();
                // mesh.RecalculateNormals();
                // halfedgeMesh.edgesToRemove.Clear();

                // mesh.subMeshCount = 2; 
                mesh.SetTriangles(newTriangles, 0); 
                triangles = newTriangles;

                int[] wires = GetWireframeLines(newTriangles.ToArray());
                mesh.SetIndices(wires, MeshTopology.Lines, 1); // Wireframe submesh

                // // ✅ Recalculate bounds and normals only for the main submesh
                // mesh.RecalculateBounds();
                // mesh.RecalculateNormals();

                halfedgeMesh.edgesToRemove.Clear();
            }
		}
    }

    private bool IsTriangleInSphere(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 sphereCenter, float sphereRadius)
    {
        // Check if any vertex is inside the sphere
        if (Vector3.Distance(v1, sphereCenter) <= sphereRadius ||
            Vector3.Distance(v2, sphereCenter) <= sphereRadius ||
            Vector3.Distance(v3, sphereCenter) <= sphereRadius)
        {
            return true;
        }

        // Check if the sphere intersects the triangle (use bounding sphere for simplification)
        Vector3 triangleCentroid = (v1 + v2 + v3) / 3f;
        float distanceToCentroid = Vector3.Distance(triangleCentroid, sphereCenter);

        if (distanceToCentroid <= sphereRadius)
        {
            return true;
        }

        // Further intersection checks can be added if needed (e.g., triangle edges with sphere)
        return false;
    }
    void RotateHole(Vector3 axis, float angle) {
        List<Edge> hole_edges = holes_list[current_hole_idx];
        List<Vector3> hole_vertices = hole_edges.Select(edge => edge.vertex.position).ToList();
        Vector3 center = Vector3.zero;
        foreach (var vertex in hole_vertices) {
            center += vertex;
        }
        center /= hole_vertices.Count;

        Camera.main.transform.RotateAround(center, axis, angle);
    }

    void CameraFocus () {
        List<Edge> hole_edges = holes_list[current_hole_idx];
        Plane plane = loopSplit.CreateNewAvgPlane(hole_edges);
        Vector3 normal = plane.normal;

        // Step 3: Compute the center of the hole
        List<Vector3> hole_vertices = hole_edges.Select(edge => edge.vertex.position).ToList();
        Vector3 center = Vector3.zero;
        foreach (var vertex in hole_vertices) {
            center += vertex;
        }
        center /= hole_vertices.Count;

        float aspect = (float)Screen.width / (float)Screen.height;

        Camera.main.transform.position = center + (-normal) * 0.05f; //- new Vector3(0f, 0f, 0.05f);
        // Vector3 cameraToCenter = center - Camera.main.transform.position;
        Camera.main.transform.LookAt(center);
    }

    int GetSubmeshIndex(Mesh mesh, int triangleIndex)
    {
        for (int submesh = 0; submesh < mesh.subMeshCount; submesh++)
        {
            int[] submeshTriangles = mesh.GetTriangles(submesh);
            int submeshTriangleCount = submeshTriangles.Length / 3;

            if (triangleIndex < submeshTriangleCount)
            {
                return submesh;
            }

            // Move to the next batch of triangles
            triangleIndex -= submeshTriangleCount;
        }
        return -1; // Should not happen if mesh data is valid
    }

    List<Edge> colored_vertices = new List<Edge>();
    int currTriangle;
    Edge currEdge;
    void HighlightTriangle() {
        Debug.Log("highlight triangle");

        Ray inputRay = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(inputRay, out hit, Mathf.Infinity)) {
            MeshFilter meshFilter = hit.collider.GetComponent<MeshFilter>();

            // if (meshFilter != null) {
            //     Mesh mesh = meshFilter.mesh;
            //     Mesh newMesh = Instantiate(mesh); // Clone the mesh
            //     meshFilter.mesh = newMesh;

            //     int[] triangles = newMesh.triangles;
            //     Color[] colors = newMesh.colors;

            //     if (colors.Length == 0) {
            //         colors = new Color[newMesh.vertexCount]; // Ensure colors array exists
            //         for (int i = 0; i < colors.Length; i++)
            //             colors[i] = Color.white; // Default color
            //     }

            //     int triIndex = hit.triangleIndex * 3;
            //     currTriangle = triIndex;
            //     colors[triangles[triIndex]] = Color.red;
            //     colors[triangles[triIndex + 1]] = Color.red;
            //     colors[triangles[triIndex + 2]] = Color.red;

            //     newMesh.colors = colors;
            // }

            
            int hitTriangleIndex = hit.triangleIndex * 3;
            // currTriangle = triangleIndex;
            Debug.Log("triangle index: " + hit.triangleIndex + " " + subMeshTriangles.Count + " " + triangles.Count); //+ " " + triIndex);

            int globalIndex = 0;

            for (int submesh = 0; submesh < mesh.subMeshCount; submesh++)
            {
                if (submesh < 2) {
                    int[] triangles = mesh.GetTriangles(submesh);

                    int numTriangles = triangles.Length / 3; // Convert indices count to triangle count
                    if (hitTriangleIndex >= globalIndex && hitTriangleIndex < globalIndex + numTriangles)
                    {
                        Debug.Log("SUBMESH FOUND YAHOO " + submesh);
                    }

                    globalIndex += numTriangles;
                }
            }
            // if (triangleToSubmeshMap.TryGetValue(hit.triangleIndex, out int submeshIndex))
            // {
            //     Debug.Log("Triangle belongs to Submesh: " + submeshIndex);
            // }
            // int submeshIndex = GetSubmeshIndex(mesh, hit.triangleIndex);

            // Debug.Log("Hit Submesh Index: " + submeshIndex);

            // if (submeshIndex == 1)
            // {
            //     Debug.Log("Triangle is from submesh 1!");
            //     // Handle logic specific to submesh 1
            // }
            // int i0 = subMeshTriangles[triangleIndex * 3];     // First vertex index
            // int i1 = subMeshTriangles[triangleIndex * 3 + 1]; // Second vertex index
            // int i2 = subMeshTriangles[triangleIndex * 3 + 2];

            // Tuple<int, int> edgeKey1 = Tuple.Create(i0, i1);
            // Tuple<int, int> edgeKey2 = Tuple.Create(i1, i2);
            // Tuple<int, int> edgeKey3 = Tuple.Create(i2, i0);

            // Edge edge1 = halfedgeMesh.edgesDict.ContainsKey(edgeKey1) ? halfedgeMesh.edgesDict[edgeKey1] : null;
            // Edge edge2 = halfedgeMesh.edgesDict.ContainsKey(edgeKey2) ? halfedgeMesh.edgesDict[edgeKey2] : null;
            // Edge edge3 = halfedgeMesh.edgesDict.ContainsKey(edgeKey3) ? halfedgeMesh.edgesDict[edgeKey3] : null;

            // Debug.Log("checking if we found triangle...." + edge1 + " " + edge2 + " " + edge3);

            foreach (var kvp in halfedgeMesh.edgesDict)
            {
                Edge edge = kvp.Value;

                // Ensure we are checking the primary (not opposite) edge
                if (edge.face != null && edge.face.face_idx == currTriangle)
                {
                    Debug.Log("did we find it???");
                    GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    sphere.transform.position = edge.vertex.position;
                    sphere.transform.localScale = Vector3.one * 0.001f;
                    sphere.GetComponent<Renderer>().material.color = Color.red;
                    GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    sphere2.transform.position = edge.next.vertex.position;
                    sphere2.transform.localScale = Vector3.one * 0.001f;
                    sphere2.GetComponent<Renderer>().material.color = Color.red;
                    GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    sphere3.transform.position = edge.next.next.vertex.position;
                    sphere3.transform.localScale = Vector3.one * 0.001f;
                    sphere3.GetComponent<Renderer>().material.color = Color.red;

                    currEdge = edge;
                }
            }
        }
    }


    bool isClicked = false;
    float translate_factor = 0.001f;
    float rotationSpeed = 0.08f;
    float lookSpeed = 1f;

    private float yaw = 0f;
    private float pitch = 0f;
    void Update() {
        float dx = Input.GetAxis ("Horizontal");
		float dz = Input.GetAxis ("Vertical");
        float upDown = 0;

        // Game View Navigation Controls using Keyboard
        if (Input.GetKey(KeyCode.Q)) upDown = -1; // Q to move down
        if (Input.GetKey(KeyCode.E)) upDown = 1; // E to move up
        Vector3 move = new Vector3(dx, upDown, dz) * rotationSpeed * Time.deltaTime;
        transform.Translate(move);

        // Mouse Click Navigation
        if (Input.GetMouseButtonDown(0) && !isClicked && !isTriangleHighlight) { // Left click to create new holes
            isClicked = true;
            CreateHole();
            holes_list.Clear();
            IdentifyHoles();
        }
        if (Input.GetMouseButtonDown(0) && isTriangleHighlight) { // Left click to highlight holes
            HighlightTriangle();
        }
        if (Input.GetMouseButton(1)) { // Right-click to look around
            yaw = transform.eulerAngles.y;
            pitch = transform.eulerAngles.x;
            yaw += lookSpeed * Input.GetAxis("Mouse X");
            pitch -= lookSpeed * Input.GetAxis("Mouse Y");
            pitch = Mathf.Clamp(pitch, -90f, 90f);

            transform.eulerAngles = new Vector3(pitch, yaw, 0f);
        }

        // Key Press Navigation
        // Hole navigation. "H" for Next and "P" for previous
        if (Input.GetKeyDown(KeyCode.H)) {
            isDrawing = true;
            current_hole_idx = (current_hole_idx + 1) % holes_list.Count;
            Debug.Log("Current hole vertex count: " + holes_list[current_hole_idx].Count);
            current_boundary_vertices.Clear();
        }
        if (Input.GetKeyDown(KeyCode.P)) {
            isDrawing = true;
            current_hole_idx = (current_hole_idx - 1 + holes_list.Count) % holes_list.Count;
            Debug.Log("Current hole vertex count: " + holes_list[current_hole_idx].Count);
            current_boundary_vertices.Clear();
        }
        // "Toggle" between mouse click operations
        if (Input.GetKeyDown(KeyCode.T)) {
            isTriangleHighlight = !isTriangleHighlight;
        }

        // Hole Focus and Rotation. 
        if (isDrawing && Input.GetKeyDown(KeyCode.Alpha1)) {
            CameraFocus();
        }
        if (isDrawing && Input.GetKeyDown(KeyCode.Alpha2)) {
            RotateHole(Vector3.up, 500 * Time.deltaTime);
        }
        if (isDrawing && Input.GetKeyDown(KeyCode.Alpha3)) {
            RotateHole(Vector3.up, -500 * Time.deltaTime);
        }

        // Hole modification algorithms
        if (Input.GetKeyDown(KeyCode.N)) {
            RemoveNonManifold();
        }
        if (Input.GetKeyDown(KeyCode.Alpha4)) {
            PerformEdgeFlip();
        }
        if (Input.GetKeyDown(KeyCode.Alpha5)) {
            PerformEdgeSplit();
        }
        if (Input.GetKeyDown(KeyCode.Alpha6)) {
            PerformSmoothing();
        }
        
        // Hole filling
        if (isDrawing && Input.GetKeyDown(KeyCode.F)) {
            Debug.Log("filling holes...");
            if (holeFillingMethod == FillMethod.Centroid) FillHolesCentroid();
            else FillHolesDecimation();
        }
    }

    void VisualizeCurrentEdge(Edge e) {
        Vector3 source = e.vertex.position;
        Vector3 target = e.next.vertex.position;

        // Face face = e.face;
        Vector3 diff = target - source;
        Vector3 midpoint = (diff * 0.5f) + source;

        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.position = midpoint;
        sphere.transform.localScale = Vector3.one * 0.003f;
        sphere.GetComponent<Renderer>().material.color = Color.red;

        GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere2.transform.position = new Vector3(midpoint.x + 0.1f, midpoint.y + 0.1f, midpoint.z + 0.1f);
        sphere2.transform.localScale = Vector3.one * 0.002f;
        sphere2.GetComponent<Renderer>().material.color = Color.red;
    }

    public void ExportMeshToPLY(string filePath)
    {
        using (StreamWriter writer = new StreamWriter(filePath))
        {
            writer.WriteLine("ply");
            writer.WriteLine("format ascii 1.0");
            writer.WriteLine("element vertex " + vertices.Count);
            writer.WriteLine("property float x");
            writer.WriteLine("property float y");
            writer.WriteLine("property float z");
            writer.WriteLine("property float nx");
            writer.WriteLine("property float ny");
            writer.WriteLine("property float nz");
            // writer.WriteLine("property uchar red");
            // writer.WriteLine("property uchar green");
            // writer.WriteLine("property uchar blue");
            writer.WriteLine("element face " + triangles.Count / 3);
            writer.WriteLine("property list uchar int vertex_index");
            writer.WriteLine("end_header");

            Vector3[] normals = mesh.normals;
            for (int i = 0; i < vertices.Count; i++)
            {
                Vector3 vertex = vertices[i];
                Vector3 normal = normals.Length > 0 ? normals[i] : Vector3.zero;
                writer.WriteLine($"{vertex.x} {vertex.y} {vertex.z} {normal.x} {normal.y} {normal.z}"); //{vertexColors[i].r * 255} {vertexColors[i].g * 255} {vertexColors[i].b * 255}");
                // {normal.x} {normal.y} {normal.z} 
            }

            for (int i = 0; i < triangles.Count; i += 3)
            {
                writer.WriteLine("3 " + triangles[i] + " " + triangles[i + 1] + " " + triangles[i + 2]);
            }
        }

        Debug.Log("Mesh exported to " + filePath);
    }

}

public class Vertex {
    public int index, valence;
    public Vector3 position;
    public Edge edge;
    // Vector3 normal;
    // Face[] vertex_faces;
    List<Edge> vertex_edges;

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

public class Face {
    public Edge edge;
    // public List<int> face_vertices;
    public int[] face_vertices;
    public int face_idx;

    public Face(Edge edge) {
        this.edge = edge;
        // face_vertices = new List<int>();
        face_vertices = new int[3];
    }
}

public class Edge
{
    public Edge next, opposite;
    public Face face;
    public Vertex vertex;
    public bool isBoundary = false;
    public bool isInLoop = false;
    // public int vertex1, vertex2;
    // public Edge prev;
    // public Face face;
    
    public Edge() {
        this.vertex = null;
        this.next = this.opposite = null;
        this.isBoundary = false;
    }
    public Edge(Vertex v) {
        this.vertex = v;
        this.next = this.opposite = null;
        this.isBoundary = false;
    }
}