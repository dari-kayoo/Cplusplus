#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    set<int>a;
    for (int i = 0; i < n ; i++){
        int t;
        cin >> t;
        a.insert(t);
    }
    int sum = 0;
    for (auto &item : a){
        sum+=item;
    }
    cout << sum;
    return 0;
}