//Program to check if year is leap year

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter the year you want to check : ";
    cin>>year;
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                cout<<"It is a leap year. "<<endl;
            }
            else
            {
                cout<<"It is not a leap year."<<endl;
            }
        }
        else
        {
            cout<<"It is a leap year."<<endl;
        }
    }
    else
    {
        cout<<"It is not a leap year."<<endl;
    }

    return 0;
}