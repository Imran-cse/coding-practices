#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, k;
  cin >> t;

  while (t)
  {
    cin >> n >> k;
    bool printed = false;
    for (int i = 2; i <= n; i += 2)
    {
      if (((i - 1 + k) * i) % 4 == 0)
      {
        if (!printed)
        {
          cout << "YES" << endl;
          printed = true;
        }
        cout << i - 1 << " " << i << endl;
      }
      if (((i + k) * (i - 1)) % 4 == 0)
      {
        if (!printed)
        {
          cout << "YES" << endl;
          printed = true;
        }

        cout << i << " " << i - 1 << endl;
      }
    }

    if (!printed)
    {
      cout << "NO" << endl;
    }

    t--;
  }

  return 0;
}