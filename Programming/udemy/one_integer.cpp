#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
  cout << "size: " << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int solve(vector<int> nums)
{
  int sum = 0;
  sort(nums.begin(), nums.end());
  auto it = nums.begin();
  while (it != nums.end() - 1)
  {
    int min_sum = 0;
    min_sum += *it + *(++it);
    nums.erase(nums.begin(), nums.begin() + 2);
    nums.push_back(min_sum);

    printVector(nums);
    sort(nums.begin(), nums.end());
    sum += min_sum;
    it = nums.begin();
  }

  return sum;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};

  int sum = solve(nums);

  cout << sum << endl;

  return 0;
}