#include <iostream>

using namespace std;

int main()
{
	const int MAX = 1000000;
	int list_N[MAX];
	int N;

	cin >> N;

	// N���� ������ �Է¹޾� �迭�� ����
	for (int i = 0; i < N; i++)
	{
		cin >> list_N[i];
	}

	// �ִ񰪰� �ּڰ� ���ϱ�
	int maximum = list_N[0], minimum = list_N[0];
	for (int i = 1; i < N; i++)
	{
		// �ִ�
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