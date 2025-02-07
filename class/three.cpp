#include <iostream>

using namespace std;

int factos(int numero);

int main()
{
    int num;
    cout<<"Enter the number whose factorial you want : ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is : "<<factos(num);
    return 0;
}

int factos(int numero)
{
    int factas=1;
    for (int i=1;i<=numero;i++)
    {
        factas*=i;
    }
    return factas;
}