#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v);

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int no_of_array, no_of_query;
  cin >> no_of_array >> no_of_query;

  vector<int> array_holder[no_of_array];
  for (int i = 0; i < no_of_array; i++)
  {
    int array_length;
    cin >> array_length;
    for (int j = 0; j < array_length; ++j)
    {
      int temp;
      cin >> temp;
      array_holder[i].push_back(temp);
    }
  }

  for (int i = 0; i < no_of_query; i++)
  {
    int arr_index, query_index;
    cin >> arr_index >> query_index;
    cout << array_holder[arr_index][query_index] << endl;
  }

  return 0;
}

void printVector(vector<int> &v)
{
  cout << "size: " << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}