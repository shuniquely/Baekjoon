#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	// �ݺ����� ���� N*Nĭ�� �׷��ش�.
	for (int i = 1; i <= N; i++)
	{
		// j������ ��� ������ �ݺ������� ���� ������ ��� �׷��ִٰ�
		// i�� ���� ������ŭ�� ���� �׷��ش�.
		for (int j = N; j >= 1; j--)
		{
			if (j <= i)
			{
				cout << "*";
				continue;
			}
			cout << " ";
		}
		cout << endl;
	}
}