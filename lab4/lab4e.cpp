#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    char a[n][n];
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++){
            cout << "[*]";

        }
        cout  << endl;
    }
    
    
    return 0;
}
