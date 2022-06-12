#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_stick(int);

int main()
{
	int X, count;

	scanf("%d", &X);

	count = count_stick(X);

	printf("%d", count);
}

int count_stick(int x)
{
	int count = 0;

	for (int i = 32; i >= 1; i /= 2)
	{
		if (x == 0) break;
		if (i <= x) count++;
		x = x % i;
	}

	return count;
}