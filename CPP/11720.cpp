#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, result = 0;

	cin >> N;

	char* arr = new char[N];

	cin >> arr;

	for (int i = 0; i < N; i++)
	{
		int ctoi = (int)arr[i];

		switch (ctoi)
		{
		case 48:
			break;
		case 49:
			result += 1;
			break;
		case 50:
			result += 2;
			break;
		case 51:
			result += 3;
			break;
		case 52:
			result += 4;
			break;
		case 53:
			result += 5;
			break;
		case 54:
			result += 6;
			break;
		case 55:
			result += 7;
			break;
		case 56:
			result += 8;
			break;
		case 57:
			result += 9;
			break;
		}
	}

	cout << result << "\n";
}