using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EdgeFlip : MonoBehaviour
{
    float minAR = float.MinValue;
    int maxIter = 2;
    Vector3[] vertices;
    bool isFlip = false;
    HashSet<Edge> visited_edges = new HashSet<Edge>();
    public List<Edge> new_edges = new List<Edge>();
    public List<Edge> updated_edges = new List<Edge>();
    List<Edge> should_flip = new List<Edge>();
    public HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();
    public Dictionary<Tuple<int, int>, Edge> newEdgeDict;


    // Edge flip based on max iterations
    public void EdgeFlipPublic() {
        List<Edge> persistentEdges = new List<Edge>(new_edges);
        List<int> persistentTriangles = new List<int>(new_triangles);
        for(int i = 0; i < maxIter; i++) {
            Debug.Log("COUNTER CHECK " + i + " " + new_edges.Count);
            PerformEdgeFlip();

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
    }

    // Edge flip the triangle which has the worst aspect ratio
    public bool PerformEdgeFlip() {
        Debug.Log("new edges: " + new_edges.Count);

        // Operate only on newly created edges to fill the hole
        foreach(var edge in new_edges) {
        
            Edge oppEdge = edge.opposite;
            var a = Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index);
            if (edge.opposite != null && newEdgeDict.ContainsKey(a)) {
                Debug.Log("valid for flip");

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

                // Debug.Log("old and new aspect ratios : " + currAR + " " + oppAR + " " + newCurrAR + " " + newOppAR);

                if ((newCurrAR < currAR && newOppAR < oppAR) && newCurrAR > 0 && newOppAR > 0) {
                    should_flip.Add(edge);
                    Debug.Log("flipping edge....");
                    // Debug.Log("new aspect ratios: " + newCurrAR + " " + newOppAR);

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
                    // updated_edges.Add(new_edge_opp);

                    // new code
                    // edge.vertex = opp1.vertex;
                    // edge.next = e1;
                    // e1.next = opp0;
                    // opp0.next = edge;

                    // oppEdge.vertex = e1.vertex;
                    // oppEdge.next = opp1;
                    // opp1.next = e0;
                    // e0.next = opp0;

                    // AddNewTriangle(edge);
                    // AddNewTriangle(oppEdge);

                    // updated_edges.Add(edge);
                    // visited_edges.Add(edge);
                    // visited_edges.Add(oppEdge);

                    isFlip = true;
    
                    // Debug.Log("after flip: " + i + " " + triangles.Count);
                } else {
                    Debug.Log("Flipping will not improve aspect ratios!! ");
                    
                    AddNewTriangle(edge);
                    // AddNewTriangle(oppEdge);

                    updated_edges.Add(edge);
                    // updated_edges.Add(oppEdge);
                }
                
            } else {
                Debug.Log("could not find opposite");
                AddNewTriangle(edge);
                updated_edges.Add(edge);

            }
        }
        Debug.Log("edges counts: " + new_edges.Count + " " + updated_edges.Count);
        return isFlip;
    }

    public void Reset() {
        new_edges.Clear();
        updated_edges.Clear();
        triangles.Clear();
        new_triangles.Clear();
        isFlip = false;
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

    public bool EdgeFlipCircumcircle() {
        // Find the longest edge
        // Edge longestEdge = FindLongestValidEdge();
        Edge longestEdge = FindWorstAspectRatioEdge(new_edges); 

        foreach (var edge in new_edges) {
            Vertex v1 = edge.vertex;
            Vertex v2 = edge.next.vertex;  // Assuming the next vertex is adjacent to the current vertex in the edge

            // Find the opposite vertices of the two triangles
            Vertex v3 = edge.next.next.vertex;
            Vertex v4 = edge.opposite.next.next.vertex;

            // Check if the edge should be flipped
            Edge oppEdge = edge.opposite;
            var a = Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index);
            Debug.Log("checking in circle test..." + IsPointInCircumcircle(v1.position, v2.position, v3.position, v4.position));
            if (!isFlip && newEdgeDict.ContainsKey(a) && IsPointInCircumcircle(v1.position, v2.position, v3.position, v4.position)) {
                GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                sphere.transform.position = v1.position;
                sphere.transform.localScale = Vector3.one * 0.001f;
                sphere.GetComponent<Renderer>().material.color = Color.red;
                GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                sphere2.transform.position = v2.position;
                sphere2.transform.localScale = Vector3.one * 0.001f;
                sphere2.GetComponent<Renderer>().material.color = Color.red;
                GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                sphere3.transform.position = v3.position;
                sphere3.transform.localScale = Vector3.one * 0.001f;
                sphere3.GetComponent<Renderer>().material.color = Color.red; 
                GameObject sphere4 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                sphere4.transform.position = v4.position;
                sphere4.transform.localScale = Vector3.one * 0.001f;
                sphere4.GetComponent<Renderer>().material.color = Color.red;

                Edge e0 = edge.next;
                Edge e1 = edge.next.next;
                Edge opp0 = oppEdge.next;
                Edge opp1 = oppEdge.next.next;

                // Perform the edge flip
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

                isFlip = true;

                // We only want to break after the first successful flip
                Debug.Log("We are flipping edge now....");
                // continue; // move to next iteration
            } else {
                Debug.Log("point not in circumcircle");

                AddNewTriangle(edge);
                updated_edges.Add(edge);
            }
        }
        return isFlip;
    }

    Edge FindWorstAspectRatioEdge(List<Edge> edges) {
        Edge worstEdge = null;
        float worstAspectRatio = float.MinValue;

        foreach (Edge edge in edges) {
            // Get the triangle formed by this edge
            Vector3 v0 = edge.vertex.position;
            Vector3 v1 = edge.next.vertex.position;
            Vector3 v2 = edge.next.next.vertex.position;

            // Compute aspect ratio
            float aspectRatio = CalculateAspectRatio(v0, v1, v2);

            // Keep track of the worst aspect ratio
            if (aspectRatio > worstAspectRatio) {
                worstAspectRatio = aspectRatio;
                worstEdge = edge;
            }
        }

        Debug.Log("Worst Aspect Ratio: " + worstAspectRatio);
        return worstEdge;
    }


    Edge FindLongestValidEdge() {
        float maxLength = float.MinValue;
        Edge longestValidEdge = null;

        foreach (var e in new_edges) {
            float edgeLength = Vector3.Distance(e.vertex.position, e.next.vertex.position);
            var edgeKey = Tuple.Create(e.opposite.vertex.index, e.opposite.next.vertex.index);

            if (newEdgeDict.ContainsKey(edgeKey) && edgeLength > maxLength) {
                maxLength = edgeLength;
                longestValidEdge = e;
            }
        }

        Debug.Log("Valid longest edge length: " + maxLength);
        return longestValidEdge;
    }

    private bool IsPointInCircumcircle(Vector3 A, Vector3 B, Vector3 C, Vector3 D) {
        Matrix4x4 matrix =  new Matrix4x4();
        matrix.SetRow(0, new Vector4(A.x, A.y, A.x * A.x + A.y * A.y, 1));
        matrix.SetRow(1, new Vector4(B.x, B.y, B.x * B.x + B.y * B.y, 1));
        matrix.SetRow(2, new Vector4(C.x, C.y, C.x * C.x + C.y * C.y, 1));
        matrix.SetRow(3, new Vector4(D.x, D.y, D.x * D.x + D.y * D.y, 1));

        float determinant = matrix.determinant; //Determinant4x4(matrix);
        return determinant > 0; // If positive, D is inside circumcircle => Edge should be flipped
    }
}
