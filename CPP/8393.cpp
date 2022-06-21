#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    // result는 합을 저장하는 변수
    int result = 0;
    
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    
    cout << result <<endl;
}