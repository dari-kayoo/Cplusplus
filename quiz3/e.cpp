#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        
        cin >> a[i];
        
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (a[i] == a[j]){
                cnt++;
            }
        }
    }
    if (cnt > 0){
        cout << "No";
    } else {
        cout << "YES";
    }
    return 0;
}