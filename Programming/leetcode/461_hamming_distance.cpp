#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x = 1, y = 4, count = 0;
  int res = x xor y;

  while (res > 0)
  {
    res = res & (res - 1);
    count++;
  }

  cout << count << endl;

  return 0;
}