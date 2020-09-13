#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X1 = 0;
    int X2 = 0;
    int Y1 = 0;
    int Y2 = 0;

    while (scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2))
    {
        if(X1 == 0 && X2 == 0 && Y1 == 0 && Y2 == 0)
            return 0;

        if((X1 == X2) && (Y1 == Y2))//se forem iguais está na posĩção
        {
            printf("0\n");
        }
        else if(X1 == X2 || Y1 == Y2)//se estiver na mesma linha ou mesma coluna, 1 movimento só
        {
            printf("1\n");
        }
        else if (abs(X1-X2) == abs(Y1-Y2))//se estiver na mesma diagonal, 1 movimento só
        {
            printf("1\n");
        }
        else
            printf("2\n");
    }
    return 0;
}
