/******************************************************************************

Write a C++ program to print Prime numbers between two given numbers.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, i;
  cout << "Enter a two numbers:";
  cin >> num1 >> num2;
  for (; num1 <= num2; num1++)
  {
    for (i = 2; i <= num1 / 2; i++)
    {
      if (num1 % i == 0)
      {
        // cout<<"Not Prime";
        break;
      }
    }
    if (i == (num1 + 1) / 2)
      cout << num1 << " ";
  }
  return 0;
}

/***********
output:
Enter a two numbers:10 30
11 13 17 19 23 29
************/
