#include <iostream>

using namespace std;

int main()
{
	// newN�� ���ο� ���� �����ϴ� ����
	int N, newN;

	cin >> N;
	newN = N;

	// do while �� ���
	int i = 0;
	do
	{
		i++;

		// ����Ŭ���� �־��� ���� ���� �ڸ����� ���� �ڸ����� ������ ����
		int left, right;

		right = newN % 10;
		left = (newN % 100) / 10;

		newN = right * 10 + (left + right) % 10;
	} while (N != newN);

	cout << i << "\n";
}