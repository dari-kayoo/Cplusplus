#include <iostream>
using namespace std;
int main (){
    int n, m;
    int a[100001];

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l;
    for (int i = 0; i < n; i++){
        if (a[i] == m - 1 && a[i] < m){
            l = i+1;
        } else if (a[i] == m){
            l = i+1;
        } 
    }
    cout << l;
    

    return 0;
}