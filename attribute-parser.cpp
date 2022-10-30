#include <vector>
#include <iostream>
using namespace std;

void printVector(vector<string> &v);

int main()
{
  int no_of_lines, no_of_queries;

  cin >> no_of_lines >> no_of_queries;
  vector<vector<string>> stringVector;
  for (int i = 0; i < no_of_lines; i++)
  {
    vector<string> temp;
    for (int j = 0;; j++)
    {
      string x;
      cin >> x;
      cout << x << endl;
      if (x == "\n")
      {
        cout << "came here" << endl;
        break;
      }
      temp.push_back(x);
    }
    stringVector.push_back(temp);
  }

  for (int i = 0; i < stringVector.size(); i++)
  {
    printVector(stringVector[i]);
  }
}

void printVector(vector<string> &v)
{
  cout << "size: " << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}