#include <iostream>

using namespace std;

int main()
{
	int A, B;

	cin >> A;
	cin >> B;

	for (int i = 10; i <= B * 10; i *= 10)
	{
		int C;
		C = B % i;
		C = C / (i / 10);

		cout << A * C << endl;
		B - C;
	}

	cout << A * B << endl;
}