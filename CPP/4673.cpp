#include <iostream>

using namespace std;

void SelfNum(int[], int);

int main()
{
	// 셀프 넘버이면 0, 아니면 1로 나타낼 크기가 10000인 배열을 만든다.
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

// PrintSelfNum은 입력받은 배열에 셀프넘버가 아닌 수의 인덱스의 값을 1로 바꿔준다.
void SelfNum(int arr[], int len)
{
	int N = 1, result = 0;
	while (N < len)
	{
		result = N;
		int index_arr[5] = {};
		int i = 10, index = 0;

		// index_arr에 N의 각 자리수를 저장해 줍니다.
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