#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cin >> x >> y;

	// 1 ��и�
	if (x > 0 && y > 0)
	{
		cout << 1 << endl;
	}
	// 4 ��и�
	else if (x > 0 && y < 0)
	{
		cout << 4 << endl;
	}
	// 2 ��и�
	else if (x < 0 && y > 0)
	{
		cout << 2 << endl;
	}
	// 3 ��и�
	else
	{
		cout << 3 << endl;
	}
}