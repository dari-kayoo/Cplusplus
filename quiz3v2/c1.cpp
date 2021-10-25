#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, char> m;
    char o;
    char t, y;
    int l, f;
    for(int i =0; i < n;i++){
        
        cin >> o;
        cin >> t >> l >> y >> f;
        m[t] = l;
        m[y] = f;
    }
    map<int, char> :: iterator it;
    
    for (int i =0; i < n; i++){
        if (o = '+'){
            cout << m[t] << " + " << m[y] << " = " << l+f << endl;
        } else if (o = '+'){
            cout << m[t] << " * " << m[y] << " = " << l*f << endl;
        } else if (o = '+'){
            cout << m[t] << " - " << m[y] << " = " << l-f << endl;
        }

    }
    return 0;
}