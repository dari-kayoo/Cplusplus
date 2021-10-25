#include <iostream>
#include <string>

using namespace std;


int main() 
{
  string word;
  cin >> word;

  string decrypted;
  for (auto ch:word)
  {
    char newCh = 122 - (ch - 97);
    decrypted.push_back(newCh);
  }

  cout << decrypted;

  return 0;
}