#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	// 각 알파벳의 빈도수를 저장할 arr_alphabet 선언
	int arr_alphabet[26] = {};
	int max = 0;
	int index_max;
	// 최빈 알파벳이 두 개 이상인 경우 true, 아니라면 false를 저장할 isTwice 선언
	bool isTwice = false;

	cin >> str;
	

	// 입력받은 문자열의 빈도수를 검사합니다
	// 문자를 대문자로 바꿔주고, 아스키코드값을 이용해서 알맞은 알파벳을 의미하는 arr_alphabet 인덱스의 값을 1 증가해줍니다. 
	for (int i = 0; i < str.length(); i++)
	{
		char alphabet = toupper(str[i]);
		int index = (int)alphabet;
		arr_alphabet[index - 65]++;
	}

	// 어떤 알파벳이 가장 많이 나왔는지와 가장 많이 나온 알파벳이 2개 이상인지 검사합니다.
	for (int i = 0; i < 26; i++)
	{
		// 검사하고 있는 알파벳의 등장횟수가 최다등장횟수와 같으면 isTwice변수를 true로 바꿔줍니다.
		if (arr_alphabet[i] == max)
		{
			isTwice = true;
			continue;
		}
		// 검사하고 있는 알파벳의 등장횟수가 지금까지 제일 크면 max의 값으로 대입해주고 인덱스를 저장해주고 isTwice변수를 false로 바꿔줍니다.
		else if (arr_alphabet[i] > max)
		{
			max = arr_alphabet[i];
			index_max = i;
			isTwice = false;
		}
	}

	// 최빈 알파벳이 두 개 이상인 경우 ?를 출력합니다
	if (isTwice) cout << "?" << endl;
	// 단독 최빈 알파벳이라면 인덱스의 값과 A의 아스키코드값을 더하여 알파벳을 출력합니다
	else cout << (char)('A' + index_max) << endl;
}