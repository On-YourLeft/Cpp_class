#include <iostream>

using namespace std;

int main()
{
    int length,breadth,area,perimeter;
    cout<<"Enter the length of the rectangle : ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle : ";
    cin>>breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    cout<<"The perimeter of the rectangle with inputted dimensions is : "<<perimeter<<endl;
    cout<<"The area of the rectangle with inputted dimensions is : "<<area<<endl;
    return 0;
}