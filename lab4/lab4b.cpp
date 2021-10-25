#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int maxi1 = INT32_MIN;
    int maxi2 = INT32_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > maxi1){
                maxi1 = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > maxi2 && a[i][j] < maxi1){
                maxi2 = a[i][j];
            } 
        }
    }
    
  
    return 0;
}