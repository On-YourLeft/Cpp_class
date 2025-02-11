#include <iostream>

using namespace std;

/*void greet(string fname,string mname=" ",string lname="")
{
    cout<<"Hello "<<fname<<" "<<mname<<" "<<lname<<endl;
}

int main()
{
    greet("ayush");
    greet("arbab","","Ansari");
}*/

/*int addon(int num1,int num2,int num3=0,int num4=0)
{
    return num1+num2+num3+num4;
}

int main()
{
    cout<<addon(1,2);
}*/

//Polymorphism

int area(int num)
{
    return num*num;
}

float area(float num1,float num2)
{
    return (0.5*num1*num2);
}

int main()
{
    cout<<area(2)<<endl;
    cout<<area(4.2,6.5)<<endl;
}