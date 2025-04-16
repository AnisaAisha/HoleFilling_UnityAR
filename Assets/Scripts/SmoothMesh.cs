using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmoothMesh : MonoBehaviour
{
    float lambda = 0.1f;
    HalfedgeMesh halfedgeMesh;
    public List<Vector3> vertices = new List<Vector3>();
    public List<Edge> hole_edges = new List<Edge>();
    public HashSet<Vertex> boundary_vertices = new HashSet<Vertex>();
    
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
        int safetyCounter = 0;
        do {
            neighbors.Add(e.vertex);
            e = e.next.opposite;

            safetyCounter++;
            if (safetyCounter > 100) {
                Debug.Log("GetNeighboringVertices: Infinite loop detected!");
                break;
            }
        } while (e.vertex != edge.next.opposite.vertex);
        return neighbors;
    }

    // Main Smoothing function
    public void LaplacianSmoothing() {
        for (int iter = 0; iter < 10; iter++) { // Perform 10 iterations
            Dictionary<int, Vector3> smooth_vertex_positions = new Dictionary<int, Vector3>();
            Debug.Log("Iteration " + (iter + 1) + " - smoothing edges count: " + hole_edges.Count);

            foreach (var edge in hole_edges) {
                Vertex v = edge.vertex;
                if (boundary_vertices.Contains(v)) continue;

                if (smooth_vertex_positions.ContainsKey(v.index)) continue; // Avoid duplicate smoothing

                List<Vertex> neighbor_vertices = GetNeighboringVertices(edge);
                Debug.Log("neighbor counts: " + neighbor_vertices.Count);
                if (neighbor_vertices.Count == 0) continue;

                Vector3 vc = Vector3.zero;
                foreach (var neighbor_v in neighbor_vertices) {
                    vc += neighbor_v.position;
                }
                vc /= neighbor_vertices.Count;

                Vector3 dv = lambda * (vc - v.position);
                smooth_vertex_positions[v.index] = v.position + dv;
            }

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
}
