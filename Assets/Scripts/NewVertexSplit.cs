using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class NewVertexSplit : MonoBehaviour
{
    public List<Vector3> vertices;
    HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();
    public List<Edge> new_edges = new List<Edge>();
    public List<int> subMeshTriangles = new List<int>();


    // public NewVertexSplit(List<Edge> edges) {
    //     new_edges = edges;
    // }

    Vector3 FindMidpoint(Vertex a, Vertex b) {
        return (a.position + b.position) / 2;
    }

    Vertex AddNewVertex(Edge e) {
        Vector3 midpoint = FindMidpoint(e.vertex, e.next.vertex);
        Vertex newVertex = new Vertex(midpoint, vertices.Count);
        vertices.Add(midpoint);
        return newVertex;
    }


    List<Edge> GetSharedTriangleEdges(Edge e) {
        Edge startEdge = e;
        Edge curr_edge = startEdge;
        List<Edge> triangleEdges = new List<Edge>();

        do {
            curr_edge = curr_edge.next;
            triangleEdges.Add(curr_edge);
        } while (curr_edge != startEdge && curr_edge != null); 

        return triangleEdges;
    }

    Edge FindLongestEdge() {
        float maxLength = float.MinValue;
        Edge longestEdge = null;

        foreach(var e in new_edges) {
            float edgeLength = Vector3.Distance(e.vertex.position, e.next.vertex.position);
            if (edgeLength > maxLength) {
                maxLength = edgeLength;
                longestEdge = e;
            }
        }
        return longestEdge;
    }

    Edge GetUncommonEdge(Edge startEdge) {
        Edge edge1 = startEdge;
        Edge edge2 = startEdge.next;
        Edge edge3 = startEdge.next.next;

        // Identify edges to exclude
        HashSet<Edge> excludeEdges = new HashSet<Edge> {
            startEdge, 
            startEdge.next,
            startEdge.opposite
        };

        // Check each edge and return the one not in the exclude list
        if (!excludeEdges.Contains(edge1)) return edge1;
        if (!excludeEdges.Contains(edge2)) return edge2;
        if (!excludeEdges.Contains(edge3)) return edge3;

        return null; // No uncommon edge found

        // Edge currEdge = startEdge;
        // List<Edge> triangleEdges = new List<Edge>();

        // // Collect all edges of the triangle
        // do {
        //     currEdge = currEdge.next;
        //     triangleEdges.Add(currEdge);
        // } while (currEdge != startEdge && currEdge != null);

        // // Identify edges to exclude (startEdge, startEdge.next, startEdge.opposite)
        // HashSet<Edge> excludeEdges = new HashSet<Edge> {
        //     startEdge, 
        //     startEdge.next,
        //     startEdge.opposite
        // };

        // // Find the edge that is not in the exclude list
        // foreach (var edge in triangleEdges) {
        //     if (!excludeEdges.Contains(edge)) {
        //         return edge; // Return the uncommon edge
        //     }
        // }

        // return null; // No uncommon edge found (degenerate case)
    }


    public void EdgeSplitWithNewVertex() {
        Edge edge = FindLongestEdge();
        Vertex newVertex = AddNewVertex(edge);
               
        // split edge and create two new edges
        Edge e1 = new Edge(edge.vertex); // From start vertex to midpoint
        Edge e2 = new Edge(newVertex);   // From midpoint to end vertex

        e1.next = e2;
        e2.next = edge.next;

        // e1.opposite = e2.opposite; // Update opposites if necessary
        // e2.opposite = e1;

        // edge.vertex = newVertex;   // Update the original edge to point to the new vertex
        // edge.next = e2;  
        
        new_edges.Add(e1);
        new_edges.Add(e2);

        // Add these triangles to triangle list 
        Edge x = GetUncommonEdge(edge);
        Edge y = GetUncommonEdge(edge.opposite);

        // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //         sphere.transform.position = x.vertex.position;
        //         sphere.transform.localScale = Vector3.one * 0.001f;
        //         sphere.GetComponent<Renderer>().material.color = Color.yellow;
        //         GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //         sphere2.transform.position = y.vertex.position;
        //         sphere2.transform.localScale = Vector3.one * 0.001f;
        //         sphere2.GetComponent<Renderer>().material.color = Color.yellow;

        new_triangles = subMeshTriangles;

        new_triangles.Add(e1.vertex.index);
        new_triangles.Add(newVertex.index);
        new_triangles.Add(x.vertex.index);

        new_triangles.Add(x.vertex.index);
        new_triangles.Add(newVertex.index);
        new_triangles.Add(e2.next.vertex.index);

        new_triangles.Add(y.vertex.index);
        new_triangles.Add(newVertex.index);
        new_triangles.Add(e1.vertex.index);

        new_triangles.Add(e2.next.vertex.index);
        new_triangles.Add(newVertex.index);
        new_triangles.Add(y.vertex.index);

        // AddTriangle(edge.vertex.index, edge.next.vertex.index, edge.next.next.vertex.index);
        // RemoveTriangle(edge.vertex.index, edge.next.vertex.index, edge.next.next.vertex.index);
        // new_edges.Remove(edge);
        // new_triangles = subMeshTriangles.Concat(new_triangles).ToList();

        // foreach(var t in subMeshTriangles) {
        //     if (t != edge.vertex.index || t != edge.next.vertex.index || t != edge.next.next.vertex.index) {
        //         new_triangles.Add(t);
        //     }
        // }
        // HashSet<int> verticesToRemove = new HashSet<int> {
        //     edge.vertex.index,
        //     edge.next.vertex.index,
        //     edge.next.next.vertex.index
        // };

        // // Remove all triangles that contain any of the vertices in the verticesToRemove set
        // new_triangles = new_triangles.Where(triangle => 
        //     !verticesToRemove.Contains(triangle)).ToList();

        // Debug.Log("" + new_triangles.Count);
    }

    public void Reset() {
        // vertices.Clear();
        // triangles.Clear();
        new_triangles.Clear();
        // new_edges.Clear();
    }

    void AddTriangle(int p, int q, int r) {
        for (int i = 0; i < triangles.Count; i+=3) {
            int a = triangles[i];
            int b = triangles[i + 1];
            int c = triangles[i + 2];
            // Debug.Log("remove check: " + a + " " + b + " " + c + " " + p + " " + q + " " + r);

            // Check if the triangle matches (p, q, r) in any order
            if ((a == p && b == q && c == r) ||
                (a == p && b == r && c == q) ||
                (a == q && b == p && c == r) ||
                (a == q && b == r && c == p) ||
                (a == r && b == p && c == q) ||
                (a == r && b == q && c == p)) 
            {
                Debug.Log("triangle found, removing....");
                // Remove this specific triangle
                triangles.RemoveRange(i, 3);
                // break;
                
            }
        }
    }

    void RemoveTriangle(int p, int q, int r) {
        for (int t = 0; t < triangles.Count; t += 3) {
            int a = triangles[t];
            int b = triangles[t + 1];
            int c = triangles[t + 2];
            // Debug.Log("remove check: " + a + " " + b + " " + c + " " + p + " " + q + " " + r);

            // Check if the triangle matches (p, q, r) in any order
            if ((a == p && b == q && c == r) ||
                (a == p && b == r && c == q) ||
                (a == q && b == p && c == r) ||
                (a == q && b == r && c == p) ||
                (a == r && b == p && c == q) ||
                (a == r && b == q && c == p)) 
            {
                Debug.Log("triangle found, removing....");
                // Remove this specific triangle
                triangles.RemoveRange(t, 3);
                // break;
            }
        }
    }

    public List<int> GetTriangles() {
        return triangles;
    }
}
