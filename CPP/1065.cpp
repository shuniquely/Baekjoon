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

	//	// 각 변수는 X의 자릿수를 저장할 변수
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


// 입력받은 X가 한수이면 1을 아니면 0을 반환하는 함수
int Hansu(int X)
{
	// index_arr는 X의 1의 자리부터 나타내는 배열 X는 1000을 넘지 않으므로 자리수는 4.
	const int MAX = 4;
	int index_arr[MAX] = {-1, -1, -1, -1};
	int i = 0, index =1, gap;

	// 10자리를 넘지 않는 수는 무조건 한수
	if (X < 100)
	{
		return 1;
	}

	// 각 자리수를 배열에 저장한다.
	do
	{
		index_arr[i] = X % (index * 10) / index;
		i++; index *= 10;
	} while (X % index != X % (index * 10) || X >= index * 10);


	// 일의 자리와 십의 자리 차이를 gap 변수에 저장하고 등차수열인지 확인한다.
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