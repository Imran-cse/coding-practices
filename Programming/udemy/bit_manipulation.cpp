#include <bits/stdc++.h>
using namespace std;

void checkOddEven(int a)
{
  if (a & 1)
    cout << "Odd" << endl;
  else
    cout << "Even" << endl;
}

int getIthBit(int n, int i)
{
  int mask = (1 << i);
  return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n, int i)
{
  int mask = (1 << i);
  n = n | mask;
}

void clearIthBit(int &n, int i)
{
  int mask = ~(1 << i);
  n = n & mask;
}

void updateIthBit(int &n, int i, int v)
{
  clearIthBit(n, i);
  int mask = (v << i);
  n = n | mask;
}

void clearLastIBits(int &n, int i)
{
  int mask = (-1 << i); // this can also be done with (~0 << i)
  n = n & mask;
}

void clearBitsInRange(int &n, int i, int j)
{
  int a = (~0) << (j + 1);
  int b = (1 << i) - 1;
  int mask = a | b;
  n = n & mask;
}

int count_bits(int n)
{
  int count = 0;
  while (n > 0)
  {
    int bit = (n & 1);
    count += bit;
    n = n >> 1;
  }

  return count;
}

int count_bits_hack(int n)
{
  int count = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    count++;
  }
  return count;
}

int converToBinary(int n)
{
  int num = 0;
  int p = 1;
  while (n > 0)
  {
    int last_bit = (n & 1);
    num += p * last_bit;
    p *= 10;
    n = n >> 1;
  }
  return num;
}

int main()
{
  int a = 13, i;
  // cin >> a >> i;
  // cout << getIthBit(a, i) << endl;
  // updateIthBit(a, i, 0);
  // clearLastIBits(a, i);
  // clearBitsInRange(a, i, 3);
  // int res = count_bits(a);
  int res = converToBinary(a);
  cout << res << endl;

  return 0;
}