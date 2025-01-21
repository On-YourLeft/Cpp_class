#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1,num2,divi;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    divi = num1/num2;
    cout<<"The division of the numbers is : "<<fixed<<setprecision(2)<<divi;
    return 0;
}