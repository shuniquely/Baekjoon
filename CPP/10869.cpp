#include <iostream>

using namespace std;

int main()
{
	int A, B;

	cin >> A;
	cin >> B;

	if (A >= 1 && B >= 1 && A <= 10000 && B <= 10000)
	{
		cout << A + B << endl;
		cout << A - B << endl;
		cout << A * B << endl;
		cout << A / B << endl;
		cout << A % B << endl;
	}
}