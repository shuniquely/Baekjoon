#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char grade (int);

int main()
{
	int score;

	scanf("%d", &score);

	printf("%c", grade(score));
}

char grade (int score)
{
	char result;

	switch (score/10)
	{
	case 10:
	case 9:
		result = 'A';
		break;
	case 8:
		result = 'B';
		break;
	case 7:
		result = 'C';
		break;
	case 6:
		result = 'D';
		break;
	default:
		result = 'F';
		break;
	}

	return result;
}