#include <stdio.h>
#include <stdlib.h>

int main()
{
    int porcao = 0;
    int i = 0;
    int j = 0;
    int soma1 = 0;
    int soma2 = 0;

    while(scanf("%d", &porcao) != EOF)
    {
        int * bolachas = (int*)malloc(porcao * sizeof(int));

        for(i=0; i<porcao; i++)
        {
            scanf("%d", &bolachas[i]);
        }

        i = 0;
        j = porcao-1;
        soma1 = bolachas[0];
        soma2 = bolachas[porcao-1];

        while(i != j-1)
        {
            if(soma2 > soma1)
            {
                i++;
                soma1 += bolachas[i];
            }
            else
            {
                j--;
                soma2 += bolachas[j];
            }

            porcao--;

        }

        if(soma1>=soma2)
        {
            printf("%d %d\n", soma2, soma1);
        }
        else
        {
            printf("%d %d\n", soma1, soma2);
        }
    }
}
