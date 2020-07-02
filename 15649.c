#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sequence(int *inList, int *outList, int N, int M, int len_outList);

int main()
{
    int N, M;
    int len_outList = M;

    scanf("%d %d", &N, &M);

    int inList[N], outList[M];

    for(int i = 1;i <= N; i++)
    {
        inList[i-1] = i;
    }

    Sequence(inList, outList, N, M, M);
}

void Sequence(int *inList, int *outList, int N, int M, int len_outList)
{
    if (M == 0)
    {
        for(int i = 0;i < len_outList; i++)
        {
            printf("%d ", outList[i]);
        }
        printf("\n");
        return;
    }

    
    
    for(int i = 0; i < N; i++)
    {
        int inList2[N-1];
        int ind = 0;

        outList[len_outList-M] = inList[i];
        
        for(int j = 0; j < N; j++)
        {
            if (j == i) continue;

            inList2[ind] = inList[j];
            ind++;
        }

        Sequence(inList2, outList, N-1, M-1, len_outList);
    }
}