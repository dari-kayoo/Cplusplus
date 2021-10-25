#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    set<string> v;
    while (cin >> s)
    {
        v.insert(s);
    }
    int wordCnt = 1;
    set <int> :: iterator it;
    for (int it = 1; it <= v.size() + 1; it++)
    {
        
        if (*it != s)
        {
            cout << s << " : " << wordCnt << endl;
            wordCnt = 0;
        }
        wordCnt++;
    }
    return 0;
}
