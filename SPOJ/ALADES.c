#include <stdio.h>

int main()
{
    //entradas
    int H1 = 0;
    int M1 = 0;
    int H2 = 0;
    int M2 = 0;
    //conversao das horas para minuto
    int mH1 = 0;
    int mH2 = 0;
    //minutos que Daniela tem para dormir
    int minSono = 0;

    while(scanf("%d %d %d %d", &H1, &M1, &H2, &M2))
    {
        if(H1==0 && M1==0 && H2==0 && M2==0)
        {
            break;
        }

        if(H1==M1 && M1==H2 && H2==M2)
        {
            printf("%d\n", 1440);
            continue;
        }

        mH1 = H1 * 60;
        mH2 = H2 * 60;

        minSono = (mH2+M2) - (mH1+M1);

        if(H1>H2 || (H1 == H2 && M1>M2))
        {
            minSono = minSono + 1440;
        }

        printf("%d\n", minSono);
    }

    return 0;
}
