#include <iostream>

using namespace std;

int main()
{
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	// 최댓값과 그 최댓값의 자리를 구한다.
	int max = arr[0];
	int index = 1;

	for (int i = 1; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i + 1;
		}
	}

	cout << max << "\n" << index << endl;
}