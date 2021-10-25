#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    } 
    int mx = INT16_MIN, mn = INT32_MAX;
    for(int i = 0; i < n; i++){
        if (a[i]>mx){
            mx = a[i];
        }
        if (a[i]<mn){
            mn = a[i];
        }
    }
    cout << mx - mn;
    return 0;
}