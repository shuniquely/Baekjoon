#include <iostream>
using namespace std;

int main()
{
	int N, K, count = 0;
	int coin[10] = {};

	cin >> N >> K;

	// �Է�
	for (int i = 0; i < N; i++)
		cin >> coin[i];

	// ū ��ġ�� �������� ������ ����
	for (int i = N - 1; i >= 0; i--)
	{
		// K�� �������� ���� ���� count�� ���ְ�
		count += K / coin[i];
		// K�� �������� ���� ������ ������ ������Ʈ ���ݴϴ�
		K %= coin[i];
	}

	// Ȥ�ö� ������ �ִ� �������� ���� ������ ������ �������� ���� ��츦 ����Ͽ� ���ǹ��� �ɾ��ݴϴ�.
	if (K != 0)
		count++;

	cout << count << endl;

	return 0;
}