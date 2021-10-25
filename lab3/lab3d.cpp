#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    //obrabotka
    int maxi = -1000000000;
    int max_ind;
    for (int i = 0; i < n; i++){
        if (a[i] > maxi){
            maxi = a[i];
            max_ind = i + 1;
        }
    }
    cout << max_ind;


    return 0;
}