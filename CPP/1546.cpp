#include <iostream>

using namespace std;

int main()
{
	int N;
	double score[1000];
	int max = 0;
	double average = 0;

	// �Է��� �ް� �ִ��� ���Ѵ�.
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
		if (score[i] > max)
		{
			max = score[i];
		}
	}

	// ������ ���� ����ϰ� ����� ���մϴ�.
	for (int i = 0; i < N; i++)
	{
		average += score[i] / max * 100;
	}
	average /= N;

	cout << average << "\n";
}