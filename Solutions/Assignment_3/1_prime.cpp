/******************************************************************************

Write a C++ program to check whether a given number is Prime or not.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int num, i;
  cout << "Enter a given number:";
  cin >> num;
  for (i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      cout << "Not Prime";
      break;
    }
  }
  if (i == ((num + 1) / 2))
    cout << "Prime";

  return 0;
}

/***********
output:
Enter a given number:13
Prime

Enter a given number:45
Not Prime
************/
