//Write a function to check whether a given number is even or odd. 
//Return 1 if number is even, otherwise return O. (TSRS)

#include <iostream>
using namespace std;
int EvenOdd(int);
int main()
{
    int num;
    
    cout<<"Enter a number:";
    cin>>num;
    
     cout<<"Number is even(1) or Odd(0):"<<EvenOdd(num);
    return 0;
}

int EvenOdd(int n){
    if(n%2==0)
      return 1;
    else
     return 0;
    
};

/**********
output:
Enter a number:11
Number is even(1) or Odd(0):0

Enter a number:11
Number is even(1) or Odd(0):0

**********/

