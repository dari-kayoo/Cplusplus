#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        
    }
    int k, cn = 0;
    for (int i = 0; i < n-1; i++)
    {
        k = a[i+1] - a[i] - 1;
        cn += k;  
    }
    cout << cn;
    
    
    return 0;
}