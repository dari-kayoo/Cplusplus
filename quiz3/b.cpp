#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ar[101];
    set <string> m;
    for (int i=0;i<n; i++)
    {
    cin>>ar[i];
    }
    int cnt = 0,k=0;

    for(int i=n-1;i>=0;i--)
    {
        for (int j=i+1;j<n; j++)
        {
            if(ar[i]==ar[j]){
                cnt++;
                ar[i]='...';
            }

        }
           if(cnt > 0){
           cout << ar[i]<< endl; 
    }
    k=k+cnt;
    cnt =0;
    }
    if(k== 0){
        cout << "Understandable, have a great day";
    }
    
    
    return 0;
}