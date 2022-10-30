#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test_case, n;

  cin >> test_case;

  while (test_case--)
  {
    cin >> n;
    int arr[n];
    int result;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    result = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
      result = result xor arr[i];
    }
    cout << result << endl;
  }

  return 0;
}