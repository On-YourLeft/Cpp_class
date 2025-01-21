#include <iostream>

using namespace std;

void withtempo(int num1, int num2 ,int tempo);
void withnotempo(int num1,int num2);


int main()
{
    int num1,num2,tempo=0,choice;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"How do you wanna swap the numbers?\n1.Using temporary variable\n2.Without using temporary variable\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        withtempo(num1,num2,tempo);
        break;

        case 2:
        withnotempo(num1,num2);
        break;

        default:
        cout<<"Error 404!";
        break;
    }
    return 0;
}

void withtempo(int num1, int num2 ,int tempo)
{
    tempo = num1;
    num1=num2;
    num2=tempo;
    cout<<"The swapped numbers are \nNumber 1 : "<<num1<<"\nNumber 2 : "<<num2<<endl;
}

void withnotempo(int num1,int num2)
{
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    cout<<"The swapped numbers without using temporary variable are\nNumber 1 : "<<num1<<"\nNumber 2 : "<<num2<<endl;
}