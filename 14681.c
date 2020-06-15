#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Quadrant(int, int);

int main()
{
	int x, y, q;

	scanf("%d%d", &x, &y);

	q = Quadrant(x, y);

	printf("%d", q);
}

int Quadrant(int x, int y)
{
	if (x > 0)
	{
		if (y > 0) return 1;
		return 4;
	}
	if (x < 0)
	{
		if (y < 0) return 3;
		return 2;
	}
}