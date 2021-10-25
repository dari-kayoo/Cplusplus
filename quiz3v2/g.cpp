#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt=0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' and s[i] <= 'Z'){
            cout << s[i];
            cnt++;
            break;
        }
    }
    if(cnt==0){
        cout << -1;
    }
    return 0;
}