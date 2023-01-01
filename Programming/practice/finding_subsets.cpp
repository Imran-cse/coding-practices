#include <bits/stdc++.h>
using namespace std;

void overLayNumber(string arrStr, int num)
{
  int j = 0;
  while (num > 0)
  {
    int last_bit = num & 1;
    if (last_bit)
    {
      cout << arrStr[j];
    }

    j++;
    num = num >> 1;
  }
  cout << endl;
}

void generateAllSubsequences(string arrStr)
{
  int n = arrStr.length();

  for (int i = 0; i < (1 << n); i++)
  {
    overLayNumber(arrStr, i);
  }
}

int main()
{
  string arrStr = "hel";
  generateAllSubsequences(arrStr);
  return 0;
}