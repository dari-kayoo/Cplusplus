#include <bits/stdc++.h>
using namespace std;
void Fir(string s,int cnt){
    
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' and s[i] <= 'Z'){
            cout << s[i];
            Fir(s,++cnt);
            break;
        }
    }
    if(cnt==0){
        cout << -1;
    }

}

int main(){
    string s;
    cin >> s;
    Fir(s, 0);
    return 0;
}