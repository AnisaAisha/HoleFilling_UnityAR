using System.Collections.Generic;
using UnityEngine;

public class BarycentricMesh : MonoBehaviour
{
    public Material wireframeMaterial; // Assign a wireframe material in the Inspector

    void Start()
    {
        // Get the original mesh (unchanged for processing)
        Mesh originalMesh = GetComponent<MeshFilter>().mesh;
        
        // Generate a wireframe mesh
        Mesh wireframeMesh = GenerateWireframeMesh(originalMesh);

        // Create a new GameObject for the wireframe overlay
        GameObject wireframeObject = new GameObject("WireframeOverlay");
        wireframeObject.transform.SetParent(transform, false);
        
        // Add MeshFilter and MeshRenderer for the wireframe
        MeshFilter wireframeFilter = wireframeObject.AddComponent<MeshFilter>();
        wireframeFilter.mesh = wireframeMesh;

        MeshRenderer wireframeRenderer = wireframeObject.AddComponent<MeshRenderer>();
        wireframeRenderer.material = wireframeMaterial;

        // Ensure wireframe renders on top
        wireframeRenderer.sortingOrder = 1;
    }

    Mesh GenerateWireframeMesh(Mesh mesh)
    {
        int[] triangles = mesh.triangles;
        Vector3[] originalVertices = mesh.vertices;
        Vector2[] originalUVs = mesh.uv;
        Vector3[] originalNormals = mesh.normals;

        List<Vector3> newVertices = new List<Vector3>();
        List<Vector2> newUVs = new List<Vector2>();
        List<Vector3> newNormals = new List<Vector3>();
        List<int> newTriangles = new List<int>();
        List<Vector3> barycentricCoords = new List<Vector3>();

        for (int i = 0; i < triangles.Length; i += 3)
        {
            for (int j = 0; j < 3; j++)
            {
                int oldIndex = triangles[i + j];

                // Duplicate the vertex
                newVertices.Add(originalVertices[oldIndex]);
                newUVs.Add(originalUVs[oldIndex]);
                newNormals.Add(originalNormals[oldIndex]);

                // Assign unique barycentric coordinates for wireframe rendering
                if (j == 0) barycentricCoords.Add(new Vector3(1, 0, 0));
                else if (j == 1) barycentricCoords.Add(new Vector3(0, 1, 0));
                else barycentricCoords.Add(new Vector3(0, 0, 1));

                newTriangles.Add(newVertices.Count - 1);
            }
        }

        Mesh wireframeMesh = new Mesh();
        wireframeMesh.vertices = newVertices.ToArray();
        wireframeMesh.triangles = newTriangles.ToArray();
        wireframeMesh.uv = newUVs.ToArray();
        wireframeMesh.normals = newNormals.ToArray();
        wireframeMesh.SetUVs(1, barycentricCoords); // Store barycentric coords in UV2

        return wireframeMesh;
    }
}
