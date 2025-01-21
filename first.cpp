#include <iostream>
using namespace std;

/*int main()
{
    int i=20,j=30;
    cout<<"Hello"<<i<< endl <<j<<"world";
    return 0;
}*/

/*int main()
{
    int i,j;
    cin>>i>>j;
    cout<<"The value of i is:"<<i<< endl <<"and the value of j is:"<<j;
    return 0;
}*/

int main()
{
    string firstname,lastname;
    cout << "Enter your first name : ";
    cin >> firstname;
    cout << "Enter your last name : ";
    cin >> lastname;
    cout << "The name you entered is : "<< firstname  + " " + lastname ;
    return 0;
}

/*int main()
{
    for (int i=0;i<10;i++)
    {
        if (i%2==0)
        {
            std::cout<<"Hello"<<std::endl;
            continue;
        }
        else if (i==2||i==4||i==6)
        {
            std::cout<<"Yay";
        }
    }
    return 0;
}*/