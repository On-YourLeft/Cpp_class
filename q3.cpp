#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    char opera;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the operation you wish to do : ";
    cin>>opera;
    switch (opera)
    {
        case '+':
        cout<<"The sum of numbers is : " << num1+num2;
        break;

        case '-':
        cout<<"The difference of first number and second number is : "<<num1-num2;
        break;

        case '*':
        cout<<"The multiplication of the numbers is : "<<num1*num2;
        break;

        case '/':
        cout<<"The division of first number from second number is : "<<num1/num2;
        break;

        default:
        cout<<"Invalid input.";
        break;
    }
    return 0;
}