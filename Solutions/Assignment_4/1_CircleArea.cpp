//Write a function to calculate area of circle. (TSRS)

#include <iostream>
#define pi 3.14
using namespace std;
float circle(float);

int main()
{
    float radius,result;
    
    cout<<"Enter the radius of circle:";
    cin>>radius;
    
     cout<<"Area of circle:"<<circle(radius);
    return 0;
}

float circle(float r){
    float result= 2*(pi*r);
 
    return result;
    
};

/***********
output:
Enter the radius of circle:50
Area of circle:314
***********/

