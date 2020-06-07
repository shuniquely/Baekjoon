#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	char result;

	scanf("%d", &score);

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

	printf("%c", result);
}