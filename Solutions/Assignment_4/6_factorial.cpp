// Write a function to calculate factorial of a number. (TSRS)

#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int num;

    cout << "Enter a numbers to find factorial of :";
    cin >> num;

    cout << "Factorial of given no. is :" << factorial(num);
    return 0;
}

int factorial(int n)
{
    int fact = 1;
    while (n)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}

/********
output:
Enter a numbers to find factorial of :5
Factorial of given no. is :120

********/

