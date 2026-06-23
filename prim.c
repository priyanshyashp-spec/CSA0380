#include <stdio.h>
#define INF 9999

int main() {
    int n, i, j, min, a = 0, b = 0, u = 0, v = 0;
    int cost[10][10], visited[10] = {0}, edges = 1, mincost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    visited[0] = 1;

    while (edges < n) {
        min = INF;

        for (i = 0; i < n; i++) {
            if (visited[i]) {
                for (j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a = u = i;
                        b = v = j;
                    }
                }
            }
        }

        printf("%d - %d = %d\n", a, b, min);
        mincost += min;
        visited[b] = 1;
        edges++;
    }

    printf("Minimum cost = %d\n", mincost);
    return 0;
}