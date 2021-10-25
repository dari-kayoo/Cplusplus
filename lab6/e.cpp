#include <bits/stdc++.h>
using namespace std;
double hyP(double a, double b)
{

    return sqrt(pow(a, 2) + pow(b, 2));
}
int main()
{
    double a, b;
    cin >> a >> b;
    cout << setprecision(4);
    cout << hyP(a, b);
    return 0;
}