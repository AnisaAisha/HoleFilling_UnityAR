using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimplifyMesh : MonoBehaviour
{
    float minAR = float.MinValue;
    int maxIter = 2;
    Vector3[] vertices;
    public List<Edge> new_edges = new List<Edge>();
    public List<Edge> updated_edges = new List<Edge>();
    List<Edge> should_flip = new List<Edge>();
    public HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();
    public Dictionary<Tuple<int, int>, Edge> newEdgeDict;

    public SimplifyMesh(List<Edge> edges, int iter) {
        new_edges = edges;
        maxIter = iter;
    }

    public void EdgeFlipPublic() {
        // while (minAR > 1.25f) {
        // int counter = 0;
        List<Edge> persistentEdges = new List<Edge>(new_edges);
        List<int> persistentTriangles = new List<int>(new_triangles);
        for(int i = 0; i < maxIter; i++) {
            Debug.Log("COUNTER CHECK " + i + " " + new_edges.Count);
            EdgeFlip();

            persistentEdges.AddRange(new_edges);
            persistentTriangles.AddRange(new_triangles);

            triangles.Clear();
            triangles.AddRange(new_triangles);
            new_triangles.Clear();
            new_edges.Clear();
            new_edges.AddRange(updated_edges);
            updated_edges.Clear();
        }
        new_edges = persistentEdges;
        new_triangles = persistentTriangles;

        // List<Edge> persistentEdges = new List<Edge>(new_edges);
        // List<int> persistentTriangles = new List<int>(new_triangles);
        
        // EdgeFlip();

        // persistentEdges.AddRange(new_edges);
        // persistentTriangles.AddRange(new_triangles);

        // triangles.Clear();
        // triangles.AddRange(new_triangles);
        // new_triangles.Clear();
        // new_edges.Clear();
        // new_edges.AddRange(updated_edges);
        // updated_edges.Clear();

        // new_edges = persistentEdges;
        // new_triangles = persistentTriangles;
    }

    public void EdgeFlip() {
        Debug.Log("new edges: " + new_edges.Count);

        // Operate only on newly created edges to fill the hole
        foreach(var edge in new_edges) {
        
            Edge oppEdge = edge.opposite;
            var a = Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index);
            Debug.Log("does opp exist? " + oppEdge);
            if (edge.opposite != null && newEdgeDict.ContainsKey(a)) {

                // Calculate aspect ratios of current triangle and its opposite
                float currAR = CalculateAspectRatio(edge.vertex.position, edge.next.vertex.position, edge.next.next.vertex.position);
                float oppAR = CalculateAspectRatio(oppEdge.vertex.position, oppEdge.next.vertex.position, oppEdge.next.next.vertex.position);
                
                Edge e0 = edge.next;
                Edge e1 = edge.next.next;
                Edge opp0 = oppEdge.next;
                Edge opp1 = oppEdge.next.next;

                // Calculate new aspect ratios to check if the flip will be helpful or not
                float newCurrAR = CalculateAspectRatio(e0.vertex.position, e1.vertex.position, opp1.vertex.position);
                float newOppAR = CalculateAspectRatio(opp0.vertex.position, opp1.vertex.position, e1.vertex.position);

                Debug.Log("old and new aspect ratios : " + currAR + " " + oppAR + " " + newCurrAR + " " + newOppAR);

                if ((newCurrAR < currAR && newOppAR < oppAR) && newCurrAR > 0 && newOppAR > 0) {
                    should_flip.Add(edge);
                //     Debug.Log("flipping edge....");
                //     Debug.Log("new aspect ratios: " + newCurrAR + " " + newOppAR);

                //     RemoveTriangle(edge.vertex.index, e0.vertex.index, e1.vertex.index);
                //     RemoveTriangle(oppEdge.vertex.index, opp0.vertex.index, opp1.vertex.index);

                //     // first triangle flip
                //     Edge new_edge = new Edge(opp1.vertex);
                //     new_edge.next = e1;
                //     e1.next = opp0;
                //     opp0.next = new_edge;
                //     // opposite triangle flip
                //     Edge new_edge_opp = new Edge(e1.vertex);
                //     new_edge_opp.next = opp1;
                //     e0.next = new_edge_opp;
                //     opp1.next = e0;

                //     new_edge.opposite = new_edge_opp;
                //     new_edge_opp.opposite = new_edge;

                //     var b = Tuple.Create(new_edge.vertex.index, new_edge.next.vertex.index);
                //     var c = Tuple.Create(new_edge_opp.vertex.index, new_edge_opp.next.vertex.index);
                //     newEdgeDict[b] = new_edge;
                //     newEdgeDict[c] = new_edge_opp;

                //     AddNewTriangle(new_edge);
                //     AddNewTriangle(new_edge_opp);

                //     updated_edges.Add(new_edge);
                //     updated_edges.Add(new_edge_opp);
    
                //     // Debug.Log("after flip: " + i + " " + triangles.Count);
                } else {
                    Debug.Log("Flipping will not improve aspect ratios!! ");
                    
                    AddNewTriangle(edge);
                    AddNewTriangle(oppEdge);

                    updated_edges.Add(edge);
                    updated_edges.Add(oppEdge);
                }
                
            }
        }

        foreach (var edge in should_flip) {
            Debug.Log("flipping edge....");
            // Debug.Log("new aspect ratios: " + newCurrAR + " " + newOppAR);
            Edge oppEdge = edge.opposite;
            Edge e0 = edge.next;
            Edge e1 = edge.next.next;
            Edge opp0 = oppEdge.next;
            Edge opp1 = oppEdge.next.next;

            RemoveTriangle(edge.vertex.index, e0.vertex.index, e1.vertex.index);
            RemoveTriangle(oppEdge.vertex.index, opp0.vertex.index, opp1.vertex.index);

            // first triangle flip
            Edge new_edge = new Edge(opp1.vertex);
            new_edge.next = e1;
            e1.next = opp0;
            opp0.next = new_edge;
            // opposite triangle flip
            Edge new_edge_opp = new Edge(e1.vertex);
            new_edge_opp.next = opp1;
            e0.next = new_edge_opp;
            opp1.next = e0;

            new_edge.opposite = new_edge_opp;
            new_edge_opp.opposite = new_edge;

            var b = Tuple.Create(new_edge.vertex.index, new_edge.next.vertex.index);
            var c = Tuple.Create(new_edge_opp.vertex.index, new_edge_opp.next.vertex.index);
            newEdgeDict[b] = new_edge;
            newEdgeDict[c] = new_edge_opp;

            AddNewTriangle(new_edge);
            AddNewTriangle(new_edge_opp);

            updated_edges.Add(new_edge);
            updated_edges.Add(new_edge_opp);

            // Debug.Log("after flip: " + i + " " + triangles.Count);
        }
    }

    public void Reset() {
        new_edges.Clear();
        new_edges.AddRange(updated_edges);
        updated_edges.Clear();
    }

    private bool IsCorrectWindingOrder(Vector3 p0, Vector3 p1, Vector3 p2)
    {
        Vector3 normal = Vector3.Cross(p1 - p0, p2 - p0);
        return normal.z <= 0; // Assumes a right-hand rule with a positive Z-axis normal
    }

    private void AddNewTriangle(Edge edge) {
        new_triangles.Add(edge.vertex.index);
        new_triangles.Add(edge.next.vertex.index);
        new_triangles.Add(edge.next.next.vertex.index);
    }

    void RemoveTriangle(int p, int q, int r) {
        for (int t = 0; t < new_triangles.Count; t += 3) {
            int a = new_triangles[t];
            int b = new_triangles[t + 1];
            int c = new_triangles[t + 2];
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
                new_triangles.RemoveRange(t, 3);
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
}
