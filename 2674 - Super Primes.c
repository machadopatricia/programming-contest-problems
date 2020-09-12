#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 1;

    while(scanf("%d", &N) != EOF)
    {
        int i = 2;
        int div = 0;
        int cont = 0;
        int vet[5] = {};

        if(N == 1 || N == 0)
        {
            printf("Nada\n");
            continue;
        }

        for(i; i*i <= N; i++)
        {
            if(N % i == 0)
                div++;
        }

        if(div == 0)
        {
            if(N>9999)
            {
                for(i=0; i<4; i++)
                {
                    vet[i] = N % 10;
                    N = N/10;
                }
                vet[i] = N;

                for(i=0; i<5; i++)
                {
                    if(vet[i] == 2 || vet[i] == 3 || vet[i] == 5 || vet[i] == 7);
                    else
                        cont++;
                }
            }

            else if(N>999)
            {
                for(i=0; i<3; i++)
                {
                    vet[i] = N % 10;
                    N = N/10;
                }
                vet[i] = N;

                for(i=0; i<4; i++)
                {
                    if(vet[i] == 2 || vet[i] == 3 || vet[i] == 5 || vet[i] == 7);
                    else
                        cont++;
                }
            }

            else if(N>99)
            {
                for(i=0; i<2; i++)
                {
                    vet[i] = N % 10;
                    N = N/10;
                }
                vet[i] = N;

                for(i=0; i<3; i++)
                {
                    if(vet[i] == 2 || vet[i] == 3 || vet[i] == 5 || vet[i] == 7);
                    else
                        cont++;
                }
            }

            else if(N>9)
            {
                for(i=0; i<1; i++)
                {
                    vet[i] = N % 10;
                    N = N/10;
                }
                vet[i] = N;

                for(i=0; i<2; i++)
                {
                    if(vet[i] == 2 || vet[i] == 3 || vet[i] == 5 || vet[i] == 7);
                    else
                        cont++;
                }
            }
            else
            {
                if(N == 2 || N == 3 || N == 5 || N == 7);
                else
                    cont++;
            }
        }

        if(div != 0)
            printf("Nada\n");
        else if(cont == 0)
            printf("Super\n");
        else
            printf("Primo\n");
    }

    return 0;
}
