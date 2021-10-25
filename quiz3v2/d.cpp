#include <bits/stdc++.h>
using namespace std;
void kbonochi(unsigned long k,unsigned long m,unsigned long a1,unsigned long a2, unsigned long an,unsigned long n){
an=a1+k*a2;
a1=a2;
a2=an;
n++;
if(n==m){
    cout << an%10;
}
else{
kbonochi(k,m,a1,a2,an,n);
}
}
int main (){
    unsigned long k,m;
    cin >> k >> m;
    kbonochi(k,m,0,1,0,2);
    return 0;
}