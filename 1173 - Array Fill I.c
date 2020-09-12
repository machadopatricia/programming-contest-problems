#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int N = 0;
    int tam = 10;
    int * vet = (int*)calloc(tam, sizeof(int));

    scanf("%d", &N);

    for(i; i<tam; i++)
    {
        vet[i] = N;
        N = N*2;
    }

    for(i=0; i<tam; i++)
        printf("N[%d] = %d\n", i, vet[i]);

    free(vet);

    return 0;
}
