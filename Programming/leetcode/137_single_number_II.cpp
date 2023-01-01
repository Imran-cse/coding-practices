#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
  vector<int> sumArr(32, 0);

  for (int x : nums)
  {
    for (int i = 0; i < 32; i++)
    {
      int ith_bit = x & (1 << i);
      if (ith_bit)
        sumArr[i]++;
    }
  }

  for (int i = 0; i < 32; i++)
  {
    sumArr[i] = sumArr[i] % 3;
  }

  int result = 0;
  for (int i = 0; i < 32; i++)
  {
    result += (sumArr[i] * (1 << i));
  }

  return result;
}

int main()
{
  vector<int> arr = {2, 2, 3, 2};

  cout << singleNumber(arr) << endl;
  return 0;
}