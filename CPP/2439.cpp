#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	// 반복문을 통해 N*N칸을 그려준다.
	for (int i = 1; i <= N; i++)
	{
		// j루프의 경우 감소형 반복문으로 만들어서 공백을 계속 그려주다가
		// i와 같은 개수만큼의 별을 그려준다.
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