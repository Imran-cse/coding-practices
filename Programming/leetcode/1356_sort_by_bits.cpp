#include <bits/stdc++.h>
using namespace std;

class Compare
{
public:
  bool operator()(pair<int, int> a, pair<int, int> b)
  {
    if (a.first == b.first)
    {
      return a.second > b.second;
    }
    return a.first > b.first;
  }
};

int main()
{
  vector<int> arr = {1111, 7644, 1107, 6978, 8742, 1, 7403, 7694, 9193, 4401, 377, 8641, 5311, 624, 3554, 6631};
  vector<int> result;
  priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

  for (int i = 0; i < arr.size(); i++)
  {
    int count = 0;
    int n = arr[i];
    while (n > 0)
    {
      n = n & (n - 1);
      count++;
    }
    pq.push({count, arr[i]});
  }

  while (!pq.empty())
  {
    int value = pq.top().first;
    result.push_back(value);
    pq.pop();
  }

  return 0;
}