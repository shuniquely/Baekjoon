#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	// �ܾ��� ������ �� count������ �˻��ϴ� ���ڰ� �ܾ��� ���۹����̸� false�� �ƴϸ� true�� ������ word������ �����մϴ�.
	int count = 0; bool word = false;

	// ������ ������ �ܾ �˻��մϴ�.
	for (int i = 0; i < str.length(); i++)
	{
		// ���� ���� ���ڴ� �ܾ��� ���۹����̱� ������ word�� false�� �������ְ� �ٷ� �������� �˻縦 ���ݴϴ�.
		if (str[i] == ' ')
		{
			word = false;
			continue;
		}
		// �ܾ��� ���۹����� ��쿡�� count�� 1 ������Ű�� word�� true�� �����մϴ�.
		if (word == false)
		{
			count++;
			word = true;
		}
	}

	cout << count << endl;
}