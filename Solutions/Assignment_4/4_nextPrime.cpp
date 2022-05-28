// Write a function to find next Prime number of a given number. (TSRS)

#include <iostream>
using namespace std;
int nextPrime(int);
int main()
{
    int num;

    cout << "Enter a number:";
    cin >> num;

    cout << "Next Prime of the entered no is:" << nextPrime(num);
    return 0;
}

int nextPrime(int n)
{
    int p = n + 1;

    for (int i = 2; i < p; i++, p++)
    {
        if (p % i == 0)
            continue;
        else
            return p;
    }
};

/********
output:
Enter a number:13
Next Prime of the entered no is:17

*********/
