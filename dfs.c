#include <stdio.h>

int graph[10][10], visited[10], n;

void dfs(int start) {
    int i;
    printf("%d ", start);
    visited[start] = 1;

    for (i = 0; i < n; i++) {
        if (graph[start][i] == 1 && !visited[i])
            dfs(i);
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    dfs(start);

    return 0;
}