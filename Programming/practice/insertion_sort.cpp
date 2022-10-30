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
  int arr[5] = {12, 11, 13, 5, 6};
  int arr_size = 5;
  int temp, key_element;

  for (int i = 1; i < arr_size; i++)
  {
    int key_element = arr[i];
    int j = i - 1;
    while (j >= 0 && key_element < arr[j])
    {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key_element;
    print_arr(arr, 5);
  }
}