#include <stdio.h>
#include <stdlib.h>

int ** mat;
int * visited;
int N = 0;
int cont = 1;

void DFS(int i)
{
    int j;
    visited[i]=1;

    for(j=0; j<N; j++)
        if(!visited[j] && mat[i][j]==1)
            DFS(j);
}

int main()
{
    int M = 0;
    int i = 0;
    int j = 0;
    int I = 0;
    int J = 0;

    scanf("%d %d", &N, &M);

    visited = (int*)malloc(N * sizeof(int));
    mat = (int**)malloc(N * sizeof(int*));
    for(i; i<N; i++)
    {
        mat[i] = (int*)malloc(N * sizeof(int));
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            mat[i][j] = 0;
        }
        visited[i] = 0;
    }

    for(i=0; i<M; i++)
    {
        scanf("%d %d", &I, &J);
        mat[I-1][J-1] = 1;
        mat[J-1][I-1] = 1;
    }
    DFS(0);

    for(i=0; i<N; i++)
    {
        if(visited[i]==0)
        {
            DFS(i);
            cont++;
        }

    }
    printf("%d", cont);

    free(mat);
    free(visited);

    return 0;
}
