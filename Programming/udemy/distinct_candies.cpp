#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> candies = {1, 1, 2, 2, 3, 3};
  set<int> candy_type_arr;
  for (auto &&i : candies)
  {
    candy_type_arr.insert(i);
  }

  cout << candy_type_arr.size() << endl;

  return 0;
}