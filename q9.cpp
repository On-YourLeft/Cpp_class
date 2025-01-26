//Program to input numbers and display them in a table with their types

#include <iostream>

using namespace std;

int main()
{
    char oneo;
    int numbo;
    float flato;

    cout<<"Enter the character : ";
    cin>>oneo;

    cout<<"Enter the integer : ";
    cin>>numbo;

    cout<<"Enter the floating-point number : ";
    cin>>flato;

    cout<<endl<<"Char  : "<<oneo<<endl;
    cout<<"Int   : "<<numbo<<endl;
    cout<<"Float : "<<flato<<endl;
    return 0;
}