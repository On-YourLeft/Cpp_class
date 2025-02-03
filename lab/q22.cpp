//Program to generate first n fibonacci numbers 

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"How many numbers of the fibonacci series do you want?\nEnter : ";
    cin>>num;
    int arro[num];
    cout<<"The fibonacci series number till "<<num<<" are : ";
    int numon=0;
    arro[0]=0;
    arro[1]=1;
    for (int i=2;i<num;i++)
    {
        arro[i] = arro[i-1] + arro[i-2] ;
    }
    for (int i=0;i<num;i++)
    {
        cout<<arro[i];
        if (i==(num-1))
        {
            continue;
        }
        else
        {
            cout<<" , ";
        }
    }
    return 0;
}