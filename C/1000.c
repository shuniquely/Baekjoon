#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);

int main()
{
	int a, b;
	int s;
	scanf("%d%d", &a, &b);
	printf("%d", sum(a, b));

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}