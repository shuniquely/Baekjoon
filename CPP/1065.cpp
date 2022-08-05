#include <iostream>

using namespace std;

int main()
{
	int N, count = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (i < 100)
		{
			count++;
			continue;
		}

		// 각 변수는 X의 자릿수를 저장할 변수
		int n1, n10, n100, n1000;

		n1 = i % 10;
		n10 = i % 100 - n1;
		n100 = i % 1000 - n1 - n10;
		if (i < 1000)
		{
			if (n10 - n1 == n100 - n10)
			{
				count++;
				continue;
			}
		}
		n1000 = i % 1000 - n1 - n10 - n100;
		if (n10 - n1 == n100 - n10 && n100 - n10 == n1000 - n100)
		{
			count++;
			continue;
		}
	}

	cout << count << "\n";
}