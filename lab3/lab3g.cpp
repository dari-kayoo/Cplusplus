#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = INT16_MIN;
    int mini = INT32_MAX;
    for (int i = 0; i < n; i++){
        if (a[i] > maxi){
            maxi = a[i];
        }
        if (a[i] < mini){
            mini = a[i];
        }
        

    }
    for (int i = 0; i < n; i++){
        if (a[i]==maxi){
            a[i] = mini;
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}