#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Return_R2(int, int);

int main()
{
	int R1, R2, S;

	scanf("%d%d", &R1, &S);

	R2 = Return_R2(R1, S);

	printf("%d", R2);
}

int Return_R2(int R1, int S)
{
	int R2;

	R2 = S * 2 - R1;

	return R2;
}