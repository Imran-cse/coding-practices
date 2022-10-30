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
  int arr[8] = {5, 3, 1, 9, 8, 2, 4, 7};
  int arr_size = 8;
  int temp;
  bool swapped;

  for (int i = 0; i < arr_size; ++i)
  {
    swapped = false;
    for (int j = 0; j < arr_size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
      print_arr(arr, arr_size);
    }
    if (swapped == false)
    {
      break;
    }
  }
}