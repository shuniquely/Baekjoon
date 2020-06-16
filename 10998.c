#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiplication(int, int);

int main()
{
	int A, B;

	scanf("%d%d", &A, &B);

	printf("%d", multiplication(A, B));
}

int multiplication(int a, int b)
{
	return a * b;
}