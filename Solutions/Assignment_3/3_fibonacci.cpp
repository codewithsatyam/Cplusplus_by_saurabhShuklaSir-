/******************************************************************************

Write a C++ program to print first N terms of Fibonnacci Series.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int fib1 = 0, fib2 = 1;
    int fib3, count;
    cout << "Enter no to print fibonacci series upto:";
    cin >> count;
    while (count)
    {
        cout << fib1 << " ";
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        count--;
    }

    return 0;
}


/***********
output:
Enter no to print fibonacci series upto:5
0 1 1 2 3 
************/
