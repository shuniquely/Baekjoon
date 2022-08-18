#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	// �� ���ĺ��� �󵵼��� ������ arr_alphabet ����
	int arr_alphabet[26] = {};
	int max = 0;
	int index_max;
	// �ֺ� ���ĺ��� �� �� �̻��� ��� true, �ƴ϶�� false�� ������ isTwice ����
	bool isTwice = false;

	cin >> str;
	

	// �Է¹��� ���ڿ��� �󵵼��� �˻��մϴ�
	// ���ڸ� �빮�ڷ� �ٲ��ְ�, �ƽ�Ű�ڵ尪�� �̿��ؼ� �˸��� ���ĺ��� �ǹ��ϴ� arr_alphabet �ε����� ���� 1 �������ݴϴ�. 
	for (int i = 0; i < str.length(); i++)
	{
		char alphabet = toupper(str[i]);
		int index = (int)alphabet;
		arr_alphabet[index - 65]++;
	}

	// � ���ĺ��� ���� ���� ���Դ����� ���� ���� ���� ���ĺ��� 2�� �̻����� �˻��մϴ�.
	for (int i = 0; i < 26; i++)
	{
		// �˻��ϰ� �ִ� ���ĺ��� ����Ƚ���� �ִٵ���Ƚ���� ������ isTwice������ true�� �ٲ��ݴϴ�.
		if (arr_alphabet[i] == max)
		{
			isTwice = true;
			continue;
		}
		// �˻��ϰ� �ִ� ���ĺ��� ����Ƚ���� ���ݱ��� ���� ũ�� max�� ������ �������ְ� �ε����� �������ְ� isTwice������ false�� �ٲ��ݴϴ�.
		else if (arr_alphabet[i] > max)
		{
			max = arr_alphabet[i];
			index_max = i;
			isTwice = false;
		}
	}

	// �ֺ� ���ĺ��� �� �� �̻��� ��� ?�� ����մϴ�
	if (isTwice) cout << "?" << endl;
	// �ܵ� �ֺ� ���ĺ��̶�� �ε����� ���� A�� �ƽ�Ű�ڵ尪�� ���Ͽ� ���ĺ��� ����մϴ�
	else cout << (char)('A' + index_max) << endl;
}