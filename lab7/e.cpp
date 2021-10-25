#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> thDegree;
    bool isDegree = false;
    for (int i = 0; i < 63; i++)
    {
        int k = pow(2, i);
        thDegree.push_back(k);
    }
    for (int i = 0; i < thDegree.size(); i++)
    {
        if (n == thDegree[i])
        {
            isDegree = true;
        }
    }
    if (isDegree)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}