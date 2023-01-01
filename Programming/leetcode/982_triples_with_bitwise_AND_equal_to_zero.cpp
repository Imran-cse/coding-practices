#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {2, 1, 3};
  unordered_map<int, int> store;
  int arrSize = nums.size(), ans = 0;

  for (int i = 0; i < arrSize; i++)
  {
    for (int j = 0; j < arrSize; j++)
    {
      int val = nums[i] & nums[j];
      store[val]++;
    }
  }

  for (int i = 0; i < arrSize; i++)
  {
    for (auto itr : store)
    {
      if ((itr.first & nums[i]) == 0)
      {
        ans += itr.second;
      }
    }
  }

  return 0;
}