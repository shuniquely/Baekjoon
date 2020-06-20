#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divisor();

int main()
{
	int N;
	N = divisor();

	printf("%d", N);
}

int divisor()
{
	int C, SA, BA, A, N = 1;

	scanf("%d", &C);
	
	scanf("%d", &SA);
	BA = SA;

	for (int i = 1; i <= C-1; i++)
	{
		scanf("%d", &A);

		if (A < SA) SA = A;
		if (A > BA) BA = A;
	}

	N = SA * BA;

	return N;
}