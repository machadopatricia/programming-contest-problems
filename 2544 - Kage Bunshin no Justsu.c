#include <stdio.h>
#include <stdlib.h>

int N = 0;

int main()
{
    while(scanf("%d", &N) != EOF)
    {
        if(N == 1)
        {
            printf("0\n");
            continue;
        }

        int cont = 0;

        while(N>2)
        {
            N = N/2;
            cont++;
        }

        printf("%d\n", cont+1);

    }

    return 0;
}
