#include <iostream>

using namespace std;

int main()
{
	int N;
	char Quiz_result [80];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int score = 0;

		cin >> Quiz_result;

		// combo�� ���ӵ� ������ ������ �����ϴ� ����
		int j = 0, combo = 1;
		do
		{
			if (Quiz_result[j] == 'O')
			{
				score += combo;
				combo++;
			}
			else
			{
				combo = 1;
			}
			j++;
		}while (Quiz_result[j] != NULL);

		cout << score << "\n";
	}
}