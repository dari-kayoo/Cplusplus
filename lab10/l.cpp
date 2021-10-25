#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> myvector (100);
    for (int i = 0; i < n; i++)
    {
        fill(myvector.begin(), myvector.end(), i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << myvector[i] << " ";
    }
    return 0;
}