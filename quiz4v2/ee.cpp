#include <bits/stdc++.h>
using namespace std;
int myCompare(string date1, string date2)
{
    string day1 = date1.substr(0, 2);
    string day2 = date2.substr(0, 2);
    
    string month1 = date1.substr(2, 3);
    string month2 = date2.substr(2, 3);

    string year1 = date1.substr(4, 6);
    string year2 = date2.substr(4, 6);
 
    if (year1 < year2)
        return 1;
    if (year1 > year2)
        return 0;
 
    if (month1 < month2)
        return 1;
    if (month1 > month2)
        return 0;
 

    if (day1 < day2)
        return 1;
    if (day1 > day2)
        return 0;
  return 1;
}

void printDatesAscending(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);
 
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;
}
 
int main()
{
    int n;
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++){
        string t;
        cin >> t;
        arr.push_back(t);
    }
 
    printDatesAscending(arr);
 
    return 0;
}