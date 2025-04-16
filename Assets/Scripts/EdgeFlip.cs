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
    Vector3 current_hole_normal = Vector3.zero;
    public Dictionary<Tuple<int, int>, Edge> anothernewEdgeDict = new Dictionary<Tuple<int, int>, Edge>();
    public List<Edge> new_edges = new List<Edge>();
    public List<Edge> updated_edges = new List<Edge>();
    public HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();
    public List<Tuple<int, int>> triangleToRemove = new List<Tuple<int, int>>();
    List<Edge> triangleToRemove2 = new List<Edge>();
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

    Edge FindBadTriangle() {
        float worstAR = float.MinValue;
        Edge worstEdge = null;

        foreach(var kvp in newEdgeDict) {
            var edge = kvp.Value;
            Edge oppEdge = edge.opposite;

            Edge e0 = edge.next;
            Edge e1 = edge.next.next;
            Edge opp0 = oppEdge.next;
            Edge opp1 = oppEdge.next.next;

            float currAR = CalculateAspectRatio(edge.vertex.position, edge.next.vertex.position, edge.next.next.vertex.position);
            float oppAR = CalculateAspectRatio(oppEdge.vertex.position, oppEdge.next.vertex.position, oppEdge.next.next.vertex.position);

            // Calculate new aspect ratios to check if the flip will be helpful or not
            float newCurrAR = CalculateAspectRatio(e0.vertex.position, e1.vertex.position, opp1.vertex.position);
            float newOppAR = CalculateAspectRatio(opp0.vertex.position, opp1.vertex.position, e1.vertex.position);

            // if ((currAR > worstAR)){
            //     worstAR = currAR;
            //     worstEdge = edge;
            //     isFlip = true;
            // }

            // if ((newCurrAR < currAR && newOppAR < oppAR) && newCurrAR > 0 && newOppAR > 0) {
            float worstBefore = Mathf.Max(currAR, oppAR);
            float worstAfter = Mathf.Max(newCurrAR, newOppAR);
            // float worstBefore = (currAR + oppAR) / 2f;
            // float worstAfter = (newCurrAR + newOppAR) / 2f;
            if (worstAfter < worstBefore && newCurrAR > 0 && newOppAR > 0) { 
                worstAR = currAR;
                worstEdge = edge;
                isFlip = true;
                return worstEdge;
            }
        }
        Debug.Log("Worst aspect ratio is: " + worstAR + " worst edge " + worstEdge);
        // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere.transform.position = worstEdge.vertex.position;
        // sphere.transform.localScale = Vector3.one * 0.001f;
        // sphere.GetComponent<Renderer>().material.color = Color.blue;
        // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere2.transform.position = worstEdge.next.vertex.position;
        // sphere2.transform.localScale = Vector3.one * 0.001f;
        // sphere2.GetComponent<Renderer>().material.color = Color.blue;
        // GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere3.transform.position = worstEdge.next.next.vertex.position;
        // sphere3.transform.localScale = Vector3.one * 0.001f;
        // sphere3.GetComponent<Renderer>().material.color = Color.blue; 
        
        return worstEdge;
    }

    public bool NewEdgeFlip() {
        new_triangles.Clear();
        Edge edge = FindBadTriangle(); 
        if (edge == null) {
            isFlip = false;
            return isFlip;
        }
        // Edge edge = FindLongestValidEdge();
        // Debug.Log("missing " + new_edges.Contains(missing) + " " + newEdgeDict.ContainsKey(Tuple.Create(missing.vertex.index, missing.next.vertex.index)));
        Edge oppEdge = edge.opposite;
        
        isFlip = true;
        Edge e0 = edge.next;
        Edge e1 = edge.next.next;
        Edge opp0 = oppEdge.next;
        Edge opp1 = oppEdge.next.next;

        // Update connectivity for flip
        edge.vertex = opp1.vertex;
        edge.next = e1;
        e1.next = opp0;
        opp0.next = edge;

        oppEdge.vertex = e1.vertex;
        oppEdge.next = opp1;
        opp1.next = e0;
        e0.next = oppEdge;

        AddNewTriangle(edge);
        AddNewTriangle(oppEdge);

        // Add back triangles that are unaffected by flip
        AddUnaffectedTriangles(edge, edge.opposite);
        
        return isFlip;
    }

    private void AddUnaffectedTriangles(Edge edge, Edge opposite) {
        HashSet<Edge> affectedEdges = new HashSet<Edge> {
            edge, edge.next, edge.next.next,
            opposite, opposite.next, opposite.next.next
        };

        foreach (Edge e in new_edges) {
        // foreach(var kvp in newEdgeDict) {
        //     var e = kvp.Value;
            // Skip affected edges
            if (affectedEdges.Contains(e)) continue;

            // Check if the edge forms a triangle
            if (e.next != null && e.next.next != null && e.next.next.next != null) {
                AddNewTriangle(e);
                // AddNewTriangle(e.opposite);
            }

            // if (affectedEdges.Contains(e.opposite)) continue;
            // // Check if the edge forms a triangle
            // if (e.opposite.next != null && e.opposite.next.next != null && e.opposite.next.next.next != null) {
            //     AddNewTriangle(e.opposite);
            // }
        }
    }

    HashSet<string> triangleSet = new HashSet<string>();
    HashSet<Edge> visitedTriangleEdges = new HashSet<Edge>();

    private void AddNewTriangle(Edge edge) {
        // if (visitedTriangleEdges.Contains(edge)) return;

        Edge e1 = edge;
        Edge e2 = edge.next;
        Edge e3 = edge.next.next;

        if (!IsCorrectWindingOrder(e1.vertex.position, e2.vertex.position, e3.vertex.position)) {
            (e2, e3) = (e3, e2);
        }

        new_triangles.Add(e1.vertex.index);
        new_triangles.Add(e2.vertex.index);
        new_triangles.Add(e3.vertex.index);

        updated_edges.Add(e1);

        // visitedTriangleEdges.Add(e1);
        // visitedTriangleEdges.Add(e2);
        // visitedTriangleEdges.Add(e3);

        // var indices = new int[] {
        //     edge.vertex.index,
        //     edge.next.vertex.index,
        //     edge.next.next.vertex.index
        // };
        // Array.Sort(indices); // sort for consistent ordering
        // string key = $"{indices[0]}_{indices[1]}_{indices[2]}";

        // if (!triangleSet.Contains(key)) {
        //     triangleSet.Add(key);
        //     new_triangles.Add(edge.vertex.index);
        //     new_triangles.Add(edge.next.vertex.index);
        //     new_triangles.Add(edge.next.next.vertex.index);

        //     updated_edges.Add(edge);
        // } 
        
        
       

        // updated_edges.Add(edge);

        // if (!updated_edges.Contains(edge)) {
        //     updated_edges.Add(edge);
        //     // Debug.Log($"Updated edge added: {edge.vertex.index} -> {edge.next.vertex.index}");
        // } else {
        //     Debug.LogWarning($"⚠️ Edge already in updated_edges: {edge.vertex.index} -> {edge.next.vertex.index}");
        // }


        // var a = Tuple.Create(edge.vertex.index, edge.next.vertex.index);
        // var b = Tuple.Create(edge.next.vertex.index, edge.next.next.vertex.index);
        // var c = Tuple.Create(edge.next.next.vertex.index, edge.next.next.next.vertex.index);

        // anothernewEdgeDict[a] = edge;
        // anothernewEdgeDict[b] = edge.next;
        // anothernewEdgeDict[c] = edge.next.next;

        // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere.transform.position = edge.vertex.position;
        // sphere.transform.localScale = Vector3.one * 0.001f;
        // sphere.GetComponent<Renderer>().material.color = Color.cyan;
        // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere2.transform.position = edge.next.vertex.position;
        // sphere2.transform.localScale = Vector3.one * 0.001f;
        // sphere2.GetComponent<Renderer>().material.color = Color.cyan;
        // GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere3.transform.position = edge.next.next.vertex.position;
        // sphere3.transform.localScale = Vector3.one * 0.001f;
        // sphere3.GetComponent<Renderer>().material.color = Color.cyan; 
    }

    List<string> affectedTriangleKeys = new List<string>();
    private string GetTriangleKey(Edge e) {
        var indices = new int[] {
            e.vertex.index,
            e.next.vertex.index,
            e.next.next.vertex.index
        };
        Array.Sort(indices);
        return $"{indices[0]}_{indices[1]}_{indices[2]}";
    }

    // Edge flip the triangle which has the worst aspect ratio
    public bool PerformEdgeFlip() {
        new_triangles.Clear();
        Debug.Log("new edges: " + new_edges.Count + " dict: " + newEdgeDict.Count + " " + new_triangles.Count);
        // Debug.Log("Unique edges count: " + new_edges.Distinct().Count());

        // List<int> nos = new List<int>();


        // Operate only on newly created edges to fill the hole
        foreach(var edge in new_edges) {
        // foreach(var kvp in newEdgeDict) {
            // var edge = kvp.Value;
            
            Edge oppEdge = edge.opposite;
            var a = Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index);
            if (edge.opposite != null) {
                // if (newEdgeDict.ContainsKey(a)) {
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

                    // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    // sphere.transform.position = edge.vertex.position;
                    // sphere.transform.localScale = Vector3.one * 0.001f;
                    // sphere.GetComponent<Renderer>().material.color = Color.blue;
                    // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    // sphere2.transform.position = edge.next.vertex.position;
                    // sphere2.transform.localScale = Vector3.one * 0.001f;
                    // sphere2.GetComponent<Renderer>().material.color = Color.blue;
                    // GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    // sphere3.transform.position = edge.next.next.vertex.position;
                    // sphere3.transform.localScale = Vector3.one * 0.001f;
                    // sphere3.GetComponent<Renderer>().material.color = Color.blue; 

                    // GameObject sphere4 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    // sphere4.transform.position = e0.vertex.position;
                    // sphere4.transform.localScale = Vector3.one * 0.001f;
                    // sphere4.GetComponent<Renderer>().material.color = Color.red;
                    // GameObject sphere5 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    // sphere5.transform.position = e1.vertex.position;
                    // sphere5.transform.localScale = Vector3.one * 0.001f;
                    // sphere5.GetComponent<Renderer>().material.color = Color.red;
                    // GameObject sphere6 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    // sphere6.transform.position = opp1.vertex.position;
                    // sphere6.transform.localScale = Vector3.one * 0.001f;
                    // sphere6.GetComponent<Renderer>().material.color = Color.red;

                    // Condition 0: Max
                    // float worstBefore = Mathf.Max(currAR, oppAR);
                    // float worstAfter = Mathf.Max(newCurrAR, newOppAR);
                    // float worstBefore = (currAR + oppAR) / 2f;
                    // float worstAfter = (newCurrAR + newOppAR) / 2f;
                    // if (worstAfter < worstBefore && newCurrAR > 0 && newOppAR > 0) {
                        
                    // Condition 1: Both improve
                    if ((newCurrAR < currAR && newOppAR < oppAR) && newCurrAR > 0 && newOppAR > 0) {
                    // Condition 2: Combined improves
                    // if ((newCurrAR + newOppAR) < (currAR + oppAR) && newCurrAR > 0 && newOppAR > 0) {
                    // Condition 3: Either one improves
                    // if ((newCurrAR < currAR || newOppAR < oppAR) && newCurrAR > 0 && newOppAR > 0) {
                    // Condition 4: According to some threshold
                    // float threshold = 1.5f;
                    // if ((newCurrAR < threshold && newOppAR < threshold) && newCurrAR > 0 && newOppAR > 0) {
                        Debug.Log("flipping edge....");

                        // Debug.Log("new aspect ratios: " + newCurrAR + " " + newOppAR);

                        // RemoveTriangle(edge.vertex.index, e0.vertex.index, e1.vertex.index);
                        // RemoveTriangle(oppEdge.vertex.index, opp0.vertex.index, opp1.vertex.index);

                        // newEdgeDict.Remove(Tuple.Create(edge.vertex.index, edge.next.vertex.index));
                        // newEdgeDict.Remove(Tuple.Create(e0.vertex.index, e0.next.vertex.index));
                        // newEdgeDict.Remove(Tuple.Create(e1.vertex.index, e1.next.vertex.index));
                        // newEdgeDict.Remove(Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index)); 
                        // newEdgeDict.Remove(Tuple.Create(opp0.vertex.index, opp0.next.vertex.index));
                        // newEdgeDict.Remove(Tuple.Create(opp1.vertex.index, opp1.next.vertex.index)); 

                        triangleToRemove.Add(Tuple.Create(edge.vertex.index, edge.next.vertex.index));
                        triangleToRemove.Add(Tuple.Create(e0.vertex.index, e0.next.vertex.index));
                        triangleToRemove.Add(Tuple.Create(e1.vertex.index, e1.next.vertex.index));
                        triangleToRemove.Add(Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index)); 
                        triangleToRemove.Add(Tuple.Create(opp0.vertex.index, opp0.next.vertex.index));
                        triangleToRemove.Add(Tuple.Create(opp1.vertex.index, opp1.next.vertex.index)); 


                        // new code
                        edge.vertex = opp1.vertex;
                        edge.next = e1;
                        e1.next = opp0;
                        opp0.next = edge;

                        oppEdge.vertex = e1.vertex;
                        oppEdge.next = opp1;
                        opp1.next = e0;
                        e0.next = oppEdge;

                        AddNewTriangle(edge);
                        AddNewTriangle(oppEdge);

                        // newEdgeDict[Tuple.Create(edge.vertex.index, edge.next.vertex.index)] = edge;
                        // newEdgeDict[Tuple.Create(e0.vertex.index, e0.next.vertex.index)] = e0;
                        // newEdgeDict[Tuple.Create(e1.vertex.index, e1.next.vertex.index)] = e1;
                        // newEdgeDict[Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index)] = oppEdge;
                        // newEdgeDict[Tuple.Create(opp0.vertex.index, opp0.next.vertex.index)] = opp0;
                        // newEdgeDict[Tuple.Create(opp1.vertex.index, opp1.next.vertex.index)] = opp1;

                        isFlip = true;
                        // break;

                        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                        sphere.transform.position = edge.vertex.position;
                        sphere.transform.localScale = Vector3.one * 0.001f;
                        sphere.GetComponent<Renderer>().material.color = Color.blue;
                        GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                        sphere2.transform.position = edge.next.vertex.position;
                        sphere2.transform.localScale = Vector3.one * 0.001f;
                        sphere2.GetComponent<Renderer>().material.color = Color.blue;
                        GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                        sphere3.transform.position = edge.next.next.vertex.position;
                        sphere3.transform.localScale = Vector3.one * 0.001f;
                        sphere3.GetComponent<Renderer>().material.color = Color.blue; 

                        // GameObject sphere4 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                        // sphere4.transform.position = opp1.vertex.position;
                        // sphere4.transform.localScale = Vector3.one * 0.001f;
                        // sphere4.GetComponent<Renderer>().material.color = Color.red;
                        // GameObject sphere5 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                        // sphere5.transform.position = opp1.next.vertex.position;
                        // sphere5.transform.localScale = Vector3.one * 0.001f;
                        // sphere5.GetComponent<Renderer>().material.color = Color.red;
                        // GameObject sphere6 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                        // sphere6.transform.position = opp1.next.next.vertex.position;
                        // sphere6.transform.localScale = Vector3.one * 0.001f;
                        // sphere6.GetComponent<Renderer>().material.color = Color.red;
        
                        // Debug.Log("after flip: " + i + " " + triangles.Count);
                    } else {
                        Debug.Log("Flipping will not improve aspect ratios!! ");
                        
                        AddNewTriangle(edge);
                        // AddNewTriangle(oppEdge);
                    }
                
                // }
                // else {
                //     AddNewTriangle(edge); 
                // }
            }
            // else {
            //     AddNewTriangle(edge); 
            // }
        }

        // foreach (var t in triangleToRemove) {
        //     newEdgeDict.Remove(t);
        // }
        
        // Debug.Log("edges counts: " + new_edges.Count + " " + updated_edges.Count);
        // Debug.Log("edges dicts counts: " + newEdgeDict.Count + " " + anothernewEdgeDict.Count);
        // newEdgeDict = anothernewEdgeDict;
        return isFlip;
    }

    private bool IsCorrectWindingOrder(Vector3 p0, Vector3 p1, Vector3 p2)
    {
        Vector3 normal = Vector3.Cross(p1 - p0, p2 - p0);
        return Vector3.Dot(normal, current_hole_normal) > 0; // checking in the direction of normal
    }

    public void ComputeAverageHoleNormal(List<Edge> hole)
    {
        Vector3 normalSum = Vector3.zero;

        int n = hole.Count;
        for (int i = 0; i < n; i++) {
            Vector3 p0 = hole[i].vertex.position;
            Vector3 p1 = hole[i].next.vertex.position;
            Vector3 p2 = hole[i].next.next.vertex.position;

            Vector3 normal = Vector3.Cross(p1 - p0, p2 - p0);
            normalSum += normal;
        }

        current_hole_normal = normalSum.normalized;
    }

    public void Reset() {
        new_edges.Clear();
        updated_edges.Clear();
        triangles.Clear();
        new_triangles.Clear();
        newEdgeDict.Clear();
        // anothernewEdgeDict.Clear();
        affectedTriangleKeys.Clear();
        triangleSet.Clear();
        visitedTriangleEdges.Clear();
        isFlip = false;
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
                // updated_edges.Remove(e);
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
        // Edge longestEdge = FindWorstAspectRatioEdge(new_edges); 

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
                // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere.transform.position = v1.position;
                // sphere.transform.localScale = Vector3.one * 0.001f;
                // sphere.GetComponent<Renderer>().material.color = Color.red;
                // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere2.transform.position = v2.position;
                // sphere2.transform.localScale = Vector3.one * 0.001f;
                // sphere2.GetComponent<Renderer>().material.color = Color.red;
                // GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere3.transform.position = v3.position;
                // sphere3.transform.localScale = Vector3.one * 0.001f;
                // sphere3.GetComponent<Renderer>().material.color = Color.red; 
                // GameObject sphere4 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                // sphere4.transform.position = v4.position;
                // sphere4.transform.localScale = Vector3.one * 0.001f;
                // sphere4.GetComponent<Renderer>().material.color = Color.red;

                Edge e0 = edge.next;
                Edge e1 = edge.next.next;
                Edge opp0 = oppEdge.next;
                Edge opp1 = oppEdge.next.next;

                RemoveTriangle(edge.vertex.index, e0.vertex.index, e1.vertex.index);
                RemoveTriangle(oppEdge.vertex.index, opp0.vertex.index, opp1.vertex.index);

                newEdgeDict.Remove(Tuple.Create(edge.vertex.index, edge.next.vertex.index));
                newEdgeDict.Remove(Tuple.Create(e0.vertex.index, e0.next.vertex.index));
                newEdgeDict.Remove(Tuple.Create(e1.vertex.index, e1.next.vertex.index));
                newEdgeDict.Remove(Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index)); 
                newEdgeDict.Remove(Tuple.Create(opp0.vertex.index, opp0.next.vertex.index));
                newEdgeDict.Remove(Tuple.Create(opp1.vertex.index, opp1.next.vertex.index)); 

                // // Perform the edge flip
                // RemoveTriangle(edge.vertex.index, e0.vertex.index, e1.vertex.index);
                // RemoveTriangle(oppEdge.vertex.index, opp0.vertex.index, opp1.vertex.index);

                edge.vertex = opp1.vertex;
                edge.next = e1;
                e1.next = opp0;
                opp0.next = edge;

                oppEdge.vertex = e1.vertex;
                oppEdge.next = opp1;
                opp1.next = e0;
                e0.next = oppEdge;

                AddNewTriangle(edge);
                AddNewTriangle(oppEdge);

                newEdgeDict[Tuple.Create(edge.vertex.index, edge.next.vertex.index)] = edge;
                newEdgeDict[Tuple.Create(e0.vertex.index, e0.next.vertex.index)] = e0;
                newEdgeDict[Tuple.Create(e1.vertex.index, e1.next.vertex.index)] = e1;
                newEdgeDict[Tuple.Create(oppEdge.vertex.index, oppEdge.next.vertex.index)] = oppEdge;
                newEdgeDict[Tuple.Create(opp0.vertex.index, opp0.next.vertex.index)] = opp0;
                newEdgeDict[Tuple.Create(opp1.vertex.index, opp1.next.vertex.index)] = opp1;

                isFlip = true;

                // We only want to break after the first successful flip
                Debug.Log("We are flipping edge now....");
                // continue; // move to next iteration
            } else {
                Debug.Log("point not in circumcircle");
                AddNewTriangle(edge);
            }
        }
        return isFlip;
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

            if (edgeLength > maxLength) {
                maxLength = edgeLength;
                longestValidEdge = e;
            }
        }

        Debug.Log("Valid longest edge length: " + maxLength);
        return longestValidEdge;
    }
}
