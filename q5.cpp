#include <iostream>
#include <cmath>

using namespace std;

double yearly_inter(double time,double principal,double rate);
double half_yearly(double time,double principal,double rate);
double quarter(double time,double principal,double rate);
double montho(double time,double principal,double rate);
double weekla(double time,double principal,double rate);
double dalla(double time,double principal,double rate);


int main()
{
    double principal,rate,time;
    int choice;
    cout<<"Enter the principal amount : ";
    cin>>principal;
    cout<<"Enter the interest rate : ";
    cin>>rate;
    cout<<"Enter the number of years : ";
    cin>>time;
    whattodo:
    cout<<"How often do you want to compund the interest : "<<endl<<"1. Yearly \n2. Half-yearly\n3. Quarterly\n4. Monthly\n5. Weekly\n6. Daily\nEnter your choice : ";
    cin>>choice;
    switch (choice)
    {
        case 1:
        cout<<"The interest for this principal amount compunded annually is : "<< yearly_inter(time,principal,rate);
        break;

        case 2:
        cout<<"The interest for this principal amount compunded half-yearly is : "<<half_yearly(time,principal,rate);
        break;

        case 3:
        cout<<"The interest for this principal amount compunded quarterly is : "<<quarter(time,principal,rate);
        break;

        case 4:
        cout<<"The interest for this principal amount compunded monthly is : "<<montho(time,principal,rate);
        break;

        case 5:
        cout<<"The interest for this principal amount compunded weekly is : "<<weekla(time,principal,rate);
        break;

        case 6:
        cout<<"The interest for this principal amount compunded daily is : "<<dalla(time,principal,rate);
        break;

        default:
        cout<<"Invalid input.";
        goto whattodo;
        break;
    }
    return 0;
}

double yearly_inter(double time,double principal,double rate)
{
    double interest;
    interest = (principal*pow((1.0+rate/100.0),time))-principal;
    return interest;
}

double half_yearly(double time,double principal,double rate)
{
    double interest;
    interest = principal*pow((1.0+rate/200.0),2*time)-principal;
    return interest;
}

double quarter(double time,double principal,double rate)
{
    double interest;
    interest = principal*pow((1.0+rate/400.0),4*time)-principal;
    return interest;
}

double montho(double time,double principal,double rate)
{
    double interest;
    interest = principal*pow((1.0+rate/1200.0),12*time)-principal;
    return interest;
}

double weekla(double time,double principal,double rate)
{
    double interest;
    interest = principal*pow((1.0+rate/5200.0),52*time)-principal;
    return interest;
}

double dalla(double time,double principal,double rate)
{
    double interest;
    interest = principal*pow((1.0+rate/36500.0),365*time)-principal;
    return interest;
}