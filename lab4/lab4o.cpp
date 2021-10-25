#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    int maxi = INT32_MIN;
    int m_i, m_j;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){         
            if (i == j){
               if (a[i][j] > maxi){
                  maxi = a[i][j];
                  m_i = i;
                  m_j = j;
               }
            }
        }
    }
    cout << "Maximum element is: " << maxi << " with coordinates: " << m_i + 1 << ";" << m_j + 1;
    return 0;
}