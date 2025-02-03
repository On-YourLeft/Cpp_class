//Reads and outputs user name and age

#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter you age : ";
    cin>>age;
    cout<<"Hello, "<<name<<" you are "<<age<<" years old."<<endl;
    return 0;
}