#include <bits/stdc++.h>
using namespace std;
bool isPrime(int t){
    if (t == 1){
        return false;
    }
    for (int i = 2 ; i  < sqrt(t);i++){
        if (t%i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    int k;
    cin >> k;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > k and isPrime(a[i]))
    {
        cnt++;
       
    }
        
    }
    cout << cnt;
    
   
    

    return 0;
}