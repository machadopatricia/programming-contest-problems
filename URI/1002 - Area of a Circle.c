#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R = 0;
    double A = 0;

    scanf("%lf", &R);

    A = 3.14159 * (R*R);

    printf("A=%.4lf\n", A);

    return 0;
}
