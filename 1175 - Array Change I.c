#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int N = 0;
    int aux = 0;
    int tam = 20;
    int k = tam-1;
    int * vet = (int*)calloc(tam, sizeof(int));

    for(i; i<tam; i++)
        scanf("%d", &vet[i]);

    for(i=0; i<tam/2; i++)
    {
        aux = vet[i];
        vet[i] = vet[k];
        vet[k] = aux;
        k--;
    }

    for(i=0; i<tam; i++)
        printf("N[%d] = %d\n", i, vet[i]);

    free(vet);

    return 0;
}
