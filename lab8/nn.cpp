#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; 
    cin >> n;
    set<int> a;
    for (int i = 0; i < n;i++){
        int t;
        cin >> t;
        a.insert(t);
    }
    for (auto &item : a){
        if (item%2 == 1){
            cout << item << " ";
        }
    }
    

    return 0;
}