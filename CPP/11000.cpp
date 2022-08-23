// 11000�� ���ǽ� ����
// �� ������ ���� �ð��� �� �ð��� ���� �ٸ� �迭�� �����Ͽ� �����մϴ�.
// �ð��� �帧�� ���� ���ǰ� ������ ���� ���ǽ��� ������ �����ְ� ���ǰ� ���� ���� ���ݴϴ�.
// �� �� ���ǽ��� ������ ���� Ŭ ���� �����Ͽ� ����մϴ�.

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

	// ���� �ð��� ���� �ð��� �����ϴ� start_time�� ������ �ð��� �����ϴ� end_time �迭�� �����մϴ�.
	int* start_time = new int[N];
	int* end_time = new int[N];

	// �Է� ���� ���� �˸°� �������ݴϴ�.
	for (int i = 0; i < N; i++)
	{
		cin >> start_time[i] >> end_time[i];
	}

	// �� �迭�� �����մϴ�.
	sort(start_time, start_time + N);
	sort(end_time, end_time + N);

	// ����� ���մϴ�.
	// �����͸� �̿��Ͽ� ������ ���۰� ���Ḧ �ð��� �帧�� �°� ���ϰ� �� �� �ְ� ���ݴϴ�.
	int* start_ptr = start_time, * end_ptr = end_time;
	// ���� ���ǰ� �ִ� ���ǽ� ������ ������ count_class�� ���ݱ��� ���� ���� ���ǽ��� ���� ���� ������ ������ max������ �����մϴ�.
	int count_class = 0, max = 1;

	while (true)
	{
		// ������ ������ ���̻� ���ٸ� max�� ������ ���� ���̹Ƿ� ������ �����մϴ�.
		if (start_ptr == start_time + N) break;

		// ���ǰ� �����ؾ��Ѵٸ�
		if (*start_ptr < *end_ptr)
		{
			// ������� ���ǽ��� ������ ������ŵ�ϴ�.
			count_class++;
			start_ptr++;
			// ��� ���� ���ǽ��� ���ݲ� ���� ���ٸ� max�� ������Ʈ�մϴ�.
			if (count_class > max) max = count_class;
		}
		// ���ǰ� ����Ǿ��ٸ�
		else
		{
			// ������� ���ǽ��� ������ ���ҽ�ŵ�ϴ�.
			count_class--;
			end_ptr++;
		}
	}
	// ���� ���� ���� ���� ���ǽ� ������ ����մϴ�.
	cout << max;
}