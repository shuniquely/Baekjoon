#include <iostream>

using namespace std;

int main()
{
	// �ֻ��� A, B, C
	int A, B, C, money;

	cin >> A >> B >> C;

	// ���� ���� 3���� ���
	if (A == B && B == C)
	{
		money = A * 1000 + 10000;
	}
	// ��� �ٸ� ���� ���
	else if (A != B && A != C && B != C)
	{
		// ���� ū ���� ã�´�
		// A�� ���� ū ���
		if (A >= B && A >= C)
		{
			money = A * 100;
		}
		// A�� ���� ū ���� �ƴ϶�� B, C�� �� ū ���� ã�´�
		else if (B >= C)
		{
			money = B * 100;
		}
		else
		{
			money = C * 100;
		}
	}
	// ���� ���� 2���� ���
	else
	{
		// A�� B�� ���� ���
		if (A == B)
		{
			money = A * 100 + 1000;
		}
		// ���� �ʴٸ� A�� B�� ������ C�� ������ ã�´�.
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