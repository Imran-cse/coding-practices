#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {1, 1, 0, 1, 1, 1};
  int max = 0, count = 0;

  for (auto i : nums)
  {
    if (i > 0)
      count++;
    else
      count = 0;
    if (max < count)
      max = count;
  }

  cout << max << endl;

  return 0;
}