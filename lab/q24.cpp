//Program to calculate factorial using do-while loop

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number you want the factorial of : ";
    cin>>num;
    int i=1,fact=1;
    do
    {
        fact*=i;
        i++;
    } while (i<=num);
    cout<<"The factorial of the number "<<num<<" is : '"<<fact<<"'";
    return 0;    
}