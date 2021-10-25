#include <bits/stdc++.h>
using namespace std;
bool val(string s, int n){
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '0'){
            cnt++;
        }
         else if (s[i] == '1'){
            cnt++;
        }
         else if (s[i] == '2'){
            cnt++;
        } else if (s[i] == '3'){
            cnt++;
        }
         else if (s[i] == '4'){
            cnt++;
        }
         else if (s[i] == '5'){
            cnt++;
        }
         else if (s[i] == '6'){
            cnt++;
        } else if (s[i] == '7'){
            cnt++;
        } else if (s[i] == '8'){
            cnt++;
        } else if (s[i] == '9'){
            cnt++;
        }

        
    }
    if (cnt >= n){
        return true;
    }
    else{
        return false;
    }
   
}
int main (){
    string s;
    cin >> s;
    int n;
    cin >> n;
    if (val(s,n) == true){
        cout << "YES";
    } else {
        cout << "NO";
    }

  
    return 0;
}