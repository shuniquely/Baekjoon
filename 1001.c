#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sub(int, int);

int main()
{
	int A, B;

	scanf("%d%d", &A, &B);

	printf("%d", sub(A, B));
}

int sub(int a, int b)
{
	return a - b;
}