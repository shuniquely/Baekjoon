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
		
		// 학생들의 점수를 입력받고 평균을 구합니다.
		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			average += score[j];
		}
		average /= N;

		// 평균을 넘는 학생들의 비율을 계산합니다.
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