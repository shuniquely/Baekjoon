#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cin >> x >> y;

	// 1 사분면
	if (x > 0 && y > 0)
	{
		cout << 1 << endl;
	}
	// 4 사분면
	else if (x > 0 && y < 0)
	{
		cout << 4 << endl;
	}
	// 2 사분면
	else if (x < 0 && y > 0)
	{
		cout << 2 << endl;
	}
	// 3 사분면
	else
	{
		cout << 3 << endl;
	}
}