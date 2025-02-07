#include <iostream>

using namespace std;

int max(int a, int b);

int main()
{
    int num1,num2;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;
    if (max(num1,num2)==0)
    {
        cout<<num1<<" (first) is greater than "<<num2<<" (second)."<<endl;
    }
    else if (max(num1,num2)==1)
    {
        cout<<num2<<" (second) is greater than "<<num1<<" (first)."<<endl;
    }
    else
    {
        cout<<"They are Equal"<<endl;
    }
}

int max(int a,int b)
{
    if (a>b)
    {
        return 0;
    }
    else if(b>a)
    {
        return 1;
    }
    else 
    {
        return 2;
    }
}