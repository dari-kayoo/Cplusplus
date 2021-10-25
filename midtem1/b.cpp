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
    cout << a[0][n-1] << endl;;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j - i == n-2){
               cout << a[i][j]<< " "; 
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
         
           if (i == j){
            cout << a[i][j]<< " ";
           }
        }
       

    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i - j == n-2){
                cout << a[i][j]<< " ";
            }
                
        }
    }
    cout << endl;
    cout << a[n-1][0];


    
    return 0;
}