#include <iostream>

using namespace std;

int main()
{
	// 주사위 A, B, C
	int A, B, C, money;

	cin >> A >> B >> C;

	// 같은 눈이 3개인 경우
	if (A == B && B == C)
	{
		money = A * 1000 + 10000;
	}
	// 모두 다른 눈인 경우
	else if (A != B && A != C && B != C)
	{
		// 제일 큰 수를 찾는다
		// A가 제일 큰 경우
		if (A >= B && A >= C)
		{
			money = A * 100;
		}
		// A가 제일 큰 수가 아니라면 B, C중 더 큰 수를 찾는다
		else if (B >= C)
		{
			money = B * 100;
		}
		else
		{
			money = C * 100;
		}
	}
	// 같은 눈이 2개인 경우
	else
	{
		// A와 B가 같은 경우
		if (A == B)
		{
			money = A * 100 + 1000;
		}
		// 같지 않다면 A와 B중 무엇이 C와 같은지 찾는다.
		else
		{
			if (A == C)
			{
				money = A * 100 + 1000;
			}
			else
			{
				money = B * 100 + 1000;
			}
		}
	}

	cout << money << endl;
}