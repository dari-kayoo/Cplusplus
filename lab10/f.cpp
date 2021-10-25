#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, cr, bal, credit;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c >> cr;
        bal += (a + b + c) * cr;
        credit += cr;
    }
    cout << (double)bal / credit;
    return 0;
}