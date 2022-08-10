#include <iostream>

using namespace std;

void SelfNum(int[], int);

int main()
{
	// ���� �ѹ��̸� 0, �ƴϸ� 1�� ��Ÿ�� ũ�Ⱑ 10000�� �迭�� �����.
	const int MAX = 10000;
	int* arr;
	arr = (int*)malloc(sizeof(int) * MAX);
	for (int i = 0; i < MAX; i++) arr[i] = 0;

	SelfNum(arr, MAX);

	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] == 0) cout << i + 1 << "\n";
	}
}

// PrintSelfNum�� �Է¹��� �迭�� �����ѹ��� �ƴ� ���� �ε����� ���� 1�� �ٲ��ش�.
void SelfNum(int arr[], int len)
{
	int N = 1, result = 0;
	while (N < len)
	{
		result = N;
		int index_arr[5] = {};
		int i = 10, index = 0;

		// index_arr�� N�� �� �ڸ����� ������ �ݴϴ�.
		do
		{
			index_arr[index] = N % i / (i / 10);
			i *= 10; index++;
		} while (N % i != N % (i / 10) || N >= i);

		for (int j = 0; j < index; j++)
		{
			result += index_arr[j];
		}

		if (result - 1 <= len)
		{
			arr[result - 1] = 1;
		}

		N++;
	}
}