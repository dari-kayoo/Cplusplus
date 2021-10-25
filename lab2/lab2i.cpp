#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, a;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 10 == 7)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}