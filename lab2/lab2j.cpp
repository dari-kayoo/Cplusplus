#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        
        if (a[i] % 10 == 0){
            cnt ++;
        }  if (a[i]%100/10 == 0 && a[i]>9){
            cnt++;
        }  if (a[i]%1000/100 == 0 && a[i]>99){
            cnt++;
        }  if (a[i]%10000/1000 == 0 && a[i]>999){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}