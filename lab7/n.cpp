#include <bits/stdc++.h>
using namespace std;
bool Ischeater(int *a, int n, int k, int l){
    
}
int main (){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    { cin >> a[i];
    }
    sort(a, a+n);
    cout << (Ischeater(a,n,k,0)?"cheater":"no");
    return 0;
}