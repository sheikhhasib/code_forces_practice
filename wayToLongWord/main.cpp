
#include <iostream>
#include <string.h>
using namespace std;

string
myFunction (int kilo)
{
  if (kilo % 2 == 0)
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
  int n;
  cin >> n;
  while (n--)
    {
      string letter;
      cin >> letter;
      if (letter.length() < 11)
	{
	  cout << letter << "\n";
	}
      else
	{
	  cout << letter[0] << (letter.length() -
				2) << letter[letter.length() - 1] << "\n";
	}
    }

  return 0;
}
