#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int set_need(int);

int main()
{
	int num;

	scanf("%d", &num);

	printf("%d", set_need(num));
}

int set_need(int n)
{
	int count[10] = { 0,};
	int result = 0;

	for (int i = 10; i <= n * 10; i *= 10)
	{
		count[(n % i)/(i/10)]++;
	}

	if (n == 0) count[0] = 1;

	count[6] += count[9];
	if (count[6] % 2 == 1) count[6] = (count[6] + 1) / 2;
	else count[6] /= 2;

	for (int i = 0; i <= 8; i++)
	{
		if (count[i] > result) result = count[i];
	}

	return result;
}