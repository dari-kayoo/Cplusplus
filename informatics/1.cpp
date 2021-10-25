#include <iostream>
using namespace std;
int main()
{
  int n;
  double** a, ** b, ** c;
  cin >> n;
  a[n][n];
  for (int i = 0; i < n; i++)
  {
    a[i] = a[n];
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }

  b[n][n];
  for (int i = 0; i < n; i++)
  {
    b[i] = b[n];
    for (int j = 0; j < n; j++)
    {
      cin >> b[i][j];
    }
  }
 

  c[n][n];
  for (int i = 0; i < n; i++)
  {
    c[i] = c[n];
    for (int j = 0; j < n; j++)
    {
      c[i][j] = 0;
      for (int k = 0; k < n; k++)
        c[i][j] += a[i][k] * b[k][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << c[i][j] << " ";
    cout << endl;
  }
  return 0;
}
