#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m[x] = y;
        m[y] = x;
    }
    for (int j = 0; j < n; j++)
    {
        int timeOccured = 0;
        for (auto i : m)
        {
            if ()
            {
                timeOccured++;
            }
        }
        cout << timeOccured << endl;
    }

    return 0;
}