// 11000번 강의실 배정
// 매 강의의 시작 시간과 끝 시간을 각각 다른 배열에 저장하여 정렬합니다.
// 시간의 흐름에 따라 강의가 시작할 때는 강의실의 개수를 더해주고 강의가 끝날 때는 빼줍니다.
// 이 때 강의실이 개수가 가장 클 때를 저장하여 출력합니다.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N == 1) {
		cout << 1 << endl;
		return 0;
	}

	// 강의 시간의 시작 시간을 저장하는 start_time과 끝나는 시간을 저장하는 end_time 배열을 선언합니다.
	int* start_time = new int[N];
	int* end_time = new int[N];

	// 입력 받은 값을 알맞게 대입해줍니다.
	for (int i = 0; i < N; i++)
	{
		cin >> start_time[i] >> end_time[i];
	}

	// 두 배열을 정렬합니다.
	sort(start_time, start_time + N);
	sort(end_time, end_time + N);

	// 결과를 구합니다.
	// 포인터를 이용하여 강의의 시작과 종료를 시간의 흐름에 맞게 더하고 뺄 수 있게 해줍니다.
	int* start_ptr = start_time, * end_ptr = end_time;
	// 현재 사용되고 있는 강의실 개수를 저장할 count_class와 지금까지 가장 많은 강의실이 사용될 때의 개수를 저장할 max변수를 선언합니다.
	int count_class = 0, max = 1;

	while (true)
	{
		// 강의의 시작이 더이상 없다면 max는 변하지 않을 것이므로 루프를 종료합니다.
		if (start_ptr == start_time + N) break;

		// 강의가 시작해야한다면
		if (*start_ptr < *end_ptr)
		{
			// 사용중인 강의실의 개수를 증가시킵니다.
			count_class++;
			start_ptr++;
			// 사용 중인 강의실이 지금껏 가장 많다면 max를 업데이트합니다.
			if (count_class > max) max = count_class;
		}
		// 강의가 종료되었다면
		else
		{
			// 사용중인 강의실의 개수를 감소시킵니다.
			count_class--;
			end_ptr++;
		}
	}
	// 가장 많이 사용될 때의 강의실 개수를 출력합니다.
	cout << max;
}