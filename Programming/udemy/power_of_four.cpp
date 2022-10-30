#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 16;

  bool yes = int(log(n) / (log(4))) == log(n) / (log(4));

  cout << yes << endl;

  return 0;
}