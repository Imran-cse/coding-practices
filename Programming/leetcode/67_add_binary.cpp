#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a = "1010", b = "1011";
  string res;
  int carry = 0;
  int i = a.length() - 1;
  int j = b.length() - 1;

  while (i >= 0 || j >= 0)
  {
    int sum = carry;
    if (i >= 0)
      sum += a[i--] - '0';
    if (j >= 0)
      sum += b[j--] - '0';

    carry = sum > 1 ? 1 : 0;
    res += to_string(sum % 2);
  }
  if (carry)
    res += to_string(carry);
  reverse(res.begin(), res.end());
  cout << res << endl;
  return 0;
}