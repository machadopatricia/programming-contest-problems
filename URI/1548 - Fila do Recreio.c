#include <stdio.h>
#include <stdlib.h>

int N = 0;
int n = 0;
int vet[1010] = {};
int vetOrdem[1010] = {};
int vetAux[1010] = {};

int main()
{
    scanf("%d", &N);

    while(n < N)
    {
        int M = 0;
        scanf("%d", &M);

        int i = 0;
        int j = 0;
        int maior = 0;
        int aux = 0;
        int cont = 0;

        for(i; i<M; i++)
        {
            scanf("%d", &vet[i]);
            vetAux[i] = vet[i];
        }

        for(i=0; i<M; i++)
        {
            maior = 0;

            for(j=0; j<M; j++)
            {
                if(vet[j] > maior)
                {
                    maior = vet[j];
                    aux = j;
                }
            }

            vetOrdem[i] = maior;
            vet[aux] = 0;
        }

        for(i=0; i<M; i++)
            if(vetAux[i] == vetOrdem[i])
                cont++;

        printf("%d\n", cont);

        n++;
    }

    return 0;
}

