using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class NewVertexSplit : MonoBehaviour
{
    public List<Vector3> vertices;
    public HalfedgeMesh halfedgeMesh;
    public List<int> triangles;
    public List<int> new_triangles = new List<int>();
    public List<Edge> new_edges = new List<Edge>();
    public List<int> subMeshTriangles = new List<int>();
    public Dictionary<Tuple<int, int>, Edge> newEdgeDict;
    public List<Edge> new_edges_created = new List<Edge>();
    int maxIter = 2;


    Vector3 FindMidpoint(Vertex a, Vertex b) {
        return (a.position + b.position) / 2;
    }

    Vertex AddNewVertex(Edge e) {
        Vector3 midpoint = FindMidpoint(e.vertex, e.next.vertex);
        Vertex newVertex = new Vertex(midpoint, vertices.Count);
        vertices.Add(midpoint);
        return newVertex;
    }

    Tuple<Edge, float> FindLongestEdge() {
        float maxLength = float.MinValue;
        Edge longestEdge = null;

        foreach(var e in new_edges) {
            float edgeLength = Vector3.Distance(e.vertex.position, e.next.vertex.position);
            if (edgeLength > maxLength) {
                maxLength = edgeLength;
                longestEdge = e;
            }
        }
        Debug.Log("edgeLength: " + maxLength);
        // return (longestEdge, maxLength);
        return Tuple.Create(longestEdge, maxLength);
    }

    Tuple<Edge, float> FindLongestValidEdge() {
        float maxLength = float.MinValue;
        Edge longestValidEdge = null;

        foreach (var e in new_edges) {
        // foreach (var entry in newEdgeDict) {  // Iterate over the dictionary directly
            // Edge e = entry.Value; 
            float edgeLength = Vector3.Distance(e.vertex.position, e.next.vertex.position);
            var edgeKey = Tuple.Create(e.opposite.vertex.index, e.opposite.next.vertex.index);

            Debug.Log("checking edge lengths for each edge ...." + edgeLength + " " + maxLength);

            if (newEdgeDict.ContainsKey(edgeKey) && edgeLength > maxLength) {
            // if (edgeLength > maxLength) {
                maxLength = edgeLength;
                longestValidEdge = e;
            }
        }

        Debug.Log("Valid longest edge length: " + maxLength);
        return Tuple.Create(longestValidEdge, maxLength);
    }

    int counter = 0;
    public void EdgeSplit() {
        // Check for longest edge, then split
        var edgeData = FindLongestValidEdge();
        Edge edgeToSplit = edgeData.Item1;

        if (edgeToSplit == null) {
            Debug.Log("No valid edge found in newEdgeDict. Stopping edge split.");
            return;
        }

        Debug.Log("Edge and longest length: " + edgeToSplit + " " + edgeData.Item2);
        EdgeSplitWithNewVertex(edgeToSplit);
    }

    public void EdgeSplitWithNewVertex(Edge edge) {
        Edge opposite = edge.opposite;        

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
               
        // split edge and create two new edges from original edge
        Edge e1 = new Edge(edge.vertex); // From start vertex to midpoint
        Edge e2 = new Edge(newVertex);   // From midpoint to end vertex

        Edge prev = FindPreviousInternalEdge(edge);
        Edge oppPrev = FindPreviousInternalEdge(opposite);

        // edge splitting first triangle with its opposite
        Edge e3 = new Edge(newVertex);
        e3.next = prev; // previous edge
        Edge e3opp = new Edge(e3.next.vertex); //previous edge
                  
        e1.next = e3;
        e2.next = edge.next;
        e3opp.next = e2; 

        // edge splitting second triangle with its opposite
        // first set opposites of newly created small edges  
        // original edge functions as e2opp      
        Edge e1opp = new Edge(e1.next.vertex);
        Edge e4 = new Edge(newVertex);
        e4.next = oppPrev; // previous edge
        Edge e4opp = new Edge(e4.next.vertex);   
        
        e1opp.next = opposite.next;
        edge.next = e4; // this is e2opp;
        e4opp.next = e1opp;  

        // set all edge opposites of new edges
        e1.opposite = e1opp;
        e1opp.opposite = e1;
        e2.opposite = edge; //e2opp;
        edge.opposite = e2;
        e3.opposite = e3opp;
        e3opp.opposite = e3;
        e4.opposite = e4opp;
        e4opp.opposite = e4;

        // Create new triangles
        AddNewTriangle(e1opp);
        AddNewTriangle(e2);
        AddNewTriangle(e3);
        AddNewTriangle(e4);

        // Add triangles that were not effected by the split
        AddUnaffectedTriangles(edge, opposite);
    }

    private void AddNewTriangle(Edge edge) {
        new_triangles.Add(edge.vertex.index);
        new_triangles.Add(edge.next.vertex.index);
        new_triangles.Add(edge.next.next.vertex.index);

        new_edges_created.Add(edge);
        
        var b = Tuple.Create(edge.vertex.index, edge.next.vertex.index);
        newEdgeDict[b] = edge;
    }

    private void AddUnaffectedTriangles(Edge edge, Edge opposite) {
        HashSet<Edge> affectedEdges = new HashSet<Edge> {
            edge, edge.next, edge.next.next,
            opposite, opposite.next, opposite.next.next
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
        // new_triangles.Clear();
        // new_edges.Clear();

        // new_edges.Clear();
        new_edges.AddRange(new_edges_created);
        new_edges_created.Clear();
    }

    public List<int> GetTriangles() {
        return triangles;
    }
}
