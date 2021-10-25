#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char q[50];
    cin >> n;
    char a[50];
    int a1[50];
    char b[50];
    int b1[50];
    int c1[50];
    for(int i =0; i < n;i++){
        cin >> q[i]>>a[i]>>a1[i]>> b[i]>> b1[i];
    }
    for(int i =0; i < n; i++){
        if (q[i] == '+'){
            c1[i] = a1[i]+b1[i];
        } else if (q[i] == '*'){
            c1[i] = a1[i]*b1[i];
        } else if (q[i] == '-'){
            c1[i] = a1[i]-b1[i];
        }
    }
    for (int i =0; i < n; i++){
        cout << a[i] << " " << q[i] << " " << b[i] << " = " << c1[i] << endl;
    }
    return 0;
}