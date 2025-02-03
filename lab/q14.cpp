//Program to check if a triangle is valid and determining it's type

#include <iostream>

using namespace std;

int main()
{
    int side1,side2,side3;
    cout<<"Enter the first side of the triangle : ";
    cin>>side1;
    cout<<"Enter the second side of the triangle : ";
    cin>>side2;
    cout<<"Enter the third side of the triangle : ";
    cin>>side3;
    if (side1>0 && side2>0 && side3>0 && side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
    {
        if ((side1==side2)&&(side2==side3))
        {
            cout<<"The sides make an equilateral triangle.";
        }
        else if(((side1==side2)&&(side2!=side3))||((side1==side3)&&(side3!=side2))||((side2==side3)&&(side1!=side3)))
        {
            cout<<"The sides make an isosceles triangle.";
        }
        else if((side1!=side2)&&(side2!=side3))
        {
            cout<<"The sides make a scalene triangle.";
        }
    }
    else
    {
        cout<<"The side entered are invalid!"<<endl;
    }
}