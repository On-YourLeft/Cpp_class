//Program to quadratic eqn using conditional statements to handle all possible cases (real and distinct, real and equal, complex)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,disco,root1,root2;
    cout<<"Enter the value of 'a' (ax^2 + bx + c = 0) : ";
    cin>>a;
    cout<<"Enter the value of 'b' (ax^2 + bx + c = 0) : ";
    cin>>b;
    cout<<"Enter the value of 'c' (ax^2 + bx + c = 0) : ";
    cin>>c;

    disco = pow(b,2) - 4*a*c ;

    if (disco > 0)
    {
        cout<<"The roots are real and unequal. "<<endl;
        root1 = (-b + sqrt(disco)) / 2*a ;
        root2 = (-b - sqrt(disco)) / 2*a ;
        cout<<"The roots of the equation "<<a<<"x^2 + "<<b<<"x + "<<c<<" are '"<<root1<<"' and '"<<root2<<"' .";
    }
    else if (disco==0)
    {
        cout<<"The roots are real and equal. "<<endl;
        root1 = (-b + sqrt(disco)) / 2*a ;
        root2 = (-b - sqrt(disco)) / 2*a ;
        cout<<"The roots of the equation "<<a<<"x^2 + "<<b<<"x + "<<c<<" are "<<root1<<" and "<<root2<<" .";
    }
    else
    {
        cout<<"The roots are complex. "<<endl;
    }
    return 0;
}