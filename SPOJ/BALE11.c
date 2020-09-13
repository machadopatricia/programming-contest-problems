#include <stdio.h>
#include <stdlib.h>

int N = 0;
int i = 0;

int read(int idx, int vetBIT[])
{
    int sum = 0;
    while (idx > 0)
    {
        sum += vetBIT[idx];
        idx -= idx & (-idx);
    }
    return sum;
}

void update(int idx, int val, int vetBIT[], int maior)
{
    while (idx <= maior)
    {
        vetBIT[idx] += val;
        idx += idx & (-idx);
    }
}

int main()
{
    scanf("%d", &N);

    int * vet = (int*)calloc(N, sizeof(int));

    //guarda niveis da dançarinas
    for(i=0; i<N; i++)
    {
        scanf("%d", &vet[i]);}

    //guarda maior valor do vetor
    int maior  = 0;
    for (i=0; i<N; i++)
    {
        if(maior < vet[i])
            maior = vet[i];
    }

    int * vetBIT = (int*)calloc((maior+1), sizeof(int));

    int contaMenores = 0;
    for(i=N-1; i>=0; i--)
    {
        contaMenores += read(vet[i], vetBIT);
        update(vet[i], 1, vetBIT, maior);
    }

    printf("%d", contaMenores);

    return 0;
}
