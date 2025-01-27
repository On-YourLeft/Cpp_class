//Program to create a simple Menu driven calculator 

#include <iostream>

using namespace std;

int menu();

int main()
{
    operation:
    int x=menu();
    if (x==1)
    {
        
    }
    
}

int menu()
{
    int what;
    cout<<"========== CALCULATOR MENU =========="<<endl;
    cout<<"1. Add\n2. Subtract\n3. Multiply \n4. Division\n5. Find the Logarithmic Value\n6. Find the Square Root";
    check:
    cout<<"Enter Your choice : ";
    cin>>what;
    return what;
}

