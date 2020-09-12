#include <stdio.h>

int main()
{
    int N = 0;

    while(scanf("%d", &N))
    {
        if(N == 0)
            return 0;

        int i = 2;
        printf("1");

        for(i; i<N; i++)
        {
            if(i*i <= N)//se o quadrado for menor que N, imprime
            {
                printf(" %d", i*i);
            }
            else
            {
                break;
            }
        }

        printf("\n");
    }

    return 0;
}
