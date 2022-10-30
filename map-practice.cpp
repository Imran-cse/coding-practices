#include <map>
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  unordered_map<string, string> m;
  m["frist"] = "firstValue";
  m["third"] = "thirdValue";
  m.insert({"second", "secondValue"});

  unordered_map<string, string>::iterator it;
  for (it = m.begin(); it != m.end(); ++it)
  {
    cout << (*it).first << " " << (*it).second << endl;
  }
}