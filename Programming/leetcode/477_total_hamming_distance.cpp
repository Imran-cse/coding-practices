#include <bits/stdc++.h>
using namespace std;

int countBit(int n)
{
  int count = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    count++;
  }
  return count;
}

int main()
{
  vector<int> nums = {4, 14, 2};
  int count = 0, value;

  for (int i = 0; i < nums.size() - 1; i++)
  {
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (i == j)
        continue;
      value = nums[i] xor nums[j];
      count += countBit(value);
    }
  }
  cout << count << endl;

  return 0;
}