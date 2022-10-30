#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 2;
  for (int i = 0; i <= n; i++)
  {
    int count = 0;
    int num = i;
    while (num > 0)
    {
      num = num & (num - 1);
      count++;
    }
  }

  return 0;
}