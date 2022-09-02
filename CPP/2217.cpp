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

	// 로프를 오름차순으로 정렬합니다
	sort(rope, rope + N);

	int max_weight = 0;
	
	// 루프를 돌면서 i가 가리키는 인덱스의 루프부터 마지막 루프까지 사용했을 때 들 수 있는 중량을 구합니다.
	for (int i = 0; i < N; i++)
	{
		// 들 수 있는 중량 = 가장 작은 중량을 들 수 있는 루프 * 사용한 루프 개수
		int possible_weight = rope[i] * (N - i);
		// 최대로 들 수 있는 중량보다 지금 구한 중량이 더 큰 경우 최대로 들 수 있는 중량을 업데이트 합니다.
		if (possible_weight > max_weight)
			max_weight = possible_weight;
	}

	cout << max_weight << endl;

	return 0;
}