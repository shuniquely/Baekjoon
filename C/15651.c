#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM 10

void Sequence(int N, int M, int ind, int *outList);

int main()
{
    int N, M;
    int outList[NUM];

    scanf("%d %d", &N, &M);

    Sequence(N, M, 0, outList);
}

void Sequence(int N, int M, int ind, int *outList)
{
    if(M == 0)
    {
        for(int i = 0;i < ind; i++)
        {
            printf("%d ", outList[i]);
        }
        printf("\n");
        return;
    }

    for(int i = 1; i <= N; i++)
    {
        outList[ind] = i;

        Sequence(N, M-1, ind+1, outList);
    }
}