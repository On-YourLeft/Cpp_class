//Input two numbers and check if the first is multiple of the second

#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the first integer : ";
    cin>>num1;
    selection:
    cout<<"Enter the second integer : ";
    cin>>num2;
    if (num2==0)
    {
        cout<<"Division by zero is not allowed, invalid input."<<endl;
        goto selection;
    }
    
    {
        if (num1%num2 == 0)
        {
            cout<<"The first integer "<<num1<<" is surely a multiple of the second integer "<<num2<<" .";
        }
        else
        {
            cout<<"The first integer "<<num1<<" is not a multiple of the second integer "<<num2<<" .";
        }
    }
    return 0;
}