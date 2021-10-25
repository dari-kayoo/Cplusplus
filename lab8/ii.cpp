#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int>a;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    int k;
    cin >> k;
    cout << (find(a.begin(), a.end(), k) != a.end() ? "Yes" : "No");
    return 0;
}