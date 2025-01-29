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
        return normal.z <= 0; // Assumes a right-hand rule with a positive Z-axis normal
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
    int counter = 0;
    public void NewTriangulateHole(List<Edge> hole_vertices, Edge v11, Edge v22) {
        if (hole_vertices.Count <= 3)
        {
            Debug.Log("new triangulate we hit base case " + hole_vertices.Count);

            // for (int i = 0; i < 3; i++) {
            //     vertices.Add(hole_vertices[i].vertex.position);
            // }

            // // Ensure the correct winding order
            // if (!IsCorrectWindingOrder(vertices[vertices.Count - 3], vertices[vertices.Count - 2], vertices[vertices.Count - 1])) {
            //     (vertices[vertices.Count - 2], vertices[vertices.Count - 1]) = (vertices[vertices.Count - 1], vertices[vertices.Count - 2]);
            // }

            // // Add indices for the triangle
            // for (int i = 3; i > 0; i--) {
            //     subMeshTriangles.Add(vertices.Count - i);
            // }
            List<int> triangleIndices = new List<int>();

            for (int i = 0; i < 3; i++) {
                int vertexIndex = hole_vertices[i].vertex.index; // Retrieve the existing vertex index
                triangleIndices.Add(vertexIndex);
            }

            // Ensure the correct winding order
            if (!IsCorrectWindingOrder(vertices[triangleIndices[0]], vertices[triangleIndices[1]], vertices[triangleIndices[2]])) {
                (triangleIndices[1], triangleIndices[2]) = (triangleIndices[2], triangleIndices[1]);
            }

            // Add indices for the triangle
            subMeshTriangles.AddRange(triangleIndices);

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
            new_edge_list.Add(currentEdge);
            newEdgeDict.Add(Tuple.Create(currentEdge.vertex.index, currentEdge.next.vertex.index), currentEdge);

            previousEdge = currentEdge;
        }
        // VisualizeHolePoints(loopACopy);
        NewTriangulateHole(loopACopy, v1, v2);

        // Processing loop B
        List<Edge> loopBCopy = new List<Edge>();
        if (loopB.Count == 3) {
            Edge new_edge_opp = new Edge(new_edge.next.vertex);

            // Send opposite edges after processing them here.
            foreach (var e in loopB) {
                Edge currentEdge = null;
                if (e == v1) {
                    currentEdge = new_edge_opp;
                    currentEdge.opposite = e;
                    e.opposite = currentEdge;
                }
                else {
                    currentEdge = new Edge(e.next.vertex);
                    currentEdge.opposite = e;
                    e.opposite = currentEdge;
                }
                
                if (e == v2) currentEdge.next = new_edge_opp;
                else currentEdge.next = previousEdge;

                loopBCopy.Add(currentEdge);
                new_edge_list.Add(currentEdge);
                newEdgeDict.Add(Tuple.Create(currentEdge.vertex.index, currentEdge.next.vertex.index), currentEdge);

                previousEdge = currentEdge;
            }
            new_edge.opposite = new_edge_opp;
            new_edge_opp.opposite = new_edge;
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
        NewTriangulateHole(loopBCopy, v1, v2);
    }


    public void TriangulateHole(List<Edge> hole_vertices, Edge v11, Edge v22)
    {
        // Base case
        if (hole_vertices.Count <= 3)
        {
            Debug.Log("we hit base case " + hole_vertices.Count);

            Vector3 p0 = hole_vertices[0].vertex.position;
            Vector3 p1 = hole_vertices[1].vertex.position;
            Vector3 p2 = hole_vertices[2].vertex.position;
            if (!IsCorrectWindingOrder(p0, p1, p2))
            {
                (p1, p2) = (p2, p1);
            }

            vertices.Add(p0);
            vertices.Add(p1);
            vertices.Add(p2);

            // triangles.Add(vertices.Count - 3);
            // triangles.Add(vertices.Count - 2);
            // triangles.Add(vertices.Count - 1);

            subMeshTriangles.Add(vertices.Count - 3);
            subMeshTriangles.Add(vertices.Count - 2);
            subMeshTriangles.Add(vertices.Count - 1);

            foreach(var e in hole_vertices) {
                if (!all_edges.Contains(e)) {
                    all_edges.Add(e);
                }
            }

            return;
        }

        (Edge v1, Edge v2) = FindBestSplitLine(hole_vertices);
        List<Edge> loopA, loopB;
        SplitLoopTopology(v1, v2, out loopA, out loopB);        
        Debug.Log("Split loops: " + hole_vertices.Count + " " + loopA.Count + " " + loopB.Count);

        // foreach(var e in loopB) {
        //     if (e == v1) {
        //         e.next = v2;
        //     } else if (e == v2) {
        //         e.next = loopB[1];
        //     }
        // }

        Edge v2Prev = FindPreviousEdge(v2);
        Edge v1Prev = FindPreviousEdge(v1);

        Edge new_edge = new Edge(v1.vertex);

        new_edge.next = v2;
        v1Prev.next = new_edge;
        
        // Assign opposites
        if (v1.opposite == null) {
            Edge v1opp = new Edge(v1.next.vertex);
            v1opp.next = new_edge;
            v1.opposite = v1opp;
        
            Edge v2PrevEdgeOpp = new Edge(v2Prev.next.vertex);
            v2PrevEdgeOpp.next = v1opp;
            v2Prev.opposite = v2PrevEdgeOpp;
        }

        List<Edge> loopBCopy = new List<Edge>();
        foreach(var e in loopB) {
            if (e != v1) {
                loopBCopy.Add(e);
            } else {
                loopBCopy.Add(new_edge);
            }
        }
    
        loopB = loopBCopy;
        new_edges.Add(new_edge);
        new_edge_indices.Add(new_edge, Tuple.Create(v1, v2));

        if (!previous_edges.ContainsKey(v1)) previous_edges.Add(v1, v1Prev);
        if (!previous_edges.ContainsKey(v2)) previous_edges.Add(v2, v2Prev);

        


        if (loopB.Count == 3) {
            Debug.Log("loopB count is 3");

            if (totalCount == 4) {
                new_edge.next = v2Prev.opposite;

                Edge v2opp = new Edge(v2.next.vertex);
                Edge v2NextOpp = new Edge(v1Prev.next.vertex);
                Edge newOpp = new Edge(new_edge.next.vertex);

                v2opp.next = newOpp;
                newOpp.next = v2NextOpp;     
                v2NextOpp.next = v2opp;

                v2.opposite = v2opp;
                v2.next.opposite = v2NextOpp;
                
                new_edge.opposite = newOpp;
                newOpp.opposite = new_edge;
            } else {
                int i = 0;
                foreach(var e in new_edges) {
                    Edge ev1 = new_edge_indices[e].Item1;
                    Edge ev2 = new_edge_indices[e].Item2;

                    Edge ev1Prev = previous_edges[ev1];
                    Edge ev2Prev = previous_edges[ev2];

                    
                    if (i != 0) {
                        Edge newOpp = new Edge(e.next.vertex);
                        newOpp.next = new_edges.ElementAt(i - 1);
                        e.opposite = newOpp;
                        newOpp.opposite = e;
                    }

                    e.next = ev2Prev.opposite;
                    i++;
                }

                Edge ed = new_edges.ElementAt(0);
                Edge newOpp2 = new Edge(ed.next.vertex);
                newOpp2.next = new_edges.ElementAt(new_edges.Count - 1);
                ed.opposite = newOpp2;
                newOpp2.opposite = ed;
            }
        }
        
        //  VisualizeHolePoints(loopB); 
        TriangulateHole(loopA, v1, v2);
        TriangulateHole(loopB, v1, v2);
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

        // Edge currEdge = startEdge;
        // int iterations = 0;
        // loop.Add(startEdge);

        // do {
        //     if (currEdge.opposite == null) {
        //         loop.Add(currEdge); // Add to the loop only if it's a boundary edge
        //     }
        //     // Traverse using the pattern
        //     if (currEdge != null && currEdge.next != null && currEdge.next.opposite != null) {
        //         // loop.Add(currEdge);
        //         currEdge = currEdge.next.opposite;
        //     } else {
        //         // Debug.LogError("Traversal broke due to a null pointer." + currEdge + " adf " + currEdge.next + " sdf " + currEdge.next.opposite);
        //         // break;
        //         currEdge = currEdge.next;
        //     }

        //     // Visualize or debug the current edge
        //     Debug.Log($"Current Edge: {currEdge.vertex.index} -> {currEdge.next.vertex.index}");

        //     iterations++;
        //     if (iterations > 1000) {
        //         Debug.LogError("Reached max iterations, possible infinite loop.");
        //         break;
        //     }
        // } while (currEdge.vertex.index != endEdge.vertex.index && currEdge != null);
        // loop.Add(endEdge);


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
        // Plane avgPlane = DefineAveragePlane(hole_vertices_positions);
        // VisualizePlane(avgPlane, hole_vertices_positions);

        // List<Tuple<Vertex, Vertex>> nonNeighbors = FindNonNeighboringVertices(hole_edges);
        // List<Tuple<Edge, Edge>> nonNeighbors = FindNonNeighborsViaLoops(hole_edges[0], hole_edges);

        // // foreach(var n in nonNeighbors) {
        // //     Debug.Log("non neighbor pair: " + n.Item1.vertex.index + " " + n.Item2.vertex.index);
        // // }
        // // Debug.Log(nonNeighbors);

        // foreach(var pair in nonNeighbors) {
        //     Edge v1 = pair.Item1;
        //     Edge v2 = pair.Item2;
        //     Plane splitPlane = GetSplitPlane(v1.vertex.position, v2.vertex.position, avgPlane.normal);
        //     float aspectRatio = CalculateAspectRatio(hole_vertices_positions, splitPlane, v1.vertex.position, v2.vertex.position);
        //     // Debug.Log("aspect ratio: " + aspectRatio);

        //     if (aspectRatio > bestAspectRatio)
        //     {
        //         bestV1 = v1;
        //         bestV2 = v2;
        //         bestAspectRatio = aspectRatio;
        //     }
        // }
        // List<Edge> nonNeighbors = FindNonNeighborsViaLoops(hole_edges[0], hole_edges);
        // Debug.Log("hole edge length: " + hole_edges.Count);
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
