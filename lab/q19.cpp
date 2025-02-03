//Program to calculate grades of student by their marks

#include <iostream>

using namespace std;

int main()
{
    int marks;
    string name;
    cout<<"Enter the name of the student : ";
    getline(cin,name);
    cout<<"Enter the marks of the student : ";
    cin>>marks;
    if (marks>90 && marks<=100)
    {
        cout<<"The student "<<name<<" got 'A' grade! Congratulations! ";
    }
    else if (marks>75 && marks<=90)
    {
        cout<<"The student "<<name<<" got 'B' grade! Noice! ";
    }
    else if (marks>60 && marks<=75)
    {
        cout<<"The student "<<name<<" got 'C' grade! Good.";
    }
    else if (marks>40 && marks<=60)
    {
        cout<<"The student "<<name<<" got 'D' grade. :\\ ";
    }
    else if (marks>=0 && marks <=40)
    {
        cout<<"The student "<<name<<" is now a disgrace to Asian Parents. ";
    }
    return 0;
}