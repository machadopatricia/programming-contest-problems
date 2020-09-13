#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    if(A > B)
        printf("%d\n", A);

    else if(B > A)
        printf("%d\n", B);

    else printf("%d\n", A);

    return 0;
}
