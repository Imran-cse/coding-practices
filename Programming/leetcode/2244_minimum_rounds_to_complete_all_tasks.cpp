#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> tasks = {66, 66, 63, 61, 63, 63, 64, 66, 66, 65, 66, 65, 61, 67, 68, 66, 62, 67, 61, 64, 66, 60, 69, 66, 65, 68, 63, 60, 67, 62, 68, 60, 66, 64, 60, 60, 60, 62, 66, 64, 63, 65, 60, 69, 63, 68, 68, 69, 68, 61};
  unordered_map<int, int> holder;
  int count = 0;

  for (auto &&i : tasks)
  {
    holder[i] = 1;
  }

  cout << holder.size() << endl;

  for (auto &&i : holder)
  {
    cout << i.first << " " << i.second << endl;

    if (i.second % 2 == 1 && i.second % 3 == 1)
    {
      // cout << i.first << " " << i.second << endl;
      cout << -1 << endl;
      return -1;
    }
    else
    {
      if (i.second % 3 == 0 || i.second % 3 >= 2)
      {
        // cout << i.first << " " << i.second << endl;
        count += (i.second / 3);
        if (i.second % 3 != 0)
          count++;
      }
      else
      {
        count += (i.second / 2);
        if (i.second % 2 != 0)
          count++;
      }
    }
  }
  cout << count << endl;
  return count;
}