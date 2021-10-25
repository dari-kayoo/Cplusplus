#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n.size(); i++)
    {
        sum += (n[i] - '0') / 2;
    }
    cout << sum;
    return 0;
}