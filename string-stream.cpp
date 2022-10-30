#include <bits/stdc++.h>
using namespace std;

int main()
{
  // string str = "17,5,87,23,24";
  string str = "12:05:45AM";
  stringstream s(str);

  // int word;
  // char ch;
  // int i = 0;

  // while (s >> word >> ch)
  // {
  //   cout << word << endl;
  // }
  // s >> word;
  // cout << word;

  int hour, min, sec;
  char delimeter;
  string zone;
  s >> hour >> delimeter >> min >> delimeter >> sec >> zone;
  if (zone == "PM" && hour < 12)
  {
    hour += 12;
  }
  else if (zone == "AM" && hour == 12)
  {
    hour = 0;
  }
  cout << hour << " " << min << " " << sec << " " << zone << endl;
  stringstream new_time;

  hour < 10 ? new_time << "0" << hour : new_time << hour;
  new_time << ":";
  min < 10 ? new_time << "0" << min : new_time << min;
  new_time << ":";
  sec < 10 ? new_time << "0" << sec : new_time << sec;

  // new_time << hour << ":" << min << ":" << sec;
  str = new_time.str();

  cout << str << endl;
}