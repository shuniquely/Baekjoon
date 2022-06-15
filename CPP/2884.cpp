#include <iostream>

using namespace std;

int main()
{
	int H, M;

	cin >> H >> M;

	M -= 45;

	// 분의 자리수가 0보다 작아지면
	if (M < 0)
	{
		// 분은 60진법이므로 60에 더해주고
		M = 60 + M;
		// 시의 자리수에 1을 빼준다.
		H -= 1;
		
		// 시의 자리수가 0보다 작아지면
		if (H < 0)
		{
			// 시는 24진법이므로 24에 더해준다.
			H = 24 + H;
		}
	}

	cout << H << " " << M << endl;
}