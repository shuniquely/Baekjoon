#include <iostream>

using namespace std;

int main()
{
	int chess[] = { 1, 1, 2, 2, 2, 8 };
	int n;

	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		chess[i] -= n;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << chess[i] << " ";
	}
}