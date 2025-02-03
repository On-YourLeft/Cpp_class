//Program to simulate an ATM machine using switch statement, with options for withdrawal, deposit, balance, enquiry and exit, with error handling for invalid input and insufficient balance.

#include <iostream>
#include <cmath>

using namespace std;

struct people{
    string name;
    double balance;
}pap;

int main()
{
    int choca;
    cout<<endl<<"Enter Account Holder name : ";
    getline(cin,pap.name);
    pap.balance = 0.00 ;
    choices:
    cout<<endl<<"================= ATM MENU ================="<<endl<<"1. Withdrawal\n2. Deposit\n3. Balance Enquiry\n4. Exit"<<endl;
    cout<<"State your choice : ";
    cin>>choca;
    if (choca == 1)
    {
        double amount;
        if(pap.balance == 0.00)
        {
            cout<<endl<<"Error! Balance in account is 0.00 Rs. !"<<endl;
            goto choices;
        }
        else
        {
            withdra:
            cout<<"Enter the withdrawal amount : ";
            cin>>amount;
            if (amount<=0.00)
            {
                cout<<"Invalid input."<<endl;
                goto withdra;
            }
            if (amount>pap.balance)
            {
                cout<<"Error! Insufficient Balance!"<<endl;
                goto withdra;
            }
            else
            {
                cout<<"Rs. "<<amount<<" is withdrawed."<<endl;
                pap.balance -= amount;
                goto choices;
            }
        }
    }
    else if (choca == 2)
    {
        double amount;
        cout<<"Account Balance : "<<pap.balance<<" Rs."<<endl;
        depop:
        cout<<"Enter the amount you want to deposit : ";
        cin>>amount;
        if (amount<=0)
        {
            cout<<"Invalid amount!"<<endl;
            goto depop;
        }
        else 
        {
            pap.balance+=amount;
            cout<<"Account Balance : "<<pap.balance<<" Rs."<<endl;
            goto choices;
        }
    }
    else if (choca == 3)
    {
        cout<<"Account Balance : "<<pap.balance<<" Rs."<<endl;
        goto choices;
    }
    else if (choca == 4)
    {
        cout<<"You chose to exit, Goodbye!"<<endl;
    }
    else
    {
        cout<<"Invalid choice.";
        goto choices;
    }
    return 0;
}