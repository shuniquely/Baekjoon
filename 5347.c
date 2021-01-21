#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a, b;
	int array[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		int a2 = a, b2 = b;

		while (a2 != b2)
		{
			if (a2 < b2)
			{
				a2 += a;
			}
			else
			{
				b2 += b;
			}
		}

		array[i] = a2;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", array[i]);
	}
}