#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sequence(int *inList, int *outList, int N, int M, int len_outList); // 재귀함수. M은 호출 될 때마다 값이 바뀌므로 바뀌지않은 값을 저장할 len_outList를 추가한다.

int main()
{
    int N, M;
    int inList[N]; // 입력되는 리스트. 1부터 N까지의 자연수.
    int outList[M]; // 출력되는 리스트. 길이는 M.

    scanf("%d %d", &N, &M);


    for(int i = 1;i <= N; i++) // inList를 1부터 N까지의 자연수로 초기화한다.
    {
        inList[i-1] = i;
    }

    Sequence(inList, outList, N, M, M);
}

/*
반복문 안에서 자신을 호출하며, inList2는 선택된 inList의 원소를 제외한 원소들의 집합이 되며 N과 M을 1씩 줄이며 반복호출을 한다.
M = 0이 되면 출력리스트가 완성되었으므로 출력한다.
*/
void Sequence(int *inList, int *outList, int N, int M, int len_outList)
{
    if (M == 0) // M이 0이 되면 출력리스트가 완성되었다는 뜻이므로 매개변수로 들어온 outList를 출력한다.
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

        outList[len_outList-M] = inList[i]; // 선택된 inList의 원소를 outList의 알맞는 위치에 넣는다.
        
        for(int j = 0; j < N; j++) // 반복호출할 때 inList로 넣을 inList2의 값을 설정하는 부분.
        {
            if (j == i) continue; // 현재 선택된 inList의 값만 제외한다.

            inList2[ind] = inList[j];
            ind++;
        }

        Sequence(inList2, outList, N-1, M-1, len_outList); // 매개변수를 설정하여 반복호출.
    }
}