#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int o;
        cin >> o;
        a.push_back(o);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}