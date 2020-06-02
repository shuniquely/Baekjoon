#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	int result = 0;
	int i = 5;
	scanf("%d", &N);

	while (i <= N)
	{
		result += N / i;
		i *= 5;
	}

	printf("%d", result);
}