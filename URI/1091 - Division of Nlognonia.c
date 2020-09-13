#include <stdio.h>

int main()
{
    int K = 0;

    while(scanf("%d", &K))
    {
        if(K == 0)
        return 0;

        int N = 0;
        int M = 0;
        int i = 0;

        scanf("%d %d", &N, &M);

        for(i; i<K; i++)
        {
            int X = 0;//coordenadas leste-oeste
            int Y = 0;//coordenada norte-sul

            scanf("%d %d", &X, &Y);

            if(X == N || Y == M)
            {
                printf("divisa\n");
            }
            else if(X < N && Y > M)
            {
                printf("NO\n");
            }
            else if(X > N && Y > M)
            {
                printf("NE\n");
            }
            else if(X < N && Y < M)
            {
                printf("SO\n");
            }
            else
            {
                printf("SE\n");
            }
        }
    }

    return 0;
}
