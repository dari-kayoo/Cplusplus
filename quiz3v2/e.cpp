#include <bits/stdc++.h>
using namespace std;
int sum(int n, int su,int k){
    int v[10000];
    int cnt=0;
    int mx= 0;
    for (int i = n-1;i >=1;i-- ){
        if(n%i==0){
            v[i]=i;
            cnt++;
        }
    }
    if (v[k] == 1){
        return 0;
    }
   su= cnt+sum(v[k],su,k);
   k++;
    return su;


}
int main(){
    int n;
    cin >> n;
    cout << sum(n,0,0);
    return 0;
}
