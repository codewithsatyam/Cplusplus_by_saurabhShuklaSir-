/******************************************************************************

Write a C++ program to count digit in a number.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter a given number:";
    cin >> num;
    while (num)
    {
        num = num / 10;
        count++;
    }
    cout << "Number of digits is:" << count;

    return 0;
}

/************
output:
Enter a given number:5674
Number of digits is:4
************/
