
#include <iostream>

using namespace std;

string
myFunction (int kilo)
{
  if (kilo % 2 == 0 && kilo > 2)
    {
      return "YES";
    }
  else
    {
      return "NO";
    }
}

int
main ()
{
  int number;
  cin >> number;
  string status = myFunction (number);
  cout << status << "\n";
  return 0;
}
