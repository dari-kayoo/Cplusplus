#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i = 0){
                cout << a[i][j];
            }
            if (j = n-1){
                
            }
            if (j != n-1){
                cout  << " ";
            }
        }
        cout << endl;
    }
    return 0;
}