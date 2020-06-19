#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divisor();

int main()
{
	int N;
	N = divisor();

	printf("%d", N);
}

int divisor()
{
	int C, A, N = 1;

	scanf("%d", &C);
	
	for (int i = 1; i <= C; i++)
	{
		scanf("%d", &A);

		if (i == 1 || i == C)
		{
			N *= A;
		}
	}

	if (N == A) N *= A;

	return N;
}