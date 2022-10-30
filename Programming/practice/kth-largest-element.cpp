#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> nums, int k)
{
  priority_queue<int, vector<int>, greater<int>> pq;
  for (auto num : nums)
  {
    pq.push(num);
    if (pq.size() > k)
    {
      pq.pop();
    }
  }

  return pq.top();
}

int main()
{
  vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};

  int num = findKthLargest(nums, 4);
  cout << num << endl;

  return 0;
}