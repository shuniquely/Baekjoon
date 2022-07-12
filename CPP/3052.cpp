#include <iostream>

using namespace std;

int main()
{
	const int MAX = 42;
	int arr[MAX] = {};
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		int N;
		cin >> N;

		arr[N % 42] += 1;
	}

	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] > 0)
		{
			count++;
		}
	}

	cout << count << "\n";
}