#include <iostream>

using namespace std;

int Hansu(int);

int main()
{
	int N, count = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
	//	if (i < 100)
	//	{
	//		count++;
	//		continue;
	//	}

	//	// �� ������ X�� �ڸ����� ������ ����
	//	int n1, n10, n100, n1000;

	//	n1 = i % 10;
	//	n10 = i % 100 / 10;
	//	n100 = i % 1000 / 100;
	//	if (i < 1000)
	//	{
	//		if (n10 - n1 == n100 - n10)
	//		{
	//			count++;
	//			continue;
	//		}
	//	}
	//	n1000 = i % 10000 / 1000;
	//	if (n10 - n1 == n100 - n10 && n100 - n10 == n1000 - n100)
	//	{
	//		count++;
	//		continue;
	//	}

		 count += Hansu(i);
	}

	cout << count << "\n";
}


// �Է¹��� X�� �Ѽ��̸� 1�� �ƴϸ� 0�� ��ȯ�ϴ� �Լ�
int Hansu(int X)
{
	// index_arr�� X�� 1�� �ڸ����� ��Ÿ���� �迭 X�� 1000�� ���� �����Ƿ� �ڸ����� 4.
	const int MAX = 4;
	int index_arr[MAX] = {-1, -1, -1, -1};
	int i = 0, index =1, gap;

	// 10�ڸ��� ���� �ʴ� ���� ������ �Ѽ�
	if (X < 100)
	{
		return 1;
	}

	// �� �ڸ����� �迭�� �����Ѵ�.
	do
	{
		index_arr[i] = X % (index * 10) / index;
		i++; index *= 10;
	} while (X % index != X % (index * 10) || X >= index * 10);


	// ���� �ڸ��� ���� �ڸ� ���̸� gap ������ �����ϰ� ������������ Ȯ���Ѵ�.
	i = 2;
	gap = index_arr[1] - index_arr[0];
	while (index_arr[i] != -1)
	{
		if (index_arr[i] - index_arr[i - 1] != gap)
		{
			return 0;
		}
		i++;
	}

	return 1;
}