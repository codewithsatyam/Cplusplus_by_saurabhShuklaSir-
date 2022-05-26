/******************************************************************************
Write a C++ program to calculate factorial of a number.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int fact=1;
    int num;
    cout<<"Enter the number to find its Factorial:";
    cin>>num;
    while(num){
        fact=fact*num;
        num--;
    }
    cout<<"Factorial of given no is:"<<fact;

    return 0;
}

/***************
output:
Enter the number to find its Factorial:5
Factorial of given no is:120 
***************/
