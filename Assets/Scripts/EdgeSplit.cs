using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class EdgeSplit : MonoBehaviour
{
    public List<Vector3> vertices;
    public HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();
    public List<Edge> new_edges = new List<Edge>();
    public List<int> subMeshTriangles = new List<int>();
    public Dictionary<Tuple<int, int>, Edge> newEdgeDict;
    public List<Edge> new_edges_created = new List<Edge>();
    public List<Edge> new_vertex_edges = new List<Edge>();
    int maxIter = 2;
    float scale_factor = 0.5f;
    HashSet<Edge> visited_edges = new HashSet<Edge>();

    public EdgeSplit(float sf) {
        scale_factor = sf;
    }

    Vector3 FindMidpoint(Vertex a, Vertex b) {
        return (a.position + b.position) / 2;
    }

    Vertex AddNewVertex(Edge e) {
        Vector3 midpoint = FindMidpoint(e.vertex, e.next.vertex);
        Vertex newVertex = new Vertex(midpoint, vertices.Count);
        vertices.Add(midpoint);

        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.position = midpoint;
        sphere.transform.localScale = Vector3.one * 0.001f;
        sphere.GetComponent<Renderer>().material.color = Color.magenta;
        return newVertex;
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
    
    public void CreateEdgeSplit() {
        // CASE 1: EDGE SPLIT ONLY ONE EDGE
        // Check for longest edge, then split
        Edge edgeToSplit = FindLongestValidEdge();

        if (edgeToSplit == null) {
            Debug.Log("No valid edge found in newEdgeDict. Stopping edge split.");
            return;
        }

        EdgeSplitWithNewVertex(edgeToSplit);

        // foreach (var edge in new_edges) {
        //     if (!visited_edges.Contains(edge)) {
        //         AddUnaffectedTriangles(edge, edge.opposite);
        //     }
        // }

        // CASE 2 OR 3: EDGE SPLIT WITH TWO OR THREE EDGES
        // HashSet<Edge> finalEdgesToSplit = new HashSet<Edge>();

        // var nm = MarkLongestValidEdges();
        // HashSet<Edge> edgesToSplit = new HashSet<Edge>(nm);
        // Debug.Log("Splitting " + edgesToSplit.Count + " edges!");

        // foreach (var e in edgesToSplit) {
        //     Edge prev = FindPreviousInternalEdge(e);
        //     Edge next = e.next;

        //     // Check if at least one of its triangle neighbors is also in edgesToSplit
        //     if (edgesToSplit.Contains(prev) || edgesToSplit.Contains(next)) {
        //         finalEdgesToSplit.Add(e);
        //     }
        // }
        // Debug.Log("Final edges to split: " + finalEdgesToSplit.Count);

        // // Add edges that are not affected by splits
        // foreach (var k in edgesToSplit) {
        //     if (!finalEdgesToSplit.Contains(k)) {
        //         AddUnaffectedTriangles(k, k.opposite);
        //     }
        // }
    }

    public void EdgeSplitWithNewVertex(Edge edge) {
        Edge oppositeEdge = edge.opposite;   

        new_edges.Remove(edge);
        new_edges.Remove(oppositeEdge);
        newEdgeDict.Remove(Tuple.Create(edge.vertex.index, edge.next.vertex.index));
        newEdgeDict.Remove(Tuple.Create(oppositeEdge.vertex.index, oppositeEdge.next.vertex.index));     

        // Debug code to visualize which edge is getting split
        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.position = edge.vertex.position;
        sphere.transform.localScale = Vector3.one * 0.001f;
        sphere.GetComponent<Renderer>().material.color = Color.cyan;
        GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere2.transform.position = edge.next.vertex.position;
        sphere2.transform.localScale = Vector3.one * 0.001f;
        sphere2.GetComponent<Renderer>().material.color = Color.blue;

        // new midpoint vertex
        Vertex newVertex = AddNewVertex(edge);

        Edge prev = FindPreviousInternalEdge(edge);
        Edge oppPrev = FindPreviousInternalEdge(oppositeEdge);

        Edge e1 = new Edge(newVertex);
        Edge e2opp = new Edge(newVertex);
        Edge e2 = new Edge(prev.vertex); //e2opp.next);
        Edge og_opp = new Edge(newVertex);
        Edge e3opp = new Edge(newVertex);
        Edge e3 = new Edge(oppPrev.vertex); //e3opp.next);

        e2.next = e1;
        e1.next = edge.next;
        edge.next.next = e2;

        edge.next = e2opp;
        e2opp.next = prev;

        og_opp.next = oppositeEdge.next;
        oppositeEdge.next.next = e3;
        e3.next = og_opp;

        oppositeEdge.next = e3opp;
        e3opp.next = oppPrev;

        // assign opposites
        e1.opposite = oppositeEdge; //e1opp;
        oppositeEdge.opposite = e1;
        e2.opposite = e2opp;
        e2opp.opposite = e2;
        e3.opposite = e3opp;
        e3opp.opposite = e3;
        og_opp.opposite = edge;
        edge.opposite = og_opp;

        AddNewTriangle(e1);
        AddNewTriangle(e2opp);
        AddNewTriangle(e3);
        AddNewTriangle(e3opp);

        // Add triangles that were not effected by the split
        AddUnaffectedTriangles(edge, oppositeEdge);

        new_vertex_edges.Add(e2opp);
    }

    private void AddNewTriangle(Edge edge) {
        Edge e1 = edge;
        Edge e2 = edge.next;
        Edge e3 = edge.next.next;

        if (!IsCorrectWindingOrder(e1.vertex.position, e2.vertex.position, e3.vertex.position)) {
            // (triangleIndices[1], triangleIndices[2]) = (triangleIndices[2], triangleIndices[1]);
            (e2, e3) = (e3, e2);
        }

        new_triangles.Add(e1.vertex.index);
        new_triangles.Add(e2.vertex.index);
        new_triangles.Add(e3.vertex.index);

        // new_triangles.Add(edge.vertex.index);
        // new_triangles.Add(edge.next.vertex.index);
        // new_triangles.Add(edge.next.next.vertex.index);

        new_edges_created.Add(edge);
        visited_edges.Add(edge);
        
        var b = Tuple.Create(edge.vertex.index, edge.next.vertex.index);
        newEdgeDict[b] = edge;
    }

    private void AddUnaffectedTriangles(Edge edge, Edge opposite) {
        HashSet<Edge> affectedEdges = new HashSet<Edge> {
            edge, edge.next, edge.next.next,
            // opposite, opposite.next, opposite.next.next
        };

        foreach (Edge e in new_edges) {
            // Skip affected edges
            if (affectedEdges.Contains(e)) continue;

            // Check if the edge forms a triangle
            // if (e.next != null && e.next.next != null && e.next.next.next == e) {
                AddNewTriangle(e);
            // }
        }
    }

    Edge FindPreviousInternalEdge(Edge startEdge) {
        // Edge curr_edge = startEdge;
        // Edge prev_edge = null;

        // // Traverse edges in a circular loop
        // do {
        //     // Move to the previous edge by following the opposite and its next
        //     curr_edge = curr_edge.next;

        //     // If we loop back to the start edge, stop
        //     if (curr_edge == startEdge) {
        //         break;
        //     }

        //     // Keep track of the previous edge
        //     prev_edge = curr_edge;
        // } while (curr_edge != null);

        // return prev_edge;
        Edge curr_edge = startEdge;
        Edge prev_edge = null;
        int safetyCounter = 0;

        do {
            safetyCounter++;
            if (safetyCounter > 100) {
                Debug.Log("Infinite loop detected in FindPreviousInternalEdge!");
                break;
            }

            curr_edge = curr_edge.next;

            if (curr_edge == startEdge) break;

            prev_edge = curr_edge;
        } while (curr_edge != null);

        return prev_edge;
    }

    public void Reset() {
        // vertices.Clear();
        // triangles.Clear();
        new_triangles.Clear();
        // new_edges.Clear();

        new_edges.Clear();
        // new_edges.AddRange(new_edges_created);
        new_edges_created.Clear();
        new_vertex_edges.Clear();
    }

    public List<int> GetTriangles() {
        return triangles;
    }

    private bool IsCorrectWindingOrder(Vector3 p0, Vector3 p1, Vector3 p2)
    {
        Vector3 normal = Vector3.Cross(p1 - p0, p2 - p0);
        return Vector3.Dot(normal, Vector3.up) > 0; // checking in the direction of normal
    }
}
