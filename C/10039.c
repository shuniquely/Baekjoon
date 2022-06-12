#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int score_average()
{
	int score, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score);

		if (score < 40) score = 40;

		sum += score;
	}

	return sum / 5;
}

int main()
{
	printf("%d", score_average());
}