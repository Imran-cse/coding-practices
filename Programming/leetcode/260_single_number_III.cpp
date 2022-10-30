#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {0, 0, 1, 2};

  int result = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    result = result xor nums[i];
  }

  int pos = 0, temp = result;
  while ((temp & 1) == 0)
  {
    pos++;
    temp = temp >> 1;
  }

  int setA = 0, setB = 0;
  int mask = 1 << pos;

  for (int i = 0; i < nums.size(); i++)
  {
    if ((nums[i] & mask) > 0)
    {
      setA = setA xor nums[i];
    }
    else
    {
      setB = setB xor nums[i];
    }
  }

  cout << setA << " " << setB << endl;

  return 0;
}