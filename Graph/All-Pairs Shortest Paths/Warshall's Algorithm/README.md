# Warshall's Algorithm

This is a classical algorithm by which we can determine whether there is a path from any vertex `Vi` to another vertex `Vj` eighter directly or through one or more intermediate vertex. 

## Algorithm

- **Input:** A graph `G` whose pointer to its adjacency matrix is `Gptr` and vertices are labelled as 1,2,3,...,N. `N` is the number of vertices in the graph.

- **Output:** The path matrix `P`.

- **Data-Structure:** Matrix representation of graph with pointer `Gptr`.

- **Steps:**
```
/* Initialization of path matrix P */
For i=1 to N do
    For j=1 to N do
        P[i][j] = Gptr[i][j]
    EndFor
EndFor

/* Warshall's Algorithm */
For k=1 to N do
    For i=1 to N do
        For j=1 to N do
            P[j][j] = P[i][j] AND (P[i][k] OR P[k][j])
        EndFor
    EndFor
EndFor

Return(P)
Stop
```

## Analysis
- **Time Complexity:** This algorithm takes `O(n^3)` time.
- **Space Complexity:** This algorithm use P(N x N) matrix. So the space complexity is `O(n^2)`.

## Implementation

- **Java:** [Warshall.java](./Warshall.java)
- **C++:** [Warshall.cpp]()
- **Python:** [Warchall.py]()

## Disadvantages:

- Warshall algorithm does not take into account the weight of edges. [Floyd's algorithm](../) does the job.