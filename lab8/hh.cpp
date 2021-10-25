#include <bits/stdc++.h>
using namespace std;
int mimi(int n, int t){
    return min(n, t);
}
int main (){
    int n;
    cin >> n;
    vector<int>a;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    int k;
    cin >> k;
    sort(a.begin(), a.end());
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}