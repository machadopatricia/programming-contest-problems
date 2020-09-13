#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if(a==b || a==c || b==c || a+b==c || a+c==b || b+c==a)
        {
            printf("%c\n", 'S');
        }
        else printf("%c\n", 'N');
    }

    return 0;
}
