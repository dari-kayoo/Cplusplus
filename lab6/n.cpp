#include <iostream>
//#include <string>
using namespace std;

int arr[1000][1000];

void transposedArr(int arr[1000][1000], int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    transposedArr(arr, n, m);
    return 0;
}