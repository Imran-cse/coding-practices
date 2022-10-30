#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {4, 1, 2, 1, 2};
  int res = 0;

  for (auto i : nums)
  {
    res = res xor i;
  }

  return 0;
}