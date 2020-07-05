#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM 10

void Sequence(int *inList, int *outList, int N, int M, int len_inList, int len_outList); // 재귀함수. N은 반복문마다, M은 호출 될 때마다 값이 바뀌므로 바뀌지않은 값을 저장할 len_inList와 len_outList를 추가한다.

int main()
{
    int N, M;
    int inList[NUM]; // 입력되는 리스트. 1부터 N까지의 자연수.
    int outList[NUM]; // 출력되는 리스트. 길이는 M.

    scanf("%d %d", &N, &M);

    for (int i = 0; i < NUM; i++) // inList를 1부터 N까지의 자연수로 초기화한다.
    {
        inList[i] = i + 1;
    }

    Sequence(inList, outList, N, M, N, M);
}

/*
반복문 안에서 자신을 호출하며, inList2는 선택된 inList의 원소보다 큰 값을 가지는 원소들의 집합이 되며 N과 M을 1씩 줄이며 반복호출을 한다.
M = 0이 되면 출력리스트가 완성되었으므로 출력한다.
반복호출한 함수가 종료되면 반복문의 마지막 부분에서 N에 1을 빼줌으로써 중복을 방지한다.
*/
void Sequence(int *inList, int *outList, int N, int M, int len_inList, int len_outList)
{
    if (M == 0) // M이 0이 되면 출력리스트가 완성되었다는 뜻이므로 매개변수로 들어온 outList를 출력한다.
    {

        for (int i = 0; i < len_outList; i++)
        {
            printf("%d ", outList[i]);
        }
        printf("\n");

        return;
    }

    for(int i = 0; i < len_inList-M+1; i++) // i가 len_inList-M+1보다 같거나 클 때 만들어지는 outList는 길이가 M보다 작기 때문에 반복에서 제외한다.
    {
        if (N < M) break; // 재귀함수 종료조건.
        
        int inList2[NUM];
        int ind = 0;

        outList[len_outList-M] = inList[i]; // 선택된 inList의 원소를 outList의 알맞는 위치에 넣는다.

        for (int j = 0; j < len_inList; j++) // 반복호출할 때 inList로 넣을 inList2의 값을 설정하는 부분.
        {
            if (j <= i) continue; // 현재 선택된 inList의 원소보다 작은 값을 제외하여 중복을 방지한다.

            inList2[ind] = inList[j];
            ind++;
        }

        Sequence(inList2, outList, N-1, M-1, len_inList-1, len_outList); // 매개변수를 설정하여 반복호출.

        N -= 1; // 반복문이 돌 때에도 중복을 제외하려면 입력리스트의 길이가 달라지기 때문에 N에 1을 빼준다.
    }
}