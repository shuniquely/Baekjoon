#include <iostream>

using namespace std;

int main()
{
	// newN은 새로운 수를 저장하는 변수
	int N, newN;

	cin >> N;
	newN = N;

	// do while 문 사용
	int i = 0;
	do
	{
		i++;

		// 사이클마다 주어진 수의 십의 자리수와 일의 자리수를 저장할 변수
		int left, right;

		right = newN % 10;
		left = (newN % 100) / 10;

		newN = right * 10 + (left + right) % 10;
	} while (N != newN);

	cout << i << "\n";
}