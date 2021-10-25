#include <iostream>
using namespace std;
bool primeNumber(int n)
{
    int cnt = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cnt = 1;
            break;
        }
    }
    if (cnt == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int n, m = 1;
    int cnt = 0;
    cin >> n;
    while (true) {
        m++;
        if (primeNumber(m)) {
            cnt++;
        }
        if (cnt == n) {
            cout << m;
            break;
        }
    }
    return 0;
}