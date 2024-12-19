using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HalfedgeMesh //: MonoBehaviour
{
    public List<Edge> halfEdges;
    // public List<Vertex> vertices;
    public Vertex[] vertices;
    public List<Face> faces;
    public Dictionary<Tuple<int, int>, Edge> edgesDict = new Dictionary<Tuple<int, int>, Edge>();

    // HalfedgeMesh(Edge[] edges, Vertex[] vertices, Face[] faces) {
    //     this.halfEdges = edges;
    //     this.vertices = vertices;
    //     this.faces = faces;
    // }

   public void BuildHalfEdgeMesh(Vertex[] vertices_list, int[] meshTriangles)
    {
        // vertices = new List<Vertex>();
        // vertices = new Vertex[vertices_list.Length];
        this.vertices = vertices_list;
        halfEdges = new List<Edge>();
        faces = new List<Face>();

        Debug.Log(meshTriangles.Length + " " + vertices_list.Length);

        // Create faces and half-edges from triangles
        for (int i = 0; i < meshTriangles.Length; i += 3)
        {
            int i0 = meshTriangles[i];
            int i1 = meshTriangles[i + 1];
            int i2 = meshTriangles[i + 2];

            // Create half-edges
            Edge he1 = new Edge(vertices[i0]);
            Edge he2 = new Edge(vertices[i1]);
            Edge he3 = new Edge(vertices[i2]);

            // Link half-edges
            he1.next = he2;
            he2.next = he3;
            he3.next = he1;

            // Create face
            Face f = new Face(he1); // new Face(he1, he2, he3, i)
            faces.Add(f);

            // Link half-edges to the face
            he1.face = f;
            he2.face = f;
            he3.face = f;

            // Set vertices to reference an outgoing half-edge
            vertices[i0].edge = he1;
            vertices[i1].edge = he2;
            vertices[i2].edge = he3;

            // Add half-edges to the list
            halfEdges.Add(he1);
            halfEdges.Add(he2);
            halfEdges.Add(he3);

            
            AddEdgeAndCheckOpposite(i0, i1, he1);
            AddEdgeAndCheckOpposite(i1, i2, he2);
            AddEdgeAndCheckOpposite(i2, i0, he3);
            
            // if (!edgesDict.ContainsKey(Tuple.Create(i0, i1))) edgesDict.Add(Tuple.Create(i0, i1), he1);
            // if (!edgesDict.ContainsKey(Tuple.Create(i1, i0))) edgesDict.Add(Tuple.Create(i1, i0), he1);

            // if (!edgesDict.ContainsKey(Tuple.Create(i1, i2))) edgesDict.Add(Tuple.Create(i1, i2), he2);
            // if (!edgesDict.ContainsKey(Tuple.Create(i2, i1))) edgesDict.Add(Tuple.Create(i2, i1), he2);

            // if (!edgesDict.ContainsKey(Tuple.Create(i2, i0))) edgesDict.Add(Tuple.Create(i2, i0), he3);
            // if (!edgesDict.ContainsKey(Tuple.Create(i0, i2))) edgesDict.Add(Tuple.Create(i0, i2), he3);

        }
        Debug.Log("counts: " + vertices.Length + " " + halfEdges.Count + " " + edgesDict.Count + " " + faces.Count);
    }

    public Edge AddEdgeAndCheckOpposite(int i0, int i1, Edge he)
    {
        var edgeKey = Tuple.Create(i0, i1);
        var oppositeKey = Tuple.Create(i1, i0);

        if (edgesDict.TryGetValue(oppositeKey, out Edge oppositeEdge))
        {
            he.opposite = oppositeEdge;
            oppositeEdge.opposite = he;
        }
        else
        {
            edgesDict[edgeKey] = he;
        }
        return oppositeEdge;
    }

    public void AddEdgeAndOpposite(int i0, int i1, Edge e, Edge opp, bool isOppSet) {
        var edgeKey = Tuple.Create(i0, i1);
        var oppKey = Tuple.Create(i1, i0);

        if (!edgesDict.ContainsKey(edgeKey)) {
            edgesDict[edgeKey] = e;
        }
        if (edgesDict.ContainsKey(oppKey)) {
            edgesDict[edgeKey].opposite = edgesDict[oppKey];
            if (isOppSet) edgesDict[oppKey].opposite = edgesDict[edgeKey];
        }
        // if (edgesDict.TryGetValue(oppKey, out Edge oppositeEdge))
        // {
        //     e.opposite = oppositeEdge;
        //     oppositeEdge.opposite = e;
        // }
    }


    public Edge FindPreviousEdge(Edge targetEdge)
    {
        foreach (Edge edge in halfEdges)
        {
            if (edge.next == targetEdge && edge.opposite == null)
            {
                return edge;
            }
        }
        return null; // Return null if no previous edge is found
    }

    public Edge FindOppFace(Edge edge) {
        Vertex v = edge.vertex;
        Edge current_edge = edge;

        while(current_edge.next.vertex != v) {
            current_edge = current_edge.next;
        }
        return current_edge.opposite;
    }

    public Edge RemoveBoundaryEdge(Edge edgeToRemove, Edge prevEdge, Edge e1, Edge e2)
    {
        var removeKey = new Tuple<int, int>(edgeToRemove.vertex.index, edgeToRemove.next.vertex.index);
        var prevKey = new Tuple<int, int>(prevEdge.vertex.index, prevEdge.next.vertex.index);
        var e1Key = new Tuple<int, int>(e1.vertex.index, e1.next.vertex.index);
        var e2Key = new Tuple<int, int>(e2.vertex.index, e2.next.vertex.index);
        var e1OppKey = new Tuple<int, int>(e1.opposite.vertex.index, e1.opposite.next.vertex.index);
        var e2OppKey = new Tuple<int, int>(e2.opposite.vertex.index, e2.opposite.next.vertex.index);

        if (edgesDict.ContainsKey(prevKey) && edgesDict.ContainsKey(e1Key) && edgesDict.ContainsKey(e2Key)) {
            edgesDict[prevKey].next = edgesDict[e1Key];
            edgesDict[e1Key].next = edgesDict[e2Key];
            if (edgesDict.ContainsKey(e1OppKey)) edgesDict.Remove(e1OppKey);
            if (edgesDict.ContainsKey(e2OppKey)) edgesDict.Remove(e2OppKey);
            edgesDict[e1Key].opposite = null;

            // Debug.Log("e2 opp exist? " + " " + edgesDict[e2Key].opposite);
            edgesDict[e2Key].opposite = null;
            // Debug.Log("e2 opp exist after null? " + " " + edgesDict[e2Key].opposite);
        }
        
        edgesDict.Remove(removeKey);
        return edgesDict[e2Key];
    }

    public Edge RemoveBoundaryEdgeAnother(Edge edgeToRemove, Edge prevEdge, Edge e1, Edge e2, Edge nextToRemove)
    {
        var removeKey = new Tuple<int, int>(edgeToRemove.vertex.index, edgeToRemove.next.vertex.index);
        var nextRemoveKey = new Tuple<int, int>(nextToRemove.vertex.index, nextToRemove.next.vertex.index);
        var prevKey = new Tuple<int, int>(prevEdge.vertex.index, prevEdge.next.vertex.index);
        var e1Key = new Tuple<int, int>(e1.vertex.index, e1.next.vertex.index);
        var e2Key = new Tuple<int, int>(e2.vertex.index, e2.next.vertex.index);
        var e1OppKey = new Tuple<int, int>(e1.opposite.vertex.index, e1.opposite.next.vertex.index);

        if (e2.opposite != null) {
            var e2OppKey = new Tuple<int, int>(e2.opposite.vertex.index, e2.opposite.next.vertex.index);
            if (edgesDict.ContainsKey(e2OppKey)) edgesDict.Remove(e2OppKey);
        }

        if (!edgesDict.ContainsKey(e1Key)) {
            edgesDict[e1Key] = e1;
        }

        if (edgesDict.ContainsKey(prevKey) && edgesDict.ContainsKey(e1Key) && edgesDict.ContainsKey(e2Key)) {
            edgesDict[prevKey].next = edgesDict[e1Key];
            edgesDict[e1Key].next = edgesDict[e2Key];
            if (edgesDict.ContainsKey(e1OppKey)) edgesDict.Remove(e1OppKey);
            edgesDict[e1Key].opposite = null;
        }
        
        edgesDict.Remove(removeKey);
        edgesDict.Remove(nextRemoveKey);
        return edgesDict[e1Key];
    }

}
