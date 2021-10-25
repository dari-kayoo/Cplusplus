#include <iostream>
#include <math.h>
using namespace std;
int same_i(int a[], int b[]){
    int result = 0;
    for (int i = 1; i <= 100; i++)
        result += min(a[i], b[i]);
      
   return result;
}
int main (){
    int n;
    cin >> n;
    int a[110], b[110];

    for (int i = 0; i < 110; i++){
        a[i] = 0; 
        b[i] = 0;
    }
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        a[t]++;
    }
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        b[k]++;
    }
    cout << same_i(a, b);

    return 0;
}