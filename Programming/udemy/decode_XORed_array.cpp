#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> encoded = {1, 2, 3};
  vector<int> newArr;
  int first = 1;

  newArr.push_back(first);
  int temp = first;
  for (int i = 0; i < encoded.size(); i++)
  {
    int value = temp xor encoded[i];
    cout << value << endl;
    newArr.push_back(value);
    temp = value;
  }

  return 0;
}