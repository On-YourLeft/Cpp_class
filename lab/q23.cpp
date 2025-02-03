//Program to determine whether a given number is prime or not

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number you want to check : ";
    cin>>num;
    int remod=0;
    for (int i=2;i<num;i++)
    {
        if ((num%i)==0)
        {
            remod+=1;
        }
    }
    if (remod == 0)
    {
        cout<<"The number is a prime number.";
    }
    else
    {
        cout<<"The number is not a prime number. ";
    }
    return 0;
}