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

vector<int> findClosestElements(vector<int> arr, int k, int x)
{
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  vector<int> result;
  for (auto &&i : arr)
  {
    int diff = abs(x - i);
    pq.push({diff, i});
  }
  while (k--)
  {
    result.push_back(pq.top().second);
    pq.pop();
  }
  sort(result.begin(), result.end());

  return result;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  vector<int> vc = findClosestElements(arr, 4, 3);
  printVector(vc);
  return 0;
}