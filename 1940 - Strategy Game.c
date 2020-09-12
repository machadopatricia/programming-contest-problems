#include <stdio.h>
#include <stdlib.h>

int mat[500][500];

int main()
{
    int J, R, i, j, soma, aux, jogador;

    scanf("%d %d", &J, &R);

    for(i=0; i<R; i++)
        for(j=0; j<J; j++)
            scanf("%d", &mat[i][j]);

    aux = 0;

    for(i=0; i<J; i++)
    {
        soma = 0;

        for(j=0; j<R; j++)
            soma += mat[j][i];

        if(soma >= aux)
        {
            aux = soma;
            jogador = i;
        }
    }

    printf("%d\n", jogador+1);

    return 0;
}
