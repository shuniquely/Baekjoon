#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, C, i;

	scanf("%d", &N);

	for (i = 1; i <= N * 2; i++)
	{
		if (i > N) C = N - (i - N);
		else C = i;

		for (int j = 1; j <=C; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}