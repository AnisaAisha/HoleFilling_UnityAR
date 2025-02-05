using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmoothMesh : MonoBehaviour
{
    float lambda = 0.1f;
    HalfedgeMesh halfedgeMesh;
    // List<Vertex> smooth_vertices = new List<Vertex>();
    public List<Vector3> vertices = new List<Vector3>();
    public List<Edge> hole_edges = new List<Edge>();
    
    public SmoothMesh(float _lambda) {
        lambda = _lambda;
    }

    public void SetHoleEdges(List<Edge> edges) {
        hole_edges = edges;
    }

    public void SetHalfEdge(HalfedgeMesh _halfedgeMesh) {
        halfedgeMesh = _halfedgeMesh;
    }

    // Edge -> Vertex traversal. Neighboring vertices (of edges) from a start edge
    List<Vertex> GetNeighboringVertices(Edge edge) {
        List <Vertex> neighbors = new List<Vertex>();
        Edge e = edge.opposite;
        do {
            neighbors.Add(e.vertex);
            e = e.next.opposite;
        } while (e != edge.opposite);
        return neighbors;
    }

    public void LaplacianSmoothing() {
        // List to store new positions of vertices
        // Dictionary<Edge, Vector3> smooth_vertex_positions = new Dictionary<Edge, Vector3>();

        // // Laplacian smoothing by averaging vertex positions of neighboring vertices
        // foreach (var edge in hole_edges) {
        //     // var tup = Tuple.Create(edge.vertex.index, edge.next.vertex.index);
        //     // Debug.Log("smoothing check...." + tup);
        //     // Edge realEdge = halfedgeMesh.edgesDict[tup];
            
        //     List<Vertex> neighbor_vertices = GetNeighboringVertices(edge); //directed_edge.vertex_to_vertex_traversal(v);
        //     Vector3 vc = Vector3.zero;

        //     foreach (var neighbor_v in neighbor_vertices) {
        //         vc += neighbor_v.position;
        //         // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //         // sphere.transform.position = neighbor_v.position;
        //         // sphere.transform.localScale = Vector3.one * 0.001f;
        //         // sphere.GetComponent<Renderer>().material.color = Color.yellow;
        //     }
        //     vc = vc/neighbor_vertices.Count;
        //     Vector3 dv  = lambda * (vc - edge.vertex.position);

        //     Vector3 new_vertex_pos = edge.vertex.position + dv;
        //     smooth_vertex_positions.Add(edge, new_vertex_pos);
        // }

        // foreach (var edge in hole_edges) {
        //     edge.vertex.position = smooth_vertex_positions[edge];
        //     // var tup = Tuple.Create(edge.vertex.index, edge.next.vertex.index);
        //     // Edge realEdge = halfedgeMesh.edgesDict[tup];
        // }

        // for (int i = 0; i < vertices.Count; i++) {
        //     vertices[i] = hole_edges[i].vertex.position;
        // }

        Dictionary<int, Vector3> smooth_vertex_positions = new Dictionary<int, Vector3>();

        foreach (var edge in hole_edges) {
            Vertex v = edge.vertex;
            if (smooth_vertex_positions.ContainsKey(v.index)) continue; // Avoid duplicate smoothing

            List<Vertex> neighbor_vertices = GetNeighboringVertices(edge);
            if (neighbor_vertices.Count == 0) continue;

            Vector3 vc = Vector3.zero;
            foreach (var neighbor_v in neighbor_vertices) {
                vc += neighbor_v.position;
            }
            vc /= neighbor_vertices.Count;

            Vector3 dv = lambda * (vc - v.position);
            smooth_vertex_positions[v.index] = v.position + dv;
        }

        // Apply the smoothed positions to the Half-Edge structure
        // foreach (var kvp in smooth_vertex_positions) {
        //     halfedgeMesh.vertices[kvp.Key].position = kvp.Value; // Assuming `halfedgeMesh.vertices` exists
        // }

        foreach (var edge in hole_edges) {
            if (smooth_vertex_positions.ContainsKey(edge.vertex.index)) {
                edge.vertex.position = smooth_vertex_positions[edge.vertex.index];
            }
        }

        // **Update the `vertices` list using vertex indices**
        for (int i = 0; i < vertices.Count; i++) {
            if (smooth_vertex_positions.ContainsKey(i)) {
                vertices[i] = smooth_vertex_positions[i];
            }
        }
    }
}
