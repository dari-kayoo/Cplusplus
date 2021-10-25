#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> f;
    vector<int> s;
    map<int, int> m;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        f.push_back(x);
        s.push_back(y);
    }
    for (int i = 0; i < f.size(); i++){
        m[f[i]+s[i]] = i+1;
    }
    for (auto i:m){
        cout << i.second << " ";
    }
    return 0;
}