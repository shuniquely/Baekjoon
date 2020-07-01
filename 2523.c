#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stars(int);

int main()
{
	int N;

	scanf("%d", &N);

	stars(N);
}

void stars(int N)
{
	int C;

	for (int i = 1; i <= N*2 -1; i++)
	{
		if (i > N) C = N*2 - i;
		else C = i;

		for (int j = 1; j <=C; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}