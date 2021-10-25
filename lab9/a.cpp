#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int firstColomn[1001];
    int secondColomn[1001];
    vector<pair<int, int>> coordinate;

    for (int i = 0; i < n; i++)
    {
        cin >> firstColomn[i] >> secondColomn[i];
        coordinate.push_back(make_pair(firstColomn[i], secondColomn[i]));
    }
    sort(coordinate.begin(), coordinate.end());

    for (int i = 0; i < n; i++)
    {
        cout << coordinate[i].first << " " << coordinate[i].second << endl;
    }
    return 0;
}