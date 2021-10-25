#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    int r, l;
    cin >> r >> l;
    a.erase(a.begin()+ r, a.begin()+l+1);
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    return 0;
}