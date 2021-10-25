#include <iostream>

using namespace std;
int main()
{
    int s;
    cin >> s;

    int hour = s / 3600;

    int min = (s - hour * 3600) / 60;
    int sec = s - hour * 3600 - min * 60;

    cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}