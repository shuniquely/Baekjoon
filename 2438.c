#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stars (int);

int main()
{
	int n;
	scanf("%d", &n);

	stars(n);
}

void stars(int n)
{
	int i, j;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}