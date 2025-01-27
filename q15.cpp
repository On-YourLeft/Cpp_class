//Program to evaluate (a^b + c&d) where a,b,c and d are user inputs.

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,result;
    cout<<"Enter the value of 'a' : ";
    cin>>a;
    cout<<"Enter the value of 'b' : ";
    cin>>b;
    cout<<"Enter the value of 'c' : ";
    cin>>c;
    cout<<"Enter the value of 'd' : ";
    cin>>d;
    result = (a^b + c&d);
    cout<<"The result of a^b+c&d is : "<<result<<endl;
    return 0;
}