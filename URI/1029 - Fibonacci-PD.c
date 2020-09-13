#include <stdio.h>

//programação dinâmica:
int fib(int n, int check[])
{
    if (check[n] == 0)
    {
        if (n <= 1)
            check[n] = n;
        else
            check[n] = fib(n-1, check) + fib(n-2, check);
    }

    return check[n];
}

int main ()
{
    int check[100] = {};

    int n = 40;

    printf("%d", fib(n, check));

    return 0;
}
