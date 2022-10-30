#include <bits/stdc++.h>
using namespace std;

int main()
{
  string secret = "1123";
  string guess = "0111";
  map<char, int> sec, gue;

  int bulls = 0, cows = 0;
  for (int i = 0; i < secret.length(); i++)
  {
    if (secret[i] == guess[i])
    {
      bulls++;
    }
    else
    {
      sec[secret[i]]++;
      gue[guess[i]]++;
    }
  }

  for (auto i : sec)
  {
    int x = gue[i.first];
    int y = sec[i.first];
    cout << x << " " << y << endl;
    cows += min(x, y);
  }
  string ans;
  ans += to_string(bulls) + "A" + to_string(cows) + "B";

  cout << ans << endl;
  return 0;
}