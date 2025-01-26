using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HalfedgeMesh //: MonoBehaviour
{
    public List<Tuple<int, int>> edgesToRemove = new List<Tuple<int, int>>();    
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

        Debug.Log("Triangles, vertices: " + meshTriangles.Length + " " + vertices_list.Length);

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
        }
        Debug.Log("counts: " + vertices.Length + " " + halfEdges.Count + " " + edgesDict.Count + " " + faces.Count);

        foreach (var edgekey in edgesDict.Keys) {
            var oppositeKey = Tuple.Create(edgekey.Item2, edgekey.Item1);

            if (edgesDict.ContainsKey(oppositeKey)) {
                edgesDict[edgekey].opposite = edgesDict[oppositeKey];
                edgesDict[oppositeKey].opposite = edgesDict[edgekey];
            }
        }
    }

    public void AddEdgeAndCheckOpposite(int i0, int i1, Edge he)
    {
        var edgeKey = Tuple.Create(i0, i1);
        var oppositeKey = Tuple.Create(i1, i0);

        // // Add the current edge to the dictionary
        if (!edgesDict.ContainsKey(edgeKey))
        {
            edgesDict[edgeKey] = he;
        }

        // Check for the opposite edge
        // if (!edgesDict.ContainsKey(oppositeKey))
        // {
        //     // Create the opposite edge if it doesn't exist
        //     Edge opp = new Edge(vertices[i1]);
        //     opp.next = null; // The opposite edge's 'next' pointer will be set later
        //     opp.opposite = he;
        //     he.opposite = opp;
        //     edgesDict[oppositeKey] = opp;
        // }
        // else
        // {
        //     // Link the current edge to its existing opposite
        //     he.opposite = edgesDict[oppositeKey];
        //     edgesDict[oppositeKey].opposite = he;
        // }

        // if (edgesDict.TryGetValue(oppositeKey, out Edge oppositeEdge))
        // {
        //     he.opposite = oppositeEdge;
        //     oppositeEdge.opposite = he;
        // }
        // else
        // {
        //     edgesDict[edgeKey] = he;
        // }
    }

    Edge FindPreviousEdgeNew(Edge startEdge) {
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

    public void RemoveTriangle(int v1, int v2, int v3, int counter) {
        var v12 = Tuple.Create(v1, v2);
        var v23 = Tuple.Create(v2, v3);
        var v31 = Tuple.Create(v3, v1);

        var v21 = Tuple.Create(v2, v1);
        var v32 = Tuple.Create(v3, v2);
        var v13 = Tuple.Create(v1, v3);

        // Debug.Log(v12 + " " + v23 + " " + v31);
        // Debug.Log("checking opposites..." + edgesDict[v12].opposite + " " + edgesDict[v23].opposite + " " + edgesDict[v31]);
        // Debug.Log("counter...." + counter);
        if (!edgesDict.ContainsKey(v21) || edgesDict[v12].opposite == null) {
            Debug.Log(counter + " did not find 1");
            var eremove = edgesToRemove[edgesToRemove.Count - 2];
            edgesDict[v31].next = edgesDict[v23];
            edgesDict[eremove].next = edgesDict[v31]; 

        }

        bool edge21Found = edgesDict.ContainsKey(v21);
        bool edge32Found = edgesDict.ContainsKey(v32);
        bool edge13Found = edgesDict.ContainsKey(v13);

        Edge e1 = edgesDict[v12];
        Edge e2 = edgesDict[v23];
        Edge e3 = edgesDict[v31]; 

        if (edgesDict.ContainsKey(v21)) edgesDict[v21].opposite = null;
        if (edgesDict.ContainsKey(v32)) edgesDict[v32].opposite = null;
        if (edgesDict.ContainsKey(v13)) edgesDict[v13].opposite = null;

        edgesToRemove.Add(v12);
        edgesToRemove.Add(v23);
        edgesToRemove.Add(v31);
    }

    public void RemoveAllEdges() {
        foreach (var e in edgesToRemove) {
            edgesDict.Remove(e);
        }
    }

    public void AddTriangle(Edge e1, Edge e2, Edge e3, Edge new_e) {
        var v12 = Tuple.Create(e1.vertex.index, e2.vertex.index);
        var v23 = Tuple.Create(e2.vertex.index, e3.vertex.index);
        var v31 = Tuple.Create(e3.vertex.index, e1.vertex.index);

        var v21 = Tuple.Create(e2.vertex.index, e1.vertex.index);
        var v32 = Tuple.Create(e3.vertex.index, e2.vertex.index);
        var v13 = Tuple.Create(e1.vertex.index, e3.vertex.index);

        var newt = Tuple.Create(new_e.vertex.index, new_e.next.vertex.index);

        Debug.Log("comparing..." + v12 + " " + v23 + " " + v31 + " " + newt);

        bool isEdgeMissing = false;
        if (edgesDict.ContainsKey(v12)) {
            Debug.Log("found first edge");
            Edge v12opp = new Edge(e2.vertex);
            edgesDict[v21] = v12opp;
            edgesDict[v21].opposite = edgesDict[v12];
            // v12opp.next = e.next;
            // var newEdgeKey = Tuple.Create(new_edge.vertex.index, new_edge.next.vertex.index);
            // edgesDict[newEdgeKey] = new_edge;
        } else{
            Debug.Log("did not find 1");
            // isEdgeMissing = true;
        }
        if (edgesDict.ContainsKey(v23)) {
            Debug.Log("found second edge");
            Edge v23opp = new Edge(e3.vertex);
            edgesDict[v32] = v23opp;
            edgesDict[v32].opposite = edgesDict[v23];
        }else{
            Debug.Log("did not find 2");
        }
        if (edgesDict.ContainsKey(v31)) {
            Debug.Log("found third edge");
            Edge v31opp = new Edge(e1.vertex);
            edgesDict[v13] = v31opp;
            edgesDict[v31].opposite = edgesDict[v13];
        }else{
            Debug.Log("did not find 3");
            isEdgeMissing = true;
            
            edgesDict[newt] = new_e;
            edgesDict[newt].opposite = null;
        }        

        if (isEdgeMissing) {
            edgesDict[v21].next = edgesDict[newt];
            edgesDict[newt].next = edgesDict[v32];
            edgesDict[v32].next = edgesDict[v21];

            edgesDict[v12].opposite = edgesDict[v21];
            edgesDict[v23].opposite = edgesDict[v32];
        }

        // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere.transform.position = edgesDict[v12].vertex.position;
        // sphere.transform.localScale = Vector3.one * 0.001f;
        // sphere.GetComponent<Renderer>().material.color = Color.red;
        // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere2.transform.position = edgesDict[v23].vertex.position;
        // sphere2.transform.localScale = Vector3.one * 0.001f;
        // sphere2.GetComponent<Renderer>().material.color = Color.blue;
        // GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere3.transform.position = edgesDict[v31].vertex.position;
        // sphere3.transform.localScale = Vector3.one * 0.001f;
        // sphere3.GetComponent<Renderer>().material.color = Color.green;
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

    void AddOpposite(int i0, int i1) {
        var edgeKey = Tuple.Create(i0, i1);
        var oppKey = Tuple.Create(i1, i0);

        // if (!edgesDict.ContainsKey(edgeKey)) {
        //     edgesDict[edgeKey] = e;
        // }
        if (edgesDict.ContainsKey(oppKey)) {
            edgesDict[edgeKey].opposite = edgesDict[oppKey];
            edgesDict[oppKey].opposite = edgesDict[edgeKey];
        }
    }

    public void AddNewEdge(Vertex new_v, List<Edge> hole_edges) {
        Edge temp = null;
        List<Edge> patched_edges = new List<Edge>();

        foreach (var e in hole_edges){

            // Find e in half edge data structure and update all relations there
            var edgeKey = Tuple.Create(e.vertex.index, e.next.vertex.index);
            if (edgesDict.ContainsKey(edgeKey)) {
                
                // new edge -> from centroid to origin of e, next should point to e.next
                Edge new_edge = new Edge(new_v);
                new_edge.next = e.next;
                var newEdgeKey = Tuple.Create(new_edge.vertex.index, new_edge.next.vertex.index);
                edgesDict[newEdgeKey] = new_edge;

                // opposite to original edge e, next should be e itself
                Edge e_opp = new Edge(e.next.vertex);
                e_opp.next = e;
                var eOppKey = Tuple.Create(e_opp.vertex.index, e_opp.next.vertex.index);
                edgesDict[eOppKey] = e_opp;

                // new edge -> from origin vertex of e to new vertex (centroid)
                Edge e_to_new = new Edge(e.vertex);
                e_to_new.next = new_edge;
                var eToNewKey = Tuple.Create(e_to_new.vertex.index, e_to_new.next.vertex.index);
                edgesDict[eToNewKey] = e_to_new;

                // Debug.Log("edge pairs added : " + newEdgeKey + " " + eOppKey + " " + eToNewKey);

                patched_edges.Add(new_edge);
                patched_edges.Add(e_opp);
                patched_edges.Add(e_to_new);
            }
        }

        foreach (var e in patched_edges){ 
            // Debug.Log("checking edge pairs : " + e.vertex.index + " " + e.next.vertex.index);
            AddOpposite(e.vertex.index, e.next.vertex.index);
        }
    }

}

// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
// sphere.transform.position = new_edge.vertex.position;
// sphere.transform.localScale = Vector3.one * 0.001f;
// sphere.GetComponent<Renderer>().material.color = Color.red;
// GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
// sphere2.transform.position = e_opp.vertex.position;
// sphere2.transform.localScale = Vector3.one * 0.001f;
// sphere2.GetComponent<Renderer>().material.color = Color.blue;
// GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
// sphere3.transform.position = e_to_new.vertex.position;
// sphere3.transform.localScale = Vector3.one * 0.001f;
// sphere3.GetComponent<Renderer>().material.color = Color.green;

// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
// sphere.transform.position = e.opposite.vertex.position;
// sphere.transform.localScale = Vector3.one * 0.001f;
// sphere.GetComponent<Renderer>().material.color = Color.red;
// GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
// sphere2.transform.position = e.opposite.next.vertex.position;
// sphere2.transform.localScale = Vector3.one * 0.001f;
// sphere2.GetComponent<Renderer>().material.color = Color.blue;
// GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
// sphere3.transform.position = e.opposite.next.next.vertex.position;
// sphere3.transform.localScale = Vector3.one * 0.001f;
// sphere3.GetComponent<Renderer>().material.color = Color.green;