#include <iostream>

using namespace std;

int main()
{
	const int MAX = 1000000;
	int list_N[MAX];
	int N;

	cin >> N;

	// N개의 정수를 입력받아 배열에 저장
	for (int i = 0; i < N; i++)
	{
		cin >> list_N[i];
	}

	// 최댓값과 최솟값 구하기
	int maximum = list_N[0], minimum = list_N[0];
	for (int i = 1; i < N; i++)
	{
		// 최댓값
		if (list_N[i] > maximum)
		{
			maximum = list_N[i];
		}
		if (list_N[i] < minimum)
		{
			minimum = list_N[i];
		}
	}

	cout << minimum << " " << maximum << endl;
}