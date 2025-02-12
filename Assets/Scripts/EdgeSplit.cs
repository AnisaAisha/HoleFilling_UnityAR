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

    Tuple<Edge, float> FindLongestValidEdge() {
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
        return Tuple.Create(longestValidEdge, maxLength);
    }

    // Find which edges need to be split beforehand if they are greater than certain threshold
    List<Edge> MarkLongestValidEdges() {
        float maxLength = float.MinValue;
        List<Edge> edgesToSplit = new List<Edge>();
        HashSet<Edge> processedEdges = new HashSet<Edge>(); // Track processed edges

        // First loop: Find the maximum edge length
        foreach (var e in new_edges) {
            float edgeLength = Vector3.Distance(e.vertex.position, e.next.vertex.position);
            var edgeKey = Tuple.Create(e.opposite.vertex.index, e.opposite.next.vertex.index);

            if (newEdgeDict.ContainsKey(edgeKey) && edgeLength > maxLength) {
                maxLength = edgeLength;
            }
        }

        float lengthThreshold = maxLength * scale_factor; // for two edges * 0.6f;, for three edges 0.4f
        int temp = 0;

        // Second loop: Add edges to the split list while ensuring opposites are not added
        foreach (var e in new_edges) {
            float edgeLength = Vector3.Distance(e.vertex.position, e.next.vertex.position);
            var edgeKey = Tuple.Create(e.opposite.vertex.index, e.opposite.next.vertex.index);

            // Ensure opposite edge is not added
            // if (edgeLength >= lengthThreshold && !processedEdges.Contains(e.opposite) && newEdgeDict.ContainsKey(edgeKey)) {
            if (edgeLength >= lengthThreshold && newEdgeDict.ContainsKey(edgeKey)) {
                // Debug.Log("Edge " + temp + " found!");
                edgesToSplit.Add(e);
                processedEdges.Add(e); // Mark this edge as processed
                temp++;
            }
        }

        return edgesToSplit;
    }

    
    public void CreateEdgeSplit() {
        // CASE 1: EDGE SPLIT ONLY ONE EDGE
        // Check for longest edge, then split
        // var edgeData = FindLongestValidEdge();
        // Edge edgeToSplit = edgeData.Item1;

        // if (edgeToSplit == null) {
        //     Debug.Log("No valid edge found in newEdgeDict. Stopping edge split.");
        //     return;
        // }

        // Debug.Log("Edge and longest length: " + edgeToSplit + " " + edgeData.Item2);
        // EdgeSplitWithNewVertex(edgeToSplit);

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

        // // Debug Visualization
        // foreach (var edge in finalEdgesToSplit) {
        //     GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //     sphere.transform.position = edge.vertex.position;
        //     sphere.transform.localScale = Vector3.one * 0.001f;
        //     sphere.GetComponent<Renderer>().material.color = Color.red;
        //     GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //     sphere2.transform.position = edge.next.vertex.position;
        //     sphere2.transform.localScale = Vector3.one * 0.001f;
        //     sphere2.GetComponent<Renderer>().material.color = Color.red;
        // }

        // if (finalEdgesToSplit.Count == 2) {
        //     // Case 2
        //     Debug.Log("Edge Split Case 2!!");
        //     EdgeSplitWithTwoEdges(finalEdgesToSplit.ToList());
        // } else if (finalEdgesToSplit.Count == 3) {
        //     // Case 3
        //     Debug.Log("Edge Split Case 3!!");
        //     EdgeSplitWithThreeEdges(finalEdgesToSplit.ToList());
        // }

        // // Add edges that are not affected by splits
        // foreach (var k in edgesToSplit) {
        //     if (!finalEdgesToSplit.Contains(k)) {
        //         AddUnaffectedTriangles(k, k.opposite);
        //     }
        // }

        List<List<Edge>> triangleEdges = new List<List<Edge>>();
        HashSet<Edge> edgesToSplit = new HashSet<Edge>(MarkLongestValidEdges());
        Debug.Log("Marked " + edgesToSplit.Count + " edges!");

        HashSet<Edge> processedEdges = new HashSet<Edge>();

        foreach (var e in edgesToSplit) {
            if (processedEdges.Contains(e)) continue; // Skip already grouped edges

            List<Edge> group = new List<Edge> { e };
            Edge prev = FindPreviousInternalEdge(e);
            Edge next = e.next;

            // Check if this edge forms a triangle with other marked edges
            if (edgesToSplit.Contains(prev) && !processedEdges.Contains(prev)) {
                group.Add(prev);
            }
            if (edgesToSplit.Contains(next) && !processedEdges.Contains(next)) {
                group.Add(next);
            }

            // Store this group and mark edges as processed
            triangleEdges.Add(group);
            processedEdges.UnionWith(group);
        }

        bool allSingleEdgeGroups = triangleEdges.All(group => group.Count == 1);

        List<List<Edge>> filteredTriangleEdges = new List<List<Edge>>();
        HashSet<Edge> keptEdges = new HashSet<Edge>(); // To track kept single-edge groups

        foreach (var group in triangleEdges) {
            if (group.Count == 1) {
                Edge edge = group[0];

                if (allSingleEdgeGroups) {
                    // **Step 2: If all are single-edge groups, keep only the first and remove its opposite**
                    if (!keptEdges.Contains(edge.opposite)) {
                        filteredTriangleEdges.Add(group);
                        keptEdges.Add(edge);
                    }
                } else {
                    // **Step 3: If mixed groups exist, apply the original logic**
                    bool shouldRemove = false;
                    foreach (var otherGroup in triangleEdges) {
                        if (otherGroup != group && otherGroup.Contains(edge.opposite)) {
                            shouldRemove = true;
                            break;
                        }
                    }
                    if (!shouldRemove) {
                        filteredTriangleEdges.Add(group);
                    }
                }
            } else {
                // **Step 4: Keep multi-edge groups as they are**
                filteredTriangleEdges.Add(group);
            }
        }

        // **Replace the original list with the filtered one**
        triangleEdges = filteredTriangleEdges;

        // Call appropriate case functions
        foreach (var group in triangleEdges) {

            // foreach (var edge in group) {
            //     GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            //     sphere.transform.position = edge.vertex.position;
            //     sphere.transform.localScale = Vector3.one * 0.001f;
            //     sphere.GetComponent<Renderer>().material.color = Color.red;
            //     GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            //     sphere2.transform.position = edge.next.vertex.position;
            //     sphere2.transform.localScale = Vector3.one * 0.001f;
            //     sphere2.GetComponent<Renderer>().material.color = Color.red;
            // }
            Debug.Log("checking group counts..." + group.Count);
            if (group.Count == 1) {
                Debug.Log("Edge Split Case 1!!");
                EdgeSplitWithNewVertex(group[0]);
            } else if (group.Count == 2) {
                Debug.Log("Edge Split Case 2!!");
                EdgeSplitWithTwoEdges(group);
            } else if (group.Count == 3) {
                Debug.Log("Edge Split Case 3!!");
                EdgeSplitWithThreeEdges(group);
            }
        }

        HashSet<Edge> allGroupedEdges = new HashSet<Edge>();
        foreach (var group in triangleEdges) {
            allGroupedEdges.UnionWith(group);
        }

        foreach (var k in edgesToSplit) {
            if (!allGroupedEdges.Contains(k) && !allGroupedEdges.Contains(k.opposite)) {
                AddUnaffectedTriangles(k, k.opposite);
            }
        }

    }
    
    void EdgeSplitWithTwoEdges(List<Edge> edgesToSplit) {
        // Swap the first two edges to ensure the first edge's next is the second entry
        if (edgesToSplit[0].next != edgesToSplit[1]) {
            edgesToSplit.Reverse();
        }

        Edge edge1 = edgesToSplit[0];
        Edge edge2 = edgesToSplit[1];

        Edge opp1 = edge1.opposite;
        Edge opp2 = edge2.opposite;

        foreach (var edge in edgesToSplit) {
            var oppositeEdge = edge.opposite;
            new_edges.Remove(edge);
            new_edges.Remove(oppositeEdge);
            newEdgeDict.Remove(Tuple.Create(edge.vertex.index, edge.next.vertex.index));
            newEdgeDict.Remove(Tuple.Create(oppositeEdge.vertex.index, oppositeEdge.next.vertex.index));  
        }
          
        Vertex mid1 = AddNewVertex(edge1);
        Vertex mid2 = AddNewVertex(edge2);

        Edge e1 = new Edge(mid1); // From start vertex to mid1
        Edge e2 = new Edge(mid2);   // From mid1 to end of edge1

        Edge e3 = new Edge(mid1); // From start vertex to mid1
        Edge e4 = new Edge(edge2.next.vertex);

        // Add edges and update connections for newly added vertices
        e3.next = e2;
        e2.next = e4;
        e4.next = e3;

        Edge e3opp = new Edge(e3.next.vertex);
        Edge e4opp = new Edge(e4.next.vertex);
        
        edge1.next = e4opp;
        e4opp.next = edge2.next;
        edge2.next.next = edge1;

        e1.next = edge2;
        edge2.next = e3opp;
        e3opp.next = e1;

        // Handle outgoing edges for new vertices for consistency in mesh
        Edge e5 = new Edge(mid1); 
        Edge e6 = new Edge(mid2); 
        Edge opp1Prev = FindPreviousInternalEdge(opp1);
        Edge opp2Prev = FindPreviousInternalEdge(opp2);

        e5.next = opp1Prev;
        e6.next = opp2Prev;

        Edge og_opp1 = new Edge(mid1); 
        Edge og_opp2 = new Edge(mid2); 

        Edge e5opp = new Edge(e5.next.vertex); 
        Edge e6opp = new Edge(e6.next.vertex); 

        og_opp1.next = opp1.next;
        opp1.next.next = e5opp;
        e5opp.next = og_opp1;

        og_opp2.next = opp2.next;
        opp2.next.next = e6opp;
        e6opp.next = og_opp2;

        opp1.next = e5;
        opp2.next = e6;

        // Assign opposites
        e1.opposite = opp1;
        opp1.opposite = e1;
        e2.opposite = opp2;
        opp2.opposite = e2;
        e3.opposite = e3opp;
        e3opp.opposite = e3;
        e4.opposite = e4opp;
        e4opp.opposite = e4;
        e5.opposite = e5opp;
        e5opp.opposite = e5;
        e6.opposite = e6opp;
        e6opp.opposite = e6;

        edge1.opposite = og_opp1;
        og_opp1.opposite = edge1;
        edge2.opposite = og_opp2;
        og_opp2.opposite = edge2;

        AddNewTriangle(e1);
        AddNewTriangle(e3);
        AddNewTriangle(edge1);

        new_vertex_edges.Add(e3opp);
        new_vertex_edges.Add(e4);

        // GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere.transform.position = e3.vertex.position;
        // sphere.transform.localScale = Vector3.one * 0.001f;
        // sphere.GetComponent<Renderer>().material.color = Color.cyan;
        // GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // sphere2.transform.position = e4.vertex.position;
        // sphere2.transform.localScale = Vector3.one * 0.001f;
        // sphere2.GetComponent<Renderer>().material.color = Color.cyan;

        Debug.Log("Edge split completed! New edges count: " + new_edges_created.Count);
    }

    void EdgeSplitWithThreeEdges(List<Edge> edgesToSplit) {
        // Fix ordering of edges such that edges[0].next = edges[1], edges[1].next = edges[2]...
        List<Edge> orderedEdges = new List<Edge>(edgesToSplit);

        // Find correct ordering
        Edge firstEdge = orderedEdges[0];
        Edge secondEdge = orderedEdges.First(e => e == firstEdge.next);
        Edge thirdEdge = orderedEdges.First(e => e == secondEdge.next);

        // Reorder edges
        edgesToSplit.Clear();
        edgesToSplit.Add(firstEdge);
        edgesToSplit.Add(secondEdge);
        edgesToSplit.Add(thirdEdge);

        // Case 3
        Edge edge1 = edgesToSplit[0];
        Edge edge2 = edgesToSplit[1];
        Edge edge3 = edgesToSplit[2];

        Edge opp1 = edge1.opposite;
        Edge opp2 = edge2.opposite;
        Edge opp3 = edge3.opposite;

        foreach (var edge in edgesToSplit) {
            var oppositeEdge = edge.opposite;
            new_edges.Remove(edge);
            new_edges.Remove(oppositeEdge);
            newEdgeDict.Remove(Tuple.Create(edge.vertex.index, edge.next.vertex.index));
            newEdgeDict.Remove(Tuple.Create(oppositeEdge.vertex.index, oppositeEdge.next.vertex.index));  
        }

        Vertex mid1 = AddNewVertex(edge1);
        Vertex mid2 = AddNewVertex(edge2);
        Vertex mid3 = AddNewVertex(edge3);

        Edge e1 = new Edge(mid3);
        Edge e2 = new Edge(mid1);
        Edge e3 = new Edge(mid2);

        Edge e1opp = new Edge(mid1);
        Edge e2opp = new Edge(mid2);
        Edge e3opp = new Edge(mid3);

        Edge e11 = new Edge(mid1);
        Edge e21 = new Edge(mid2);
        Edge e31 = new Edge(mid3);

        // Update edge assignments
        e11.next = edge2;
        e21.next = edge3;
        e31.next = edge1;

        e1opp.next = e31;
        e2opp.next = e11;
        e3opp.next = e21;

        edge1.next = e1opp;
        edge2.next = e2opp;
        edge3.next = e3opp;
       
        e1.next = e2;
        e2.next = e3;
        e3.next = e1;

        Edge opp1Prev = FindPreviousInternalEdge(opp1);
        Edge opp2Prev = FindPreviousInternalEdge(opp2);
        Edge opp3Prev = FindPreviousInternalEdge(opp3);

        Edge e12 = new Edge(mid1);
        Edge e22 = new Edge(mid2);
        Edge e32 = new Edge(mid3);

        e12.next = opp1Prev;
        e22.next = opp2Prev;
        e32.next = opp3Prev;

        Edge og_opp1 = new Edge(edge1.next.vertex); 
        Edge og_opp2 = new Edge(edge2.next.vertex);
        Edge og_opp3 = new Edge(edge3.next.vertex);

        Edge e12opp = new Edge(e12.next.vertex);
        Edge e22opp = new Edge(e22.next.vertex);
        Edge e32opp = new Edge(e32.next.vertex);
        

        og_opp1.next = opp1.next;
        opp1.next.next = e12opp;
        og_opp2.next = opp2.next;
        opp2.next.next = e22opp;
        og_opp3.next = opp3.next;
        opp3.next.next = e32opp;

        opp1.next = e12;
        e12opp.next = og_opp1;
        opp2.next = e22;
        e22opp.next = og_opp2;
        opp3.next = e32;
        e32opp.next = og_opp3;

        // assign opposites
        e1.opposite = e1opp;
        e1opp.opposite = e1;
        e2.opposite = e2opp;
        e2opp.opposite = e2;
        e3.opposite = e3opp;
        e3opp.opposite = e3;

        e12.opposite = e12opp;
        e12opp.opposite = e12;
        e22.opposite = e22opp;
        e22opp.opposite = e22;
        e32.opposite = e32opp;
        e32opp.opposite = e32;
        
        edge1.opposite = og_opp1;
        og_opp1.opposite = edge1;
        edge2.opposite = og_opp2;
        og_opp2.opposite = edge2;
        edge3.opposite = og_opp3;
        og_opp3.opposite = edge3;

        opp1.opposite = e11;
        e11.opposite = opp1;
        opp2.opposite = e21;
        e21.opposite = opp2;
        opp3.opposite = e31;
        e31.opposite = opp3;

        AddNewTriangle(e11);
        AddNewTriangle(e21);
        AddNewTriangle(e31);
        AddNewTriangle(e1); // created by 3 new vertices

        // Triangles created by new edges made outwards
        AddNewTriangle(e12);
        AddNewTriangle(e22);
        AddNewTriangle(e32);
        AddNewTriangle(e12opp);
        AddNewTriangle(e22opp);
        AddNewTriangle(e32opp);

        new_vertex_edges.Add(e1);
        new_vertex_edges.Add(e2);
        new_vertex_edges.Add(e3);
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
        // AddUnaffectedTriangles(edge, oppositeEdge);

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

        new_edges.Clear();
        new_edges.AddRange(new_edges_created);
        new_edges_created.Clear();
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
