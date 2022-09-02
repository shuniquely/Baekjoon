#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;

	ios::sync_with_stdio(false); cin.tie(0);
	cin >> N;

	int* rope = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> rope[i];
	}

	// ������ ������������ �����մϴ�
	sort(rope, rope + N);

	int max_weight = 0;
	
	// ������ ���鼭 i�� ����Ű�� �ε����� �������� ������ �������� ������� �� �� �� �ִ� �߷��� ���մϴ�.
	for (int i = 0; i < N; i++)
	{
		// �� �� �ִ� �߷� = ���� ���� �߷��� �� �� �ִ� ���� * ����� ���� ����
		int possible_weight = rope[i] * (N - i);
		// �ִ�� �� �� �ִ� �߷����� ���� ���� �߷��� �� ū ��� �ִ�� �� �� �ִ� �߷��� ������Ʈ �մϴ�.
		if (possible_weight > max_weight)
			max_weight = possible_weight;
	}

	cout << max_weight << endl;

	return 0;
}