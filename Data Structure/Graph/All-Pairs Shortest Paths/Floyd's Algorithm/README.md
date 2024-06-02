# Floyd's Algorithm

`Warshall's Algorithm` does not take into account the weight of edges. For this case, `Robert Floyd` came with a classical solution named `Floyd's Algorithm`.

## Algorithm

- **Inputs:** A graph `G` whose pointer to its weighted adjacency matrix is `Gptr` and vertex are labbeled as 1,2,3,..,N. N is the number of vertices in the graph.

- **Output:** `Q` is the matrix of order `N x N` containing the length of shortest path between all pair of vertices. `PATHS` is the matrix of order `N x N` containing the string of shortest length of paths between all pair of vertices.

- **Steps:**
```
/* Ininitialize the matrix Q and PATHS */
For i=1 to N do
    For j=1 to N do
        If(Gptr[i][j] == 1) then
            Q[i][j] = Infinity
            PATHS[j][j] = NULL
        Else
            Q[i][j] = Gptr[i][j]
            PATHS[i][j] = Combination(i,j)
        EndIf
    EndFor
EndFor

/* Algorithm */
For k=1 to N do
    For i=1 to N do
        For j=1 to N do
            /* check if there exist a shortst path */
            Q[i][j] = Min(Q[i][j], Q[i][k]+Q[k][j])
            /* If there exist a shortest path then update the path matrix with the shortest one */
            If(Q[i][j] > Q[i][k]+Q[k][j]) then
                PATHS[i][j] = Combine (PATHS[i][k], PATHS[k][j])
            EndIf
        EndFor
    EndFor
EndFor

Return(Q,PATHS)
Stop
```

## Analysis

- **Time Complexity:** O(N^3)
- **Space Complexity:** O(N^2)

## Implementation

- **Java:** [Floyd.java](Floyd.java)
- **C++:** [Floyd.cpp]()
- **Python:** [Floyd.py]()