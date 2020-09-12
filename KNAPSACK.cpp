#include <bits/stdc++.h>
using namespace std;

int mochila [2010][2010];
int itens[2010][2] = {};

int S, N;

int colocar(int S, int item)
{
    if(item == N)
        return 0;

    if(mochila[S][item] == -1)
    {
        if(S - itens[item][0] < 0)
            mochila[S][item] = colocar(S, item + 1);

        else
        {
            int x = colocar(S, item+1);
            int y = itens[item][1] + colocar(S - itens[item][0], item + 1);
            mochila[S][item] = x > y ? x : y;
        }
    }

    return mochila[S][item];
}

int main()
{
    scanf("%d %d", &S, &N);

    memset(mochila, -1, sizeof(mochila));

    int i = 0;
    for(i; i<N; i++)
        scanf("%d %d", &itens[i][0], &itens[i][1]);

    printf("%d\n", colocar(S, 0));


    return 0;
}
