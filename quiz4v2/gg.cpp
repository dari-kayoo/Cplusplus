#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    cout << '\n';
}
 

void merge(int X[], int Y[], int m, int n)
{
    for (int i = 0; i < m;  i++)
    {
      
        if (X[i] > Y[0])
        {
            swap(X[i], Y[0]);
            int first = Y[0];
            int k;
            for (k = 1; k < n && Y[k] < first; k++) {
                Y[k - 1] = Y[k];
            }
 
            Y[k - 1] = first;
        }
    }
}
 
int main()
{
    int m, n;
    cin >> m;
    int x[m];
    int y[n];
 
    for (int i =0; i < m; i++){
        cin >> x[i];
    } 
    cin >> n;
    for (int i =0; i < n; i++){
        cin >> y[i];
    }
    merge(x, y, m, n);
 
     printArray(x, m);
     printArray(y, n);
 
    return 0;
}