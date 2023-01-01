#include <bits/stdc++.h>
using namespace std;

int main()
{
  int left = 5, right = 7;
  int res, diff = right - left, value;

  if ((left & right) == 0 || ((diff - 1) > left))
  {
    return 0;
  }
  else
  {
    for (int i = 0; i < 32; i++)
    {
      value = (1 << i);
      if (value > left && value <= right)
      {
        return 0;
      }
      if (value > left && value > right)
      {
        if (diff == 1)
        {
          return left & (left + 1);
        }
        else
        {
          return left;
        }
      }
    }
  }
  return 0;
}