using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class LoopSplitting //: MonoBehaviour
{
    public Vector3 bestv1, bestv2;
    private List<Vector3> vertices;
    private List<int> triangles;
    private List<Edge> current_hole;
    public HalfedgeMesh halfedgeMesh;
    public float minDistance = 0f;
    public int totalCount = 0;
    Edge bestEdge1, bestEdge2;
    Vector3 current_hole_normal = Vector3.zero;
    List<int> subMeshTriangles = new List<int>(); 
    List<Edge> new_edge_list = new List<Edge>();
    HashSet<Edge> new_edges = new HashSet<Edge>();
    Dictionary<Edge, Tuple<Edge, Edge>> new_edge_indices = new Dictionary<Edge, Tuple<Edge, Edge>>();
    Dictionary<Edge, Edge> previous_edges = new Dictionary<Edge, Edge>();
    // List<Edge> new_edges = new List<Edge>();
    public Dictionary<Tuple<int, int>, Edge> newEdgeDict = new Dictionary<Tuple<int, int>, Edge>();
    public Plane bestSplitPlane;

    public HashSet<Edge> all_edges = new HashSet<Edge>();

    public LoopSplitting(float f) {
        minDistance = f;
    }

    public void SetVerticesAndTriangles(List<Vector3> vertices, List<int> triangles) {
        this.vertices = vertices;
        this.triangles = triangles;
    }

    public List<Vector3> GetUpdatedVertices() {
        return vertices;
    }

    public List<int> GetUpdatedTriangles() {
        return triangles;
    }

    public List<Edge> GetUpdatedHole() {
        return current_hole;
    }

    public List<int> GetSubmesh() {
        return subMeshTriangles;
    }

    public List<Edge> GetNewEdges() {
        // return new_edges.ToList();
        return new_edge_list;
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


    private Edge FindOppositeEdge(Edge edge)
    {
        // Look for an edge that matches this edge's vertices in reverse order
        foreach (var candidate in new_edges)
        {
            if (candidate.vertex == edge.next.vertex && candidate.next.vertex == edge.vertex)
            {
                return candidate;
            }
        }
        return null;
    }

    Edge UpdateConnections(Edge v1, Edge v2) {
        Edge startEdge = v1;
        Edge endEdge = v2;
        Edge curr_edge = v1;
        Edge eToFind = null;
        while (curr_edge != null && curr_edge != v2) {
            // If we find an edge with no opposite, it's on the boundary
            if (curr_edge.opposite == null && curr_edge != v1) {
                eToFind = curr_edge;  // Found an intermediate boundary edge
            }

            // Move to the next boundary edge
            if (curr_edge.opposite == null) {
                curr_edge = curr_edge.next;
            } else {
                curr_edge = curr_edge.opposite.next;  // Follow the opposite's next if not on the boundary
            }
        }
        Debug.Log("etofind: " + eToFind);


        Edge newOppv2 = new Edge(eToFind.next.vertex);
        Edge newOppv1 = new Edge(v1.next.vertex);
        Edge new_edge = new Edge(v1.vertex);

        new_edge.next = newOppv2;
        newOppv1.next = new_edge;
        newOppv2.next = newOppv1;

        v1.opposite = newOppv1;
        // v2.opposite = newOppv2;

        newOppv1.opposite = v1;
        newOppv2.opposite = v2;

        // Debug.Log("check opposites: " + newOppv1.opposite + " oppv2 " + newOppv2.opposite + " new " + new_edge.opposite + " v1 " + v1.opposite + " v2 " + v2.opposite);

        halfedgeMesh.AddEdgeAndOpposite(v1.next.vertex.index, v1.vertex.index, newOppv1, v1, true);
        halfedgeMesh.AddEdgeAndOpposite(eToFind.next.vertex.index, eToFind.vertex.index, newOppv2, v2, false);
        return new_edge;
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

    Edge FindInternalPreviousEdge(Edge startEdge) {
        Edge currEdge = startEdge;
        Edge prevEdge = null;
        int counter = 0;
        do {
            Edge oppositeEdge = currEdge.opposite;
            if (oppositeEdge != null) {
                // Internal edge detected if opposite exists
                currEdge = oppositeEdge.next;
            } else {
                // If no opposite exists, it's a boundary; exit as we want internal edges
                return null;
            }
            if (currEdge.next == startEdge) {
                prevEdge = currEdge;
                break;
            }
            if (counter > 50) {
                break;
            }
            counter++;
            // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            // sphere2.transform.position = curr_edge.vertex.position;
            // sphere2.transform.localScale = Vector3.one * 0.001f;
            // sphere2.GetComponent<Renderer>().material.color = Color.red;
        } while (currEdge != startEdge && currEdge != null); 
        return prevEdge;
    }
    // public void NewTriangulateHoleDihedral(List<Edge> holeEdges) {
    //     if (holeEdges.Count <= 3) {
    //         // Base case: make a triangle and assign face like before
    //         Debug.Log("new triangulate we hit base case " + holeEdges.Count);
    //         List<int> triangleIndices = new List<int>();

    //         for (int i = 0; i < 3; i++) {
    //             int vertexIndex = holeEdges[i].vertex.index; // Retrieve the existing vertex index
    //             triangleIndices.Add(vertexIndex);

    //             Edge currentEdge = holeEdges[i];
    //             var key = Tuple.Create(currentEdge.vertex.index, currentEdge.next.vertex.index);
    //             if (newEdgeDict.ContainsKey(key)) {
    //                 new_edge_list.Add(newEdgeDict[key]);
    //             }
    //         }

    //         // Ensure the correct winding order
    //         if (!IsCorrectWindingOrder(vertices[triangleIndices[0]], vertices[triangleIndices[1]], vertices[triangleIndices[2]])) {
    //             (triangleIndices[1], triangleIndices[2]) = (triangleIndices[2], triangleIndices[1]);
    //         }

    //         // Add indices for the triangle
    //         subMeshTriangles.AddRange(triangleIndices);

    //         Edge he1 = holeEdges[0];
    //         Edge he2 = he1.next;
    //         Edge he3 = he1.next.next;

    //         // **Create a new face and assign an edge**
    //         Face newFace = new Face(he1); 
    //         newFace.face_idx = subMeshTriangles.Count - 1; //halfedgeMesh.patch_faces.Count; // Assign an index to the new face
    //         halfedgeMesh.patch_faces.Add(newFace);
    //         Debug.Log("new face check: " + newFace.face_idx);

    //         // **Assign the face to the edges**
    //         he1.face = newFace;
    //         he2.face = newFace;
    //         he3.face = newFace;

    //         // add triangle to half edge DS at this point
    //         halfedgeMesh.AddTriangle(holeEdges[0], holeEdges[1], holeEdges[2], newEdgeDict); //, new_edge_list[new_edge_list.Count - 1]);
    //         return;
    //     }

    //     float minMaxDihedral = float.MaxValue;
    //     (Edge, Edge, Edge) bestTriangle = (null, null, null);

    //     // Try all triangles using three consecutive edges
    //     for (int i = 0; i < holeEdges.Count; i++) {
    //         Edge e1 = holeEdges[i];
    //         Edge e2 = holeEdges[i].next;
    //         Edge e3 = holeEdges[i].next.next;

    //         // Compute dihedral angle with adjacent triangle(s) (e.g. one adjacent to e1 or e3 if any)
    //         float maxDihedral = MaxDihedralAngle(e1, e2, e3);
    //         if (maxDihedral < minMaxDihedral) {
    //             minMaxDihedral = maxDihedral;
    //             bestTriangle = (e1, e2, e3);
    //         }
    //     }

    //     GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
    //     sphere.transform.position = bestTriangle.Item1.vertex.position;
    //     sphere.transform.localScale = Vector3.one * 0.001f;
    //     sphere.GetComponent<Renderer>().material.color = Color.red;
    //     GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
    //     sphere2.transform.position = bestTriangle.Item1.vertex.position;
    //     sphere2.transform.localScale = Vector3.one * 0.001f;
    //     sphere2.GetComponent<Renderer>().material.color = Color.red;
    //     GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
    //     sphere3.transform.position = bestTriangle.Item1.vertex.position;
    //     sphere3.transform.localScale = Vector3.one * 0.001f;
    //     sphere3.GetComponent<Renderer>().material.color = Color.red;

    //     // Remove e2 from the boundary (ear tip)
    //     List<Edge> newHole = new List<Edge>(holeEdges);
    //     newHole.Remove(bestTriangle.Item2);

    //     // Add triangle and update half-edge structure
    //     // AddTriangleAndFace(new List<Edge> { bestTriangle.Item1, bestTriangle.Item2, bestTriangle.Item3 });
    //     List<Edge> temp = new List<Edge>();
    //     temp.Add(bestTriangle.Item1);
    //     temp.Add(bestTriangle.Item2);
    //     temp.Add(bestTriangle.Item3);

    //     List<int> triangleIndices2 = new List<int>();

    //     for (int i = 0; i < 3; i++) {
    //         int vertexIndex = temp[i].vertex.index; // Retrieve the existing vertex index
    //         triangleIndices2.Add(vertexIndex);

    //         Edge currentEdge = temp[i];
    //         var key = Tuple.Create(currentEdge.vertex.index, currentEdge.next.vertex.index);
    //         if (newEdgeDict.ContainsKey(key)) {
    //             new_edge_list.Add(newEdgeDict[key]);
    //         }
    //     }

    //     // Ensure the correct winding order
    //     if (!IsCorrectWindingOrder(vertices[triangleIndices2[0]], vertices[triangleIndices2[1]], vertices[triangleIndices2[2]])) {
    //         (triangleIndices2[1], triangleIndices2[2]) = (triangleIndices2[2], triangleIndices2[1]);
    //     }

    //     // Add indices for the triangle
    //     subMeshTriangles.AddRange(triangleIndices2);

    //     // add triangle to half edge DS at this point
    //     // halfedgeMesh.AddTriangle(holeEdges[0], holeEdges[1], holeEdges[2], newEdgeDict); //, new_edge_list[new_edge_list.Count - 1]);

    //     // Recursively fill the remaining hole
    //     // NewTriangulateHoleDihedral(newHole);
    //     return;
    // }

    // float MaxDihedralAngle(Edge v_i, Edge v_m, Edge v_k) {
    //     float maxAngle = 0;

    //     Edge[] candidateEdges = new Edge[] {
    //         GetEdgeBetween(v_i.vertex, v_m.vertex),
    //         GetEdgeBetween(v_m.vertex, v_k.vertex),
    //         GetEdgeBetween(v_k.vertex, v_i.vertex)
    //     };

    //     foreach (var edge in candidateEdges) {
    //         if (edge == null || edge.opposite != null) continue; // only check boundary edges

    //         // Find a triangle adjacent to this edge (the one sharing it from the surrounding mesh)
    //         Edge[] surroundingTriangles = GetAdjacentTrianglesFromBoundaryEdge(edge).ToArray();
    //         foreach (var adj in surroundingTriangles) {
    //             float angle = DihedralAngle(edge, edge.next, edge.next.next, adj, adj.next, adj.next.next);
    //             maxAngle = Mathf.Max(maxAngle, angle);
    //         }
    //     }

    //     return maxAngle;
    // }

    // List<Edge> GetAdjacentTrianglesFromBoundaryEdge(Edge boundaryEdge) {
    //     List<Edge> adjacentTriangles = new List<Edge>();

    //     Vertex v1 = boundaryEdge.vertex;
    //     Vertex v2 = boundaryEdge.next.vertex;

    //     // Check if there is an edge going from v2 -> v1 with an opposite (i.e. triangle on other side)
    //     if (newEdgeDict.TryGetValue(Tuple.Create(v2.index, v1.index), out Edge reverse)) {
    //         if (reverse.opposite != null) {
    //             adjacentTriangles.Add(reverse.opposite);
    //         }
    //     }

    //     return adjacentTriangles;
    // }



    // public float DihedralAngle(Edge e1, Edge e2, Edge e3, Edge e4, Edge e5, Edge e6) {
    //     Vector3 normal1 = ComputeNormal(e1.vertex, e2.vertex, e3.vertex);
    //     Vector3 normal2 = ComputeNormal(e4.vertex, e5.vertex, e6.vertex);

    //     // Flip the second normal if triangle orientation is inconsistent
    //     if (!SharesEdge(e1, e2, e3, e4, e5, e6)) {
    //         normal2 = -normal2;
    //     }

    //     float cosAngle = Mathf.Clamp(Vector3.Dot(normal1, normal2), -1f, 1f);
    //     return Mathf.Acos(cosAngle);
    // }


    // Vector3 ComputeNormal(Vertex v0, Vertex v1, Vertex v2) {
    //     Vector3 a = v1.position - v0.position;
    //     Vector3 b = v2.position - v0.position;
    //     Vector3 normal = Vector3.Cross(a, b).normalized;
    //     return normal;
    // }

    // List<Edge> GetAdjacentTriangles(Edge e) {
    //     List<Edge> adjacent = new List<Edge>();

    //     for (int i = 0; i < 3; i++) {
    //         if (e.opposite != null) {
    //             adjacent.Add(e.opposite);
    //         }
    //         e = e.next;
    //     }
    //     return adjacent;
    // }

    // bool SharesEdge(Edge a1, Edge a2, Edge a3, Edge b1, Edge b2, Edge b3) {
    //     var setA = new HashSet<(int, int)> {
    //         (a1.vertex.index, a2.vertex.index),
    //         (a2.vertex.index, a3.vertex.index),
    //         (a3.vertex.index, a1.vertex.index)
    //     };

    //     var setB = new HashSet<(int, int)> {
    //         (b1.vertex.index, b2.vertex.index),
    //         (b2.vertex.index, b3.vertex.index),
    //         (b3.vertex.index, b1.vertex.index)
    //     };

    //     foreach (var (i1, i2) in setA) {
    //         if (setB.Contains((i2, i1))) return true; // opposite winding
    //     }
    //     return false;
    // }


    // Edge GetEdgeBetween(Vertex v1, Vertex v2) {
    //     var key = Tuple.Create(v1.index, v2.index);
    //     if (newEdgeDict.TryGetValue(key, out Edge e)) {
    //         return e;
    //     }
    //     key = Tuple.Create(v2.index, v1.index); // try reverse
    //     if (newEdgeDict.TryGetValue(key, out e)) {
    //         return e.opposite; // we still want correct winding
    //     }
    //     return null;
    // }


    int counter = 0;
    public void NewTriangulateHole(List<Edge> hole_vertices, Edge v11, Edge v22) {
        if (hole_vertices.Count <= 3)
        {
            Debug.Log("new triangulate we hit base case " + hole_vertices.Count);
            List<int> triangleIndices = new List<int>();

            for (int i = 0; i < 3; i++) {
                int vertexIndex = hole_vertices[i].vertex.index; // Retrieve the existing vertex index
                triangleIndices.Add(vertexIndex);

                Edge currentEdge = hole_vertices[i];
                // new_edge_list.Add(currentEdge);
                // newEdgeDict.Add(Tuple.Create(currentEdge.vertex.index, currentEdge.next.vertex.index), currentEdge);

                var key = Tuple.Create(currentEdge.vertex.index, currentEdge.next.vertex.index);
                // if (new_edges.Contains(currentEdge)) { 
                if (newEdgeDict.ContainsKey(key)) {
                //     freshNewEdgeDict.Add(key, currentEdge);
                //     freshNewEdges.Add(currentEdge);
                    new_edge_list.Add(newEdgeDict[key]);
                }
            }

            // Ensure the correct winding order
            if (!IsCorrectWindingOrder(vertices[triangleIndices[0]], vertices[triangleIndices[1]], vertices[triangleIndices[2]])) {
                (triangleIndices[1], triangleIndices[2]) = (triangleIndices[2], triangleIndices[1]);
            }

            // Add indices for the triangle
            subMeshTriangles.AddRange(triangleIndices);

            Edge he1 = hole_vertices[0];
            Edge he2 = he1.next;
            Edge he3 = he1.next.next;

            // **Create a new face and assign an edge**
            Face newFace = new Face(he1); 
            newFace.face_idx = subMeshTriangles.Count - 1; //halfedgeMesh.patch_faces.Count; // Assign an index to the new face
            halfedgeMesh.patch_faces.Add(newFace);
            Debug.Log("new face check: " + newFace.face_idx);

            // **Assign the face to the edges**
            he1.face = newFace;
            he2.face = newFace;
            he3.face = newFace;

            // add triangle to half edge DS at this point
            halfedgeMesh.AddTriangle(hole_vertices[0], hole_vertices[1], hole_vertices[2], newEdgeDict); //, new_edge_list[new_edge_list.Count - 1]);
            return;
        }

        (Edge v1, Edge v2) = FindBestSplitLine(hole_vertices);
        List<Edge> loopA, loopB;
        SplitLoopTopology(v1, v2, out loopA, out loopB); 
        Debug.Log("Split loops: " + hole_vertices.Count + " " + loopA.Count + " " + loopB.Count);
        
        Edge new_edge = new Edge(v1.vertex);
        new_edge.opposite = null;
        // new_edge_list.Add(new_edge);

        // Processing loop A -> almost always 3
        List<Edge> loopACopy = new List<Edge>();
        Edge previousEdge = null;
        foreach (var e in loopA)
        {
            Edge currentEdge;
            if (e == v2) {
                currentEdge = new_edge;
            } else {
                currentEdge = new Edge(e.next.vertex);
                currentEdge.opposite = e;
                e.opposite = currentEdge;
            }

            if (e == v1) currentEdge.next = new_edge;
            else currentEdge.next = previousEdge;

            loopACopy.Add(currentEdge);

            previousEdge = currentEdge;
        }
        // VisualizeHolePoints(loopACopy);
        // newEdgeDict.Add(Tuple.Create(new_edge.vertex.index, new_edge.next.vertex.index), new_edge);
        // new_edges.Add(new_edge);
        // NewTriangulateHole(loopACopy, v1, v2);
        if (!AreCollinear(loopACopy)) {
            newEdgeDict.Add(Tuple.Create(new_edge.vertex.index, new_edge.next.vertex.index), new_edge);
            new_edges.Add(new_edge);
            NewTriangulateHole(loopACopy, v1, v2);
        }

        // Processing loop B
        List<Edge> loopBCopy = new List<Edge>();
        if (loopB.Count == 3) {
            Edge new_edge_opp = new Edge(new_edge.next.vertex);

            foreach (var e in loopB) {
                Edge currentEdge = null;
                if (e == v1) {
                    currentEdge = new_edge_opp;                
                }
                else {
                    currentEdge = new Edge(e.next.vertex);
                    currentEdge.opposite = e;
                    e.opposite = currentEdge;
                }
                
                if (e == v2) currentEdge.next = new_edge_opp;
                else currentEdge.next = previousEdge;

                loopBCopy.Add(currentEdge);
                previousEdge = currentEdge;
            }
            var a = Tuple.Create(v1.vertex.index, new_edge_opp.vertex.index);
            new_edge_opp.opposite = newEdgeDict[a];
            new_edges.Add(new_edge_opp);

            Debug.Log("opp check..." + new_edge.opposite + " nn " + new_edge_opp.opposite);
        } else {
            foreach(var e in loopB) {
                if (e != v1) {
                    loopBCopy.Add(e);
                } else {
                    loopBCopy.Add(new_edge);
                }
            }
        }
        // VisualizeHolePoints(loopBCopy);
        // Debug.Log("loopbcopy " + loopBCopy.Count);
        NewTriangulateHole(loopBCopy, v1, v2);
    }

    bool AreCollinear(List<Edge> edgeList) {
        Vector3 v1 = edgeList[0].vertex.position;
        Vector3 v2 = edgeList[1].vertex.position;
        Vector3 v3 = edgeList[2].vertex.position;

        Vector3 a = v2 - v1;
        Vector3 b = v3 - v1;

        // Compute cross product
        Vector3 crossProduct = Vector3.Cross(a, b);
        float area = crossProduct.magnitude; // Triangle area is 0 if collinear

        // Normalize by vector lengths to avoid numerical issues
        float lengthProduct = a.magnitude * b.magnitude;

        // Relative threshold (adjust if necessary)
        float tolerance = 1e-6f; 

        // Check if cross product is small relative to vector sizes
        bool isCollinear = (lengthProduct < 1e-8f) || (area / lengthProduct < 0.1f);

        Debug.Log($"Collinearity Check: {area} / {lengthProduct} = {area / lengthProduct}");
        Debug.Log($"Points: {v1}, {v2}, {v3}, Result: {isCollinear}");

        return isCollinear;
    }
    
    void VisualizeHolePoints(List<Edge> edges) {
        foreach (var e in edges) {
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere.transform.position = e.vertex.position;
            sphere.transform.localScale = Vector3.one * 0.001f;
            sphere.GetComponent<Renderer>().material.color = Color.yellow;

            GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere2.transform.position = e.next.vertex.position;
            sphere2.transform.localScale = Vector3.one * 0.001f;
            sphere2.GetComponent<Renderer>().material.color = Color.red;
        }
    }

    List<Edge> BuildConnectedLoop(Edge startEdge, Edge endEdge)
    {
        // working code
        List<Edge> loop = new List<Edge>();

        Edge curr_edge = startEdge;
        do {
            if (curr_edge.opposite == null) {
                loop.Add(curr_edge);
                curr_edge = curr_edge.next;
            } else {
                curr_edge = curr_edge.opposite?.next;
            }
            
        } while (curr_edge != endEdge && curr_edge != null); 
        loop.Add(endEdge);
        return loop;
    }

    void SplitLoopTopology(Edge v1, Edge v2, out List<Edge> loopA, out List<Edge> loopB)
    {
        loopA = new List<Edge>();
        loopB = new List<Edge>();

        // Start building loopA from v1
        // Debug.Log("loop A try");
        loopA = BuildConnectedLoop(v1, v2);
        // Debug.Log("loop B try");
        loopB = BuildConnectedLoop(v2, v1);
    }
    

    public List<Tuple<Edge, Edge>> FindNonNeighboringEdgePairs(List<Edge> edgeSet)
    {
        List<Tuple<Edge, Edge>> nonNeighborEdgePairs = new List<Tuple<Edge, Edge>>();
        Dictionary<Vertex, HashSet<Vertex>> adjacencyList = new Dictionary<Vertex, HashSet<Vertex>>();
        Dictionary<Vertex, List<Edge>> vertexToEdges = new Dictionary<Vertex, List<Edge>>();

        // Build adjacency list and map each vertex to its originating edges
        foreach (var edge in edgeSet)
        {
            Vertex v1 = edge.vertex;
            Vertex v2 = edge.next.vertex;

            // Build adjacency list for vertices
            if (!adjacencyList.ContainsKey(v1))
                adjacencyList[v1] = new HashSet<Vertex>();
            if (!adjacencyList.ContainsKey(v2))
                adjacencyList[v2] = new HashSet<Vertex>();

            adjacencyList[v1].Add(v2);
            adjacencyList[v2].Add(v1);

            // Map each vertex to the edges it originates from
            if (!vertexToEdges.ContainsKey(v1))
                vertexToEdges[v1] = new List<Edge>();
            vertexToEdges[v1].Add(edge);

            if (!vertexToEdges.ContainsKey(v2))
                vertexToEdges[v2] = new List<Edge>();
            vertexToEdges[v2].Add(edge.next); // edge.next originates from v2
        }

        // Iterate through the vertexToEdges dictionary to find non-neighboring pairs
        foreach (var vertex1 in vertexToEdges.Keys)
        {
            foreach (var edge1 in vertexToEdges[vertex1])
            {
                // Check non-neighboring vertices of vertex1
                foreach (var vertex2 in vertexToEdges.Keys)
                {
                    if (vertex1 != vertex2 && !adjacencyList[vertex1].Contains(vertex2))
                    {
                        // Pair edges from vertex1 and vertex2
                        foreach (var edge2 in vertexToEdges[vertex2])
                        {
                            // Avoid duplicate pairs by creating ordered pairs based on vertex indices
                            var orderedPair = edge1.vertex.index < edge2.vertex.index
                                ? Tuple.Create(edge1, edge2)
                                : Tuple.Create(edge2, edge1);

                            // Add the pair if it doesn't already exist
                            if (!nonNeighborEdgePairs.Contains(orderedPair))
                            {
                                nonNeighborEdgePairs.Add(orderedPair);
                            }
                        }
                    }
                }
            }
        }

        return nonNeighborEdgePairs;
    }

    public List<Edge> FindNonNeighborsViaLoops(Edge stEdge, List<Edge> edgeList)
    {
        List<Edge> nonNeighbors = new List<Edge>();
        int stEdgeVertexIndex = stEdge.vertex.index;
        int stEdgeNextVertexIndex = stEdge.next.vertex.index;
        // float minDistance = 0.01f;

        // Store indices of vertices adjacent to stEdge for quick lookup
        HashSet<int> stEdgeNeighborVertices = new HashSet<int> { stEdgeVertexIndex, stEdgeNextVertexIndex };

        // Calculate the midpoint of stEdge
        Vector3 stEdgeMidpoint = (stEdge.vertex.position + stEdge.next.vertex.position) / 2;

        // Check each edge in edgeList to see if it is a true non-neighbor
        foreach (var edge in edgeList)
        {
            int edgeVertexIndex = edge.vertex.index;
            int edgeNextVertexIndex = edge.next.vertex.index;

            // Calculate the midpoint of the current edge
            Vector3 edgeMidpoint = (edge.vertex.position + edge.next.vertex.position) / 2;

            // Calculate the Euclidean distance between the midpoints
            float distance = Vector3.Distance(stEdgeMidpoint, edgeMidpoint);

            // Check if the edge is a non-neighbor and if the distance meets the minimum threshold
            if (!stEdgeNeighborVertices.Contains(edgeVertexIndex) && 
                !stEdgeNeighborVertices.Contains(edgeNextVertexIndex) &&
                distance >= minDistance)
            {
                nonNeighbors.Add(edge);
                // Debug.Log("Non-neighbor pair: " + stEdgeVertexIndex + " -> " + edgeVertexIndex + ", Distance: " + distance);
            }
        }

        return nonNeighbors;
    }

    public (Edge, Edge) FindBestSplitLine(List<Edge> hole_edges)//, List<Vector3> hole_vertices)
    {
        // Vector3 bestV1 = Vector3.zero, bestV2 = Vector3.zero;
        Edge bestV1 = new Edge(), bestV2 = new Edge();
        // Vertex bestV1 = new Vertex(), bestV2 = new Vertex();
        float bestAspectRatio = float.MinValue;//0.1f;  // Start with a threshold value

        // Create a list of vertex positions from edges for plane definition
        List<Vector3> hole_vertices_positions = hole_edges.Select(edge => edge.vertex.position).ToList();
        List<Vertex> hole_vertex = hole_edges.Select(edge => edge.vertex).ToList();
        Plane avgPlane = CreateNewAvgPlane(hole_edges); //DefineAveragePlane(hole_edges);//hole_vertices_positions);

        foreach(var e in hole_edges) {
            List<Edge> nonNeighbors = FindNonNeighborsViaLoops(e, hole_edges);
            foreach(var n in nonNeighbors) {
                Edge v1 = e;
                Edge v2 = n;
                Plane splitPlane = GetSplitPlane(v1.vertex.position, v2.vertex.position, avgPlane.normal);
                float aspectRatio = CalculateAspectRatio(hole_vertices_positions, splitPlane, v1.vertex.position, v2.vertex.position);
                if (aspectRatio > bestAspectRatio)
                {
                    bestV1 = v1;
                    bestV2 = v2;
                    bestAspectRatio = aspectRatio;
                    bestSplitPlane = splitPlane;
                }
            }
        }
        Debug.Log("best aspect ratio: " + bestAspectRatio);
        
        bestv1 = bestV1.vertex.position;
        bestv2 = bestV2.vertex.position;
        bestEdge1 = bestV1;
        bestEdge2 = bestV2;

        Debug.Log("best v1 v2 indices: " + bestV1.vertex.index + " " + bestV2.vertex.index);
        return (bestV1, bestV2);
    }

    void VisualizePlane(Plane avgPlane, List<Vector3> hole_vertices) {
        GameObject plane  = GameObject.CreatePrimitive(PrimitiveType.Plane);
        Vector3 center = Vector3.zero;
        foreach (var vertex in hole_vertices)
        {
            center += vertex;
        }
        center /= hole_vertices.Count;
        plane.transform.position = center;
        Quaternion rotation = Quaternion.FromToRotation(Vector3.up, avgPlane.normal);
        plane.transform.rotation = rotation;
        plane.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
    }

    Plane GetSplitPlane(Vector3 a, Vector3 b, Vector3 normal) {
        Vector3 direction = b - a;
        Vector3 normal2 = Vector3.Cross(direction, normal).normalized;
        Plane orthogonalPlane = new Plane(normal2, a);
        return orthogonalPlane;
    }

    // Aspect ratio: minimum distance of the loop vertices to the split plane, divided by the length of the split line.
    float CalculateAspectRatio(List<Vector3> hole_vertices, Plane splitPlane, Vector3 v1, Vector3 v2)
    {
        float minDistance = float.MaxValue;
        foreach (var vertex in hole_vertices)
        {
            float distance = splitPlane.GetDistanceToPoint(vertex);
            distance = distance < 0 ? -distance : distance;
            if (distance < minDistance)
            {
                minDistance = distance;
            }
        }

        float splitLineLength = Vector3.Distance(v2, v1);
        if (splitLineLength == 0) return 0;
        // return minDistance / splitLineLength;

        // --- Angle factor computation ---
        List<float> cornerAngles = new List<float>();
        int n = hole_vertices.Count;

        for (int i = 0; i < n; i++)
        {
            Vector3 prev = hole_vertices[(i - 1 + n) % n];
            Vector3 curr = hole_vertices[i];
            Vector3 next = hole_vertices[(i + 1) % n];

            Vector3 dir1 = (prev - curr).normalized;
            Vector3 dir2 = (next - curr).normalized;

            float angle = Vector3.Angle(dir1, dir2);
            cornerAngles.Add(angle);
        }

        float minAngle = cornerAngles.Min();
        Debug.Log("checking angles...." + minAngle);
        // float mean = cornerAngles.Average();
        // float variance = cornerAngles.Sum(a => (a - mean) * (a - mean)) / cornerAngles.Count;
        // float angleUniformity = 1f / (1f + variance);
        // float angleFactor = Mathf.Clamp01(minAngle / 30f) * angleUniformity;

        return minDistance / splitLineLength;

    }

    // Function to compute the average plane based on the triangle normals, centers, and areas
    Plane DefineAveragePlane(List<Edge> holeEdges)
    {
        Vector3 sumNormal = Vector3.zero;
        Vector3 sumWeightedCenters = Vector3.zero;
        float totalArea = 0f;

        foreach (var edge in holeEdges)
        {
            Vector3 v0 = edge.vertex.position;
            Vector3 v1 = edge.next.vertex.position;
            Vector3 v2 = edge.next.next.vertex.position;

            // Calculate the area of the triangle using the cross product
            Vector3 edge1 = v1 - v0;
            Vector3 edge2 = v2 - v0;
            Vector3 triangleNormal = Vector3.Cross(edge1, edge2).normalized;
            float triangleArea = 0.5f * Vector3.Cross(edge1, edge2).magnitude;

            // Calculate the centroid of the triangle
            Vector3 triangleCenter = (v0 + v1 + v2) / 3.0f;

            // Accumulate the weighted normal and weighted centroid
            sumNormal += triangleNormal * triangleArea;
            sumWeightedCenters += triangleCenter * triangleArea;

            // Accumulate the total area
            totalArea += triangleArea;
        }

        // Vector3 avgNormal = sumNormal.normalized;
        // Vector3 avgCenter = sumWeightedCenters / totalArea;

        // return new Plane(avgNormal, avgCenter);
        Vector3 avgNormal = sumNormal / totalArea;
        avgNormal.Normalize();  // Normalize the average normal
        Vector3 avgCenter = sumWeightedCenters / totalArea;

        // Define the average plane using avgNormal and avgCenter
        Plane averagePlane = new Plane(avgNormal, avgCenter);

        return averagePlane;
    }

    public Plane CreateNewAvgPlane(List<Edge> hole_edges) {
        // List<Vector3> face_normals = GetAdjacentFaceNormals(hole_edges);
        // Vector3 centroid = Vector3.zero;;
        // foreach(var e in hole_edges) {
        //     centroid += e.vertex.position;
        // }
        // centroid = centroid/hole_edges.Count;

        // Vector3 averageNormal = Vector3.zero;
        // foreach (Vector3 faceNormal in face_normals)
        // {
        //     averageNormal += faceNormal;
        // }
        // averageNormal.Normalize();
        // Plane avgPlane = new Plane(averageNormal, centroid);
        // return avgPlane;

        int step = hole_edges.Count / 3;
        Vector3 pointA = hole_edges[0].vertex.position;
        Vector3 pointB = hole_edges[step].vertex.position;
        Vector3 pointC = hole_edges[2 * step].vertex.position;

        Vector3 direction1 = pointB - pointA;
        Vector3 direction2 = pointC - pointA;

        // Step 2: Compute the normal by taking the cross product
        Vector3 normal = Vector3.Cross(direction1, direction2).normalized;

        // Step 3: Create the plane using the normal and one of the points (e.g., pointA)
        Plane plane = new Plane(normal, pointA);

        return plane;
    }

    public List<Vector3> GetAdjacentFaceNormals(List<Edge> holeEdges)
    {
        // Step 1: Identify boundary vertices from hole edges
        HashSet<Vector3> boundaryVertices = new HashSet<Vector3>();
        foreach (var edge in holeEdges)
        {
            boundaryVertices.Add(edge.vertex.position);
        }

        // Step 2: Find faces (triangles) containing boundary vertices
        List<Vector3> adjacentFaceNormals = new List<Vector3>();
        // Vector3[] vertices = mesh.vertices;
        // int[] triangles = mesh.triangles;

        for (int i = 0; i < triangles.Count; i += 3)
        {
            // Get vertices of the current face
            Vector3 v0 = vertices[triangles[i]];
            Vector3 v1 = vertices[triangles[i + 1]];
            Vector3 v2 = vertices[triangles[i + 2]];

            // Check if this face contains any boundary vertex
            if (boundaryVertices.Contains(v0) || boundaryVertices.Contains(v1) || boundaryVertices.Contains(v2))
            {
                // Calculate the normal for this face
                Vector3 normal = Vector3.Cross(v1 - v0, v2 - v0).normalized;
                adjacentFaceNormals.Add(normal);
            }
        }

        return adjacentFaceNormals;
    }
}
