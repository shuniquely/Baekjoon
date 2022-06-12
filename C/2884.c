#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int minute(int, int);

int main()
{
	int H, M;
	scanf("%d%d", &H, &M);

	M = minute(M, H);
	H = M / 60;
	M = M % 60;

	printf("%d %d\n", H, M);
}

int minute(int M, int H)
{
	M += H * 60 - 45;
	if (M < 0)
	{
		M = 1440 + M;
	}

	return M;
}