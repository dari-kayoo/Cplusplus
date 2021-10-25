#include <iostream>
//#include <string>
using namespace std;
void positiveNum(int n)
{
    if (n < 0)
    {
        cout << -1 * n;
    }
    else
    {
        cout << n;
    }
}

int main()
{
    int n;
    cin >> n;
    positiveNum(n);
    return 0;
}