#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    int y, k;
    cin >> y >> k;
    a.insert(a.begin()+ y, k);
    for (int i = 0; i < n+1; i++){
        cout << a[i] << " ";
    }
    return 0;
}