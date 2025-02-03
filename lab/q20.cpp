//Program to create a simple Menu driven calculator 

#include <iostream>
#include <cmath>

using namespace std;

int menu();
void addito();
void multo();
void subtro();
void divodo();
void loga();
void rooton();

int main()
{
    operation:
    int x=menu();
    switch (x)
    {
        case 1:
        {
            addito();
            goto operation;
        }
        break;

        case 2:
        {
            subtro();
            goto operation;
        }
        break;

        case 3:
        {
            multo();
            goto operation;
        }
        break;

        case 4:
        {
            divodo();
            goto operation;
        }
        break;

        case 5:
        {
            loga();
            goto operation;
        }
        break;

        case 6:
        {
            rooton();
            goto operation;
        }
        break;

        case 7:
        {
            return 0;
        }

        default:
        {
            cout<<"Invalid input!";
            goto operation;
            break;
        }
        
    }
    return 0;    
}

int menu()
{
    int what;
    cout<<endl<<"============= CALCULATOR ============="<<endl;
    cout<<"1. Add\n2. Subtract\n3. Multiply \n4. Division\n5. Find the Logarithmic Value\n6. Find the Square Root\n7. Exit"<<endl;
    check:
    cout<<"Enter Your choice : ";
    cin>>what;
    return what;
}

void addito()
{
    double x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"The sum of the two numbers is : "<<x+y<<endl;
}

void subtro()
{
    double x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"The difference of the second number from the first number is : "<<x-y<<endl;
}

void multo()
{
    double x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"The  multiplication of the numbers is : "<<x*y<<endl;
}

void divodo()
{
    double x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"The division of the first number by the second number is : "<<x/y<<endl;
}

void loga()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"The logarithm of the number is : "<<log(num)<<endl;
}

void rooton()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"The square root of the number is : "<<sqrt(num)<<endl;
}