#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int hour = n / 60;
    int min = n % 60;
    if (hour == 24)
    {
        hour = 0;
    }
    if (min = 60)
    {
        hour++;
        min = 0;
    }
    cout << hour << " " << min;
    return 0;
}