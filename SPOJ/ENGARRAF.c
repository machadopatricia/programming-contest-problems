#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0

int ** mat;
int V = 0;

int minDistance(int dist[], bool visited[])
{
    int min = INT_MAX / 2;
    int min_index;

    for(int i=0; i<V; i++)
        if (visited[i] == false && dist[i] <= min)
        {
            min = dist[i];
            min_index = i;
        }

    return min_index;
}

int dijkstra(int src, int des)
{
    int dist[V];
    bool visited[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX / 2;
        visited[i] = false;
    }

    dist[src] = 0;

    for (int k=0; k<V-1; k++)
    {
        int i = minDistance(dist, visited);

        visited[i] = true;

        for (int j=0; j<V; j++)
        {
            if (!visited[j] && mat[i][j] && dist[i] != INT_MAX/2 && dist[i]+mat[i][j] < dist[j])
                dist[j] = dist[i] + mat[i][j];
        }
    }

    return dist[des];
}

int main()
{
    int in = 0;

    while(scanf("%d %d", &V, &in))
    {
        if(V == 0 && in == 0)
            return 0;

        int I = 0;
        int J = 0;
        int peso = 0;
        int src = 0;
        int dest = 0;

        mat = (int**)calloc(V, sizeof(int*));
        for(int i=0; i<V; i++)
        {
            mat[i] = (int*)calloc(V, sizeof(int));
        }

        for(int i=0; i<in; i++)
        {
            scanf("%d %d %d", &I, &J, &peso);
            mat[I-1][J-1] = peso;
        }

        scanf("%d %d", &src, &dest);

        int result = dijkstra(src-1, dest-1);

        if(result <= 100000)
            printf("%d\n", result);
        else
            printf("-1\n");
    }
}
