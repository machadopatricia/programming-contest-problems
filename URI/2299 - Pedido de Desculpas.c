#include <stdio.h>
#include <stdlib.h>

//A entrada é constituída de vários casos de teste. A primeira linha de um caso de teste contém dois números inteiros C e F indicando
//respectivamente o comprimento do cartão em caracteres (8 ≤ C ≤ 1000) e o número de frases coletadas (1 ≤  F ≤ 50).
//Cada uma das F linhas seguintes descreve uma frase coletada. A descrição é composta por dois inteiros N e D que indicam respectivamente o número
//de caracteres na frase (8 <= N <= 200) e quantas vezes a palavra ‘desculpe’ ocorre na frase (1 ≤ D ≤ 25). O final da entrada é indicado por C = F = 0.

int main()
{
    int C = 0;//comprimento do cartao - capacidade da mochila 10
    int F = 0;//numero de frases coletadas - itens a escolher 4
    int k = 1;

    while(scanf("%d %d", &C, &F))
    {
        if(C == 0 && F == 0)
            return 0;

        int i = 0;
        int j = 0;
        int compRestante = 0;
        int maxSemAtual = 0;
        int maxComAtual = 0;
        int caracteresAtual = 0;

        int * vetCaracteresFrase = (int*)malloc(F * sizeof(int));
        int * vetQtdeDesculpas = (int*)malloc(F * sizeof(int));

        for(i; i<F; i++)
        {
            scanf("%d %d", &vetCaracteresFrase[i], &vetQtdeDesculpas[i]);
        }

        int ** mat = (int**)malloc((F+1) * sizeof(int*));

        for(i=0; i<F+1; i++)
        {
            mat[i] = (int*)malloc((C+1) * sizeof(int));
        }

        for(i=0; i<(C+1); i++)//na primeira linha, para 0 frases, o valor maximo eh zero pedidos
        {
            mat[0][i] = 0;
        }

        for(i=0; i<(F+1); i++)//na primeira coluna, para a capacidade de 0 pedidos, não cabe nenhum pedido
        {
            mat[i][0] = 0;
        }

        for(i=1; i<=F; i++)
        {
            for(j=1; j<=C; j++)
            {
                maxSemAtual = mat[i-1][j];//valor maximo atual é o valor logo acima
                maxComAtual = 0;

                caracteresAtual = vetCaracteresFrase[i-1];//i começa no 1 e o vetor de caracteres no 0

                if(j >= caracteresAtual)
                {
                    maxComAtual = vetQtdeDesculpas[i-1];//atualiza valor maximo para o valor no vetor correspondente

                    compRestante = j - caracteresAtual;
                    maxComAtual += mat[i-1][compRestante];//adiciona valor atual com o da coluna de mesmos caracteres restantes
                }

                if(maxComAtual > maxSemAtual)
                {
                    mat[i][j] = maxComAtual;
                }
                else
                {
                    mat[i][j] = maxSemAtual;
                }
            }
        }

        printf("Teste %d\n%d\n\n", k, mat[F][C]);
        k++;
    }

    return 0;
}
