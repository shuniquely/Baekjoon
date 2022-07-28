#include <iostream>

using namespace std;

int main()
{
	int N;
	double score[1000];
	int max = 0;
	double average = 0;

	// 입력을 받고 최댓값을 구한다.
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
		if (score[i] > max)
		{
			max = score[i];
		}
	}

	// 성적을 새로 계산하고 평균을 구합니다.
	for (int i = 0; i < N; i++)
	{
		average += score[i] / max * 100;
	}
	average /= N;

	cout << average << "\n";
}