#include <iostream>
#include <cmath>

using namespace std;

int reverso(int a);

int main()
{
    int num;
    cout<<"Enter the number whose reverse you're looking for : ";
    cin>>num;
    cout<<"The reverse of the number "<<num<<" is : "<<reverso(num);
    return 0;
}

int reverso(int numero)
{
    int x,actuo=0,tempo=0;
    while (numero!=0)
    {
        x=numero%10;
        tempo = (tempo*10)+x;
        numero/=10;
    }
    return tempo;
}