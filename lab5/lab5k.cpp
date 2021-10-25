#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    int cnt =0;
    for (int i = 0; i  < s.size();i++){
        if (s[i]=='a'){
            cnt++;
        }
        if (s[i]== 'o'){
            cnt++;
        }
        if (s[i]== 'i'){
            cnt++;
        }
        if (s[i]== 'u'){
            cnt++;
        }
        if (s[i]== 'e'){
            cnt++;
        }

    }
    cout << cnt;
    
    return 0;
}