#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float N = 0;
    int tam = 100;
    float * vet = (float*)calloc(tam, sizeof(float));

    for(i; i<tam; i++)
        scanf("%f", &vet[i]);

    for(i=0; i<tam; i++)
    {
        if(vet[i] <= 10)
        printf("A[%d] = %.1f\n", i, vet[i]);
    }

    free(vet);

    return 0;
}
