#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    int cntup = 0;
    int cntlow = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
        cntup++;
        }

    }
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            cntlow++;
        }
    }
    cout << cntlow << " " << cntup;
    
    return 0;
}