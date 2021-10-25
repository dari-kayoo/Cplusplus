#include <iostream>
//#include <string>
using namespace std;
int reverseArr(int a[], int n)
{
    return a[n - 1];
}
int main()
{
    int n;
    cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (n != 0)
    {
        cout << reverseArr(arr, n--) << " ";
    }
    return 0;
}