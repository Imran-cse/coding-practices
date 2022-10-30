#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, m;
  cin >> t;

  while (t)
  {
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if ((i == 0 && j == 0 && i != 1 && j != 1) || (a[i - 1][j] == 0 && a[i][j + 1] == 0) || (a[i - 1][j] == 0 && a[i + 1][j] == 0) || (a[i - 1][j] == 0 && a[i][j - 1] == 0) || (a[i + 1][j] == 0 && a[i][j + 1] == 0) || (a[i][j - 1] == 0 && a[i][j + 1] == 0) || (a[i + 1][j] == 1 && a[i][j - 1] == 1))
        {
          a[i][j] = 1;
        }
        else
        {
          a[i][j] = 0;
        }
        cout << a[i][j] << " ";
        if (j == m - 1)
        {
          cout << endl;
        }
      }
    }

    t--;
  }

  return 0;
}