#include <bits/stdc++.h>

using namespace std;
int arra(int a[1000], int b[1000]){
    int n;
    cin >> n;
    int res;
    for (int i = 0; i < n; i++){
        res = a[i] - b[i];
    }
    return res;
}
int main (){
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++){
        cout << arra(a, b);
    }
    
    
    return 0;
}