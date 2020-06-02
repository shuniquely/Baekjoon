#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int H = 0, M = 0;
	scanf("%d%d", &H, &M);

	M += H * 60 - 45;
	if (M < 0)
	{
		M = 1440 + M;
	}
	H = M / 60;
	M = M % 60;

	printf("%d %d\n", H, M);
}