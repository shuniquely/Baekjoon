#include <iostream>

using namespace std;

int main()
{
	int C, N;
	int score[1000];

	cin >> C;

	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < C; i++)
	{
		double average = 0, count = 0;
		cin >> N;
		
		// �л����� ������ �Է¹ް� ����� ���մϴ�.
		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			average += score[j];
		}
		average /= N;

		// ����� �Ѵ� �л����� ������ ����մϴ�.
		for (int j = 0; j < N; j++)
		{
			if (score[j] > average)
			{
				count++;
			}
		}
		cout << count / N * 100 << "%" << "\n";
	}
}