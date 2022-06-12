#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_zero(int);

int main()
{
	int N;
	scanf("%d", &N);

	printf("%d", count_zero(N));
}

int count_zero(int N)
{
	int result = 0, i =5;

	while (i <= N)
	{
		result += N / i;
		i *= 5;
	}
	
	return result;
}