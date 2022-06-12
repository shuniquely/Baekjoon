#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int);

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", add(n));
}

int add(int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += i;
	}

	return s;
}