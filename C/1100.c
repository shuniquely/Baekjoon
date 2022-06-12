#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_chess();

int main()
{
	printf("%d", count_chess());

	return 0;
}

int count_chess()
{
	char chess_line[8];
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%s", chess_line);

		if (i % 2 == 0)
		{
			for (int j = 0; j < 8; j += 2)
			{
				if (chess_line[j] == 'F') count++;
			}
		}
		else
		{
			for (int j = 1; j < 8; j += 2)
			{
				if (chess_line[j] == 'F') count++;
			}
		}
	}

	return count;
}