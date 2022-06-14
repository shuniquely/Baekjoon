#include <iostream>

using namespace std;

int main()
{
	double A, B;

	cin >> A;
	cin >> B;

	if (A > 0 && B > 0 && A < 10 && B < 10)
	{
		// cout << fixed;
		cout.precision(9);
		cout << A / B << endl;
	}
}