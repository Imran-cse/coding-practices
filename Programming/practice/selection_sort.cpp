#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[5] = {64, 25, 12, 22, 11};
  int min_index, temp;

  for (int i = 0; i < 4; i++)
  {
    min_index = i;
    for (int j = i + 1; j < 5; j++)
    {
      if (arr[j] < arr[min_index])
      {
        min_index = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }

  print_arr(arr, 5);

  return 0;
}