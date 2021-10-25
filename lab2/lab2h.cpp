#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    int a[n];
    int cnteven = 0, cntodd = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i]%2 == 0){
            cnteven++;
        }
        else{
            cntodd++;
        }
    }
    cout << cnteven << " " << cntodd;
   

    return 0;
}