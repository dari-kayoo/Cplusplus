#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i =0; i < n; i++){
        cin >> a[i];
    } 
    int k;
    cin >> k;
    int b[n];
    for (int i = 0; i < k; i++){
        cin >> b[i];
    }
    for (int i = 0; i < k; i++){
        for (int j = 0; j < n; j++)
        if (b[i] == a[j]+a[j+i]){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}