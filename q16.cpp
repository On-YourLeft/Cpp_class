//Program to determine whether two integers are opposites in sign without using conditional operator

#include <iostream>

using namespace std;

int isopposite(int x,int y);

int main()
{
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    if (isopposite(num1,num2)==1)
    {
        cout<<"Signs are opposite .";
    }
    else 
    {
        cout<<"Signs are not opposite. ";
    }
    return 0;
}

int isopposite (int x ,int y)
{
    return ((x^y)<0);
}