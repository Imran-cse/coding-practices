#include <bits/stdc++.h>
using namespace std;

int main()
{
  string pattern = "abba", s = "dog cat cat dog";
  unordered_map<string, int> countMap;

  char *ptr = strtok(s, " ");

  while (ptr != NULL)
  {
    cout << ptr << endl;
  }

  return 0;
}