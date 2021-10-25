#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string dorama;
        int seri;
        cin >> dorama >> seri;
        m[dorama] += seri;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}