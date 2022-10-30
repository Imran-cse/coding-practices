#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
  bool found = false;
  for (int i = 0; i < s.length(); i++)
  {
    found = false;
    for (int j = 0; j < s.length(); j++)
    {
      cout << i << " " << j << endl;
      if (i != j && s[i] == s[j])
      {
        found = true;
        break;
      }
    }
    if (found == false)
    {
      cout << s[i] << s[3] << endl;
      return i;
    }
  }
  return -1;
}

int main()
{
  int res = firstUniqChar("codingminutes");

  cout << res << endl;

  return 0;
}