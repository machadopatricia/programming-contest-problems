#include <stdio.h>

int num_calls = 0;

int fib(int X)
{
    num_calls++;

    if (X <= 1)
        return X;
    else
    {

        return (fib(X-1) + fib(X-2));
    }
}

int main ()
{
    int N = 0;
    int X = 0;
    int i = 0;
    int aux = 0;

    scanf("%d", &N);

    while(i<N)
    {
        scanf("%d", &X);

        aux = fib(X);
        printf("fib(%d) = %d calls = %d\n", X, num_calls-1, aux);

        num_calls = 0;
        i++;

    }

    return 0;
}
