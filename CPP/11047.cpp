#include <iostream>
using namespace std;

int main()
{
	int N, K, count = 0;
	int coin[10] = {};

	cin >> N >> K;

	// 입력
	for (int i = 0; i < N; i++)
		cin >> coin[i];

	// 큰 가치의 동전부터 루프를 돌며
	for (int i = N - 1; i >= 0; i--)
	{
		// K를 동전으로 나눈 값을 count로 세주고
		count += K / coin[i];
		// K는 동전으로 나눈 나머지 값으로 업데이트 해줍니다
		K %= coin[i];
	}

	// 혹시라도 가지고 있는 동전으로 돈이 완전히 나누어 떨어지지 않을 경우를 대비하여 조건문을 걸어줍니다.
	if (K != 0)
		count++;

	cout << count << endl;

	return 0;
}