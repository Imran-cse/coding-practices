#include <bits/stdc++.h>
using namespace std;

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
  for (auto i = 0; i < size; i++)
    cout << A[i] << " ";
  cout << endl;
}

void merge(int array[], int const left, int const right, int mid)
{
  auto const subArrayOne = mid - left + 1;
  auto const subArrayTwo = right - mid;

  // Creating temp arrays
  auto *leftArray = new int[subArrayOne];
  auto *rightArray = new int[subArrayTwo];

  // copy data to temp arrays
  for (auto i = 0; i < subArrayOne; i++)
  {
    leftArray[i] = array[left + i];
  }
  for (auto j = 0; j < subArrayTwo; j++)
  {
    rightArray[j] = array[mid + 1 + j];
  }

  // initial index of two sub arrays
  auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
  int indexOfMergedArray = left;

  // merge the temp array back int array[left....right]
  while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
  {
    if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
    {
      array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
      indexOfSubArrayOne++;
    }
    else
    {
      array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
      indexOfSubArrayTwo++;
    }
    indexOfMergedArray++;
  }

  // copy the remaining elements of left[], if there any
  while (indexOfSubArrayOne < subArrayOne)
  {
    array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
    indexOfMergedArray++;
    indexOfSubArrayOne++;
  }
  // copy the remaining elements of right[], if there any
  while (indexOfSubArrayTwo < subArrayTwo)
  {
    array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
    indexOfMergedArray++;
    indexOfSubArrayTwo++;
  }

  delete[] leftArray;
  delete[] rightArray;
}

void mergeSort(int array[], int left, int right)
{
  if (left >= right)
    return;

  int mid = left + (right - left) / 2;
  mergeSort(array, left, mid);
  mergeSort(array, mid + 1, right);
  merge(array, left, right, mid);
}

int main()
{
  int arr[] = {12, 11, 13, 5, 6, 7};
  auto arr_size = sizeof(arr) / sizeof(arr[0]);

  cout << "Given array is \n";
  printArray(arr, arr_size);

  mergeSort(arr, 0, arr_size - 1);

  cout << "\nSorted array: \n";
  printArray(arr, arr_size);
}