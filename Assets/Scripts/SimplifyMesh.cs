using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimplifyMesh : MonoBehaviour
{
    Vector3[] vertices;
    List<Edge> new_edges = new List<Edge>();
    HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();

    // public SimplifyMesh(HalfedgeMesh halfedgeMesh, Vector3[] vertices, int[] triangles) {
    //     this.halfedgeMesh = halfedgeMesh;
    // }

    public SimplifyMesh(List<Edge> edges) {
        new_edges = edges;
    }

    public void EdgeFlip() {
        Debug.Log("new edges: " + new_edges.Count);

        // Operate only on newly created edges to fill the hole
        foreach(var edge in new_edges) {
        
            Edge oppEdge = edge.opposite;
            Debug.Log("does opp exist? " + oppEdge);
            if (edge.opposite != null) {

                // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere.transform.position = edge.vertex.position;
                // sphere.transform.localScale = Vector3.one * 0.001f;
                // sphere.GetComponent<Renderer>().material.color = Color.yellow;
                // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere2.transform.position = edge.next.vertex.position;
                // sphere2.transform.localScale = Vector3.one * 0.001f;
                // sphere2.GetComponent<Renderer>().material.color = Color.yellow;
                // GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere3.transform.position = edge.next.next.vertex.position;
                // sphere3.transform.localScale = Vector3.one * 0.001f;
                // sphere3.GetComponent<Renderer>().material.color = Color.yellow;

                // GameObject sphere4 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere4.transform.position = oppEdge.vertex.position;
                // sphere4.transform.localScale = Vector3.one * 0.001f;
                // sphere4.GetComponent<Renderer>().material.color = Color.red;
                // GameObject sphere5 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere5.transform.position = oppEdge.next.vertex.position;
                // sphere5.transform.localScale = Vector3.one * 0.001f;
                // sphere5.GetComponent<Renderer>().material.color = Color.red;
                // GameObject sphere6 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere6.transform.position = oppEdge.next.next.vertex.position;
                // sphere6.transform.localScale = Vector3.one * 0.001f;
                // sphere6.GetComponent<Renderer>().material.color = Color.red;

                float currAR = CalculateAspectRatio(edge.vertex.position, edge.next.vertex.position, edge.next.next.vertex.position);
                float oppAR = CalculateAspectRatio(oppEdge.vertex.position, oppEdge.next.vertex.position, oppEdge.next.next.vertex.position);

                Debug.Log("aspect ratios: " + currAR + " " + oppAR);

                Edge e0 = edge.next;
                Edge e1 = edge.next.next;
                Edge opp0 = oppEdge.next;
                Edge opp1 = oppEdge.next.next;

                float newCurrAR = CalculateAspectRatio(e0.vertex.position, e1.vertex.position, opp1.vertex.position);
                float newOppAR = CalculateAspectRatio(opp0.vertex.position, opp1.vertex.position, e1.vertex.position);

                Debug.Log("new aspect ratios: " + newCurrAR + " " + newOppAR);

                if (newCurrAR < currAR && newOppAR < oppAR && newCurrAR > 0 && newOppAR > 0) {
                    Debug.Log("flipping edge....");
                    Debug.Log("tri check: " + triangles.Count);
                    
                    // main
                    e1.next = opp1;
                    opp1.next = e0;
                    //opposite
                    opp0.next = e1;
                    e1.next = opp0;

                    e1.opposite = opp0;

                    Debug.Log("removal check: " + edge.vertex.index + " " + e0.vertex.index + " " + e1.vertex.index);
                    RemoveTriangle(edge.vertex.index, e0.vertex.index, e1.vertex.index);
                    RemoveTriangle(oppEdge.vertex.index, opp0.vertex.index, opp1.vertex.index);

                    if (!IsCorrectWindingOrder(e0.vertex.position, e1.vertex.position, opp1.vertex.position))
                    {
                        (e1, opp1) = (opp1, e1);
                    }

                    new_triangles.Add(e0.vertex.index);
                    new_triangles.Add(e1.vertex.index);
                    new_triangles.Add(opp1.vertex.index);

                    if (!IsCorrectWindingOrder(e1.vertex.position, opp1.vertex.position, opp0.vertex.position))
                    {
                        (opp1, opp0) = (opp0, opp1);
                    }

                    new_triangles.Add(e1.vertex.index);
                    new_triangles.Add(opp1.vertex.index);
                    new_triangles.Add(opp0.vertex.index);
                    // break;
    
                    // FlipEdgeAndUpdate(edge, oppEdge);
                    Debug.Log("after flip: " + triangles.Count);
                } else {
                    Debug.Log("Flipping will not improve aspect ratios!!");
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
                }
            }
        }

    }

    private bool IsCorrectWindingOrder(Vector3 p0, Vector3 p1, Vector3 p2)
    {
        Vector3 normal = Vector3.Cross(p1 - p0, p2 - p0);
        return normal.z <= 0; // Assumes a right-hand rule with a positive Z-axis normal
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
