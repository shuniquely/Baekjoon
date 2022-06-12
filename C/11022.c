#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);

int main()
{
	int C, A, B, S;

	scanf("%d", &C);

	for (int i = 1; i <= C; i++)
	{
		scanf("%d%d", &A, &B);

		S = sum(A, B);

		printf("Case #%d: %d + %d = %d\n", i, A, B, S);
	}
}

int sum(int a, int b)
{
	return a + b;
}