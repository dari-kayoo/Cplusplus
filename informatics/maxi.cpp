#include <bits/stdc++.h>
using namespace std;
int mx = INT16_MIN;
int Maxi(string s, int k, int t){
    k = (s[t]-'0');
    if(k > mx){
        mx=k;
    }
    return Maxi(s, k, t+1);
}
int main (){
    string s;
    cin >> s;
    int k;
    for(int i = 0; i < s.size(); i++){
        k = s[i] - '0';
    }
    cout << Maxi(s,k,0);
}