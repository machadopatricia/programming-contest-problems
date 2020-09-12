#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fat[] = {1, 2, 6, 24, 120, 720, 5040, 40320};
    int N;
    scanf("%d", &N);

    int i = 7;
    int cont = 0;

    while(i >= 0)
    {
        if(fat[i] <= N)
        {
            N -= fat[i];
            cont++;
        }

        else
            i--;
    }

    printf("%d\n", cont);


    return 0;
}
