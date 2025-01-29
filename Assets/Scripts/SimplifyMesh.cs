using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimplifyMesh : MonoBehaviour
{
    float minAR = float.MinValue;
    Vector3[] vertices;
    List<Edge> new_edges = new List<Edge>();
    List<Edge> updated_edges = new List<Edge>();
    public HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();
    public Dictionary<Tuple<int, int>, Edge> newEdgeDict;

    // public SimplifyMesh(HalfedgeMesh halfedgeMesh, Vector3[] vertices, int[] triangles) {
    //     this.halfedgeMesh = halfedgeMesh;
    // }

    public SimplifyMesh(List<Edge> edges) {
        new_edges = edges;
    }

    public void EdgeFlipPublic() {
        // while (minAR > 1.25f) {
        int counter = 0;
        List<Edge> persistentEdges = new List<Edge>(new_edges);
        List<int> persistentTriangles = new List<int>(new_triangles);
        // while (counter < 3) {
        for(int i = 0; i < 5; i++) {
            Debug.Log("COUNTER CHECK " + i + " " + new_edges.Count);
            EdgeFlip(i);

            persistentEdges.AddRange(new_edges);
            persistentTriangles.AddRange(new_triangles);

            triangles.Clear();
            triangles.AddRange(new_triangles);
            new_triangles.Clear();
            new_edges.Clear();
            new_edges.AddRange(updated_edges);
            updated_edges.Clear();
            counter++;
        }
        new_edges = persistentEdges;
        new_triangles = persistentTriangles;
    }

    public void EdgeFlip(int i) {
        Debug.Log("new edges: " + new_edges.Count);

        // Operate only on newly created edges to fill the hole
        foreach(var edge in new_edges) {
        
            Edge oppEdge = edge.opposite;
            var a = Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index);
            Debug.Log("does opp exist? " + oppEdge);
            if (edge.opposite != null && newEdgeDict.ContainsKey(a)) {

                // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere.transform.position = edge.vertex.position;
                // sphere.transform.localScale = Vector3.one * 0.001f;
                // sphere.GetComponent<Renderer>().material.color = Color.yellow;
                // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere2.transform.position = edge.next.vertex.position;
                // sphere2.transform.localScale = Vector3.one * 0.001f;
                // sphere2.GetComponent<Renderer>().material.color = Color.red;
                // GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere3.transform.position = edge.next.next.vertex.position;
                // sphere3.transform.localScale = Vector3.one * 0.001f;
                // sphere3.GetComponent<Renderer>().material.color = Color.green;

                // Calculate aspect ratios of current triangle and its opposite
                float currAR = CalculateAspectRatio(edge.vertex.position, edge.next.vertex.position, edge.next.next.vertex.position);
                float oppAR = CalculateAspectRatio(oppEdge.vertex.position, oppEdge.next.vertex.position, oppEdge.next.next.vertex.position);
                // Debug.Log("current aspect ratios: " + currAR + " " + oppAR);

                Edge e0 = edge.next;
                Edge e1 = edge.next.next;
                Edge opp0 = oppEdge.next;
                Edge opp1 = oppEdge.next.next;

                // Calculate new aspect ratios to check if the flip will be helpful or not
                float newCurrAR = CalculateAspectRatio(e0.vertex.position, e1.vertex.position, opp1.vertex.position);
                float newOppAR = CalculateAspectRatio(opp0.vertex.position, opp1.vertex.position, e1.vertex.position);

                if (newCurrAR < currAR && newOppAR < oppAR && newCurrAR > 0 && newOppAR > 0) {
                    Debug.Log("flipping edge....");
                    Debug.Log("new aspect ratios: " + newCurrAR + " " + newOppAR);

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

                    // if (!IsCorrectWindingOrder(e0.vertex.position, e1.vertex.position, opp1.vertex.position))
                    // {
                    //     (e1, opp1) = (opp1, e1);
                    // }
                    AddNewTriangle(new_edge);
                    AddNewTriangle(new_edge_opp);

                    updated_edges.Add(new_edge);
                    updated_edges.Add(new_edge_opp);
    
                    Debug.Log("after flip: " + i + " " + triangles.Count);
                } else {
                    Debug.Log("Flipping will not improve aspect ratios!! " + i);
                    if (!IsCorrectWindingOrder(edge.vertex.position, e0.vertex.position, e1.vertex.position))
                    {
                        (e0, e1) = (e1, e0);
                    }
                    new_triangles.Add(edge.vertex.index);
                    new_triangles.Add(e0.vertex.index);
                    new_triangles.Add(e1.vertex.index);

                    if (!IsCorrectWindingOrder(oppEdge.vertex.position, opp0.vertex.position, opp1.vertex.position))
                    {
                        (opp0, opp1) = (opp1, opp0);
                    }

                    new_triangles.Add(oppEdge.vertex.index);
                    new_triangles.Add(opp0.vertex.index);
                    new_triangles.Add(opp1.vertex.index);

                    updated_edges.Add(edge);
                    updated_edges.Add(oppEdge);
                }
                
            }
        }

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
        Debug.Log("inside remove triangle");
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
                // break;
            }
        }
    }

    float CalculateAspectRatio(Vector3 A, Vector3 B, Vector3 C) {
        float distA = Vector3.Distance(A, B);
        float distB = Vector3.Distance(B, C);
        float distC = Vector3.Distance(C, A);

        float s = ( distA + distB + distC ) / 2f;
        // Debug.Log("s: " + s);
        float ar = (distA * distB * distC) / (8f * (s - distA) * (s - distB) * (s - distC));
        float k = (8f * (s - distA) * (s - distB) * (s - distC));
        // Debug.Log("denom: " + k);
        if (k == 0) return 0;
        return ar;
    }
}
