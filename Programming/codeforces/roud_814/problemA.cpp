#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, m;
  cin >> t;
  while (t)
  {
    cin >> n >> m;
    if ((n % 2 == 0 && m % 2 == 0) || (n % 2 != 0 && m % 2 != 0))
    {
      cout << "Tonya" << endl;
    }
    else
    {
      cout << "Burenka" << endl;
    }

    t--;
  }

  return 0;
}