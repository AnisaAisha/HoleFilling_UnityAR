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
    Vector3 current_hole_normal = Vector3.zero;

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

        // foreach (var e in new_edges) {
        //     float edgeLength = Vector3.Distance(e.vertex.position, e.next.vertex.position);
        //     var edgeKey = Tuple.Create(e.opposite.vertex.index, e.opposite.next.vertex.index);

        //     if (newEdgeDict.ContainsKey(edgeKey) && edgeLength > maxLength) {
        //     // if (e.opposite != null && edgeLength > maxLength) {
        //         maxLength = edgeLength;
        //         longestValidEdge = e;
        //     }
        // }

        foreach (var kvp in newEdgeDict) {
            var e = kvp.Value;
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
    
    public void CreateEdgeSplit() {
        // CASE 1: EDGE SPLIT ONLY ONE EDGE
        // Check for longest edge, then split
        Edge edgeToSplit = FindLongestValidEdge();
        // newEdgeDict.Clear();

        if (edgeToSplit == null) {
            Debug.Log("No valid edge found in newEdgeDict. Stopping edge split.");
            return;
        }

        EdgeSplitWithNewVertex(edgeToSplit);
    }

    public void EdgeSplitWithNewVertex(Edge edge) {
        Edge oppositeEdge = edge.opposite;    

        // Debug code to visualize which edge is getting split
        // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere.transform.position = edge.vertex.position;
        // sphere.transform.localScale = Vector3.one * 0.001f;
        // sphere.GetComponent<Renderer>().material.color = Color.cyan;
        // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere2.transform.position = edge.next.vertex.position;
        // sphere2.transform.localScale = Vector3.one * 0.001f;
        // sphere2.GetComponent<Renderer>().material.color = Color.blue;

        // new midpoint vertex
        Vertex newVertex = AddNewVertex(edge);

        Edge prev = edge.next.next; //FindPreviousInternalEdge(edge);
        Edge oppPrev = oppositeEdge.next.next; //FindPreviousInternalEdge(oppositeEdge);

        Edge e1 = new Edge(newVertex);
        Edge e2opp = new Edge(newVertex);
        Edge e2 = new Edge(prev.vertex); //e2opp.next);
        Edge og_opp = new Edge(newVertex);
        Edge e3opp = new Edge(newVertex);
        Edge e3 = new Edge(oppPrev.vertex); //e3opp.next);

        e2.next = e1;
        e1.next = edge.next;
        edge.next.next = e2;

        e2opp.next = prev;
        edge.next = e2opp;

        og_opp.next = oppositeEdge.next;
        e3.next = og_opp;
        oppositeEdge.next.next = e3;
        
        e3opp.next = oppPrev;
        oppositeEdge.next = e3opp;
        

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

        var a = Tuple.Create(e1.vertex.index, e1.next.vertex.index);
        newEdgeDict[a] = e1;
        var b = Tuple.Create(e3.vertex.index, e3.next.vertex.index);
        newEdgeDict[b] = e3;
        var c = Tuple.Create(e2.vertex.index, e2.next.vertex.index);
        newEdgeDict[c] = e2;

        // newEdgeDict[Tuple.Create(edge.vertex.index, edge.next.vertex.index)] = edge;
        // newEdgeDict[Tuple.Create(oppositeEdge.vertex.index, oppositeEdge.next.vertex.index)] = oppositeEdge;

        // newEdgeDict[Tuple.Create(e1.vertex.index, e1.next.vertex.index)] = e1;
        // newEdgeDict[Tuple.Create(e2.vertex.index, e2.next.vertex.index)] = e2;
        // newEdgeDict[Tuple.Create(e2opp.vertex.index, e2opp.next.vertex.index)] = e2opp;
        // newEdgeDict[Tuple.Create(og_opp.vertex.index, og_opp.next.vertex.index)] = og_opp;
        // newEdgeDict[Tuple.Create(e3.vertex.index, e3.next.vertex.index)] = e3;
        // newEdgeDict[Tuple.Create(e3opp.vertex.index, e3opp.next.vertex.index)] = e3opp;

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

        new_edges_created.Add(e1);
        
        // var a = Tuple.Create(e1.vertex.index, e1.next.vertex.index);
        // var b = Tuple.Create(e2.vertex.index, e2.next.vertex.index);
        // var c = Tuple.Create(e3.vertex.index, e3.next.vertex.index);

        // var aopp = Tuple.Create(e1.next.vertex.index, e1.vertex.index);
        // var bopp = Tuple.Create(e2.next.vertex.index, e2.vertex.index);
        // var copp = Tuple.Create(e3.next.vertex.index, e3.vertex.index);

        // newEdgeDict[a] = e1;
        // newEdgeDict[b] = e2;

        // if (!newEdgeDict.ContainsKey(aopp)) newEdgeDict[a] = e1;
        // if (!newEdgeDict.ContainsKey(bopp)) newEdgeDict[b] = e2;
        // if (!newEdgeDict.ContainsKey(copp)) newEdgeDict[c] = e3;
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
            if (e.next != null && e.next.next != null && e.next.next.next == e) {
                AddNewTriangle(e);
            }
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
        newEdgeDict.Clear();
    }

    public List<int> GetTriangles() {
        return triangles;
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
}
