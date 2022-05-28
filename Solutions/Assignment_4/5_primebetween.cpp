// Write a function to print all prime numbers between two given numbers. (TSRS)

#include <iostream>
using namespace std;
int primeBetween(int, int);
int main()
{
    int num1, num2;

    cout << "Enter a two numbers:";
    cin >> num1 >> num2;

    primeBetween(num1, num2);
    return 0;
}

int primeBetween(int n1, int n2)
{

    for (; n1 < n2; n1++)
    {
        for (int i = 2; i < n1 / 2; i++)
        {
            if (n1 % i == 0)
                break;
            else
            {
                cout << n1 << " ";
                break;
            }
        }
    }

    return 0;
}

/*********
output:

Enter a two numbers:10 20
11 13 15 17 19 

*********/

