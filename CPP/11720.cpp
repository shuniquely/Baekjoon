#include <iostream>

using namespace std;

int main()
{
	int N, result = 0;

	cin >> N;

	char* arr = new char[N];

	cin >> arr;

	for (int i = 0; i < N; i++)
	{
		int ctoi = arr[i] - '0';
		result += ctoi;
	}

	cout << result << "\n";
}