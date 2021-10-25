#include <bits/stdc++.h>
using namespace std;
int main (){
    string s, t;
    cin >> s >> t;
    bool flag = false;
    for (int i = 0; i < s.size(); i++){
        for (int j = 0; j < t.size(); j++){
            if (s[i] == t[j]){
               flag = true;
            } else {
                flag = false;
            }
        } 
    }
    if (flag == true){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}