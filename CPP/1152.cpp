#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	// 단어의 개수를 셀 count변수와 검사하는 문자가 단어의 시작문자이면 false를 아니면 true를 저장한 word변수를 선언합니다.
	int count = 0; bool word = false;

	// 공백을 포함한 단어를 검사합니다.
	for (int i = 0; i < str.length(); i++)
	{
		// 공백 다음 문자는 단어의 시작문자이기 때문에 word를 false로 변경해주고 바로 다음문자 검사를 해줍니다.
		if (str[i] == ' ')
		{
			word = false;
			continue;
		}
		// 단어의 시작문자인 경우에만 count를 1 증가시키고 word를 true로 변경합니다.
		if (word == false)
		{
			count++;
			word = true;
		}
	}

	cout << count << endl;
}