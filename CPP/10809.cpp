#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;

	cin >> S;

	for (char i = 'a'; i <= 'z'; i++)
	{
		int index = S.find(i);
		if (index == string::npos)
		{
			cout << -1 << " ";
			continue;
		}
		cout << index << " ";
	}
}