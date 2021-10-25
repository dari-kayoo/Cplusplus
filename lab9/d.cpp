#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int>a;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if (a[i] == k){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}