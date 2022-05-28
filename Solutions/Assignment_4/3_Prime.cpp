// Write a function to check whether a given number is Prime or not.
// Return 1 if number is Prime, otherwise return O. (TSRS)

#include <iostream>
using namespace std;
int Prime(int);
int main()
{
    int num;

    cout << "Enter a number:";
    cin >> num;

    cout << "Number is Prime(1) or Not_Prime(0):" << Prime(num);
    return 0;
}

int Prime(int n)
{

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
        else
            return 1;
    }
};

/***********
output:
Enter a number:22
Number is Prime(1) or Not_Prime(0):0

Enter a number:13
Number is Prime(1) or Not_Prime(0):1

************/

