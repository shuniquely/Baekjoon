#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B, C;
	int count_arr[10] = {};
	string result;

	cin >> A >> B >> C;

	// ����� ����� string���ڿ��� ��ȯ
	result = to_string(A * B * C);

	// ���ڿ��� �ݺ������� �����ϸ� ���� ������ ���� �迭�� ���
	for (int i = 0; i < result.length(); i++)
	{
		int counter = result[i];

		switch (counter)
		{
		case '0':
			count_arr[0]++;
			break;

		case '1':
			count_arr[1]++;
			break;

		case '2':
			count_arr[2]++;
			break;

		case '3':
			count_arr[3]++;
			break;

		case '4':
			count_arr[4]++;
			break;

		case '5':
			count_arr[5]++;
			break;

		case '6':
			count_arr[6]++;
			break;

		case '7':
			count_arr[7]++;
			break;

		case '8':
			count_arr[8]++;
			break;

		case '9':
			count_arr[9]++;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << count_arr[i] << "\n";
	}
}