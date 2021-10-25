/*#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> fir;
    map<string, int> sec;
    map < string, int > m;
    for (int i = 0; i < n; i++){
        string name1, name2;
        int point1, point2;
        cin >> name1 >> point1 >> name2 >> point2;
        fir[name1]+=point1;
        sec[name2]+= point2;
        m[make_pair(name1, point1)] = make_pair(name2, point2);
    }
    for (auto i:m){
        cout <<i.first << " and " << i.second << endl;
    }
    return 0;
}*/