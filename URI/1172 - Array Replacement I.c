#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * vet = (int*)calloc(10, sizeof(int));
    int tam = 10;
    int i = 0;

    for(i; i<tam; i++)
    {
        scanf("%d", &vet[i]);

        if(vet[i] <= 0)
        vet[i] = 1;
    }

    for(i=0; i<tam; i++)
        printf("X[%d] = %d\n", i, vet[i]);

    free(vet);

    return 0;
}
