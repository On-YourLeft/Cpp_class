#include <iostream>

using namespace std;

class Book
{
    string title ;
    string author ;
    string ISBN ;
    bool isIssued ;

    public:

    void displayBookDetails(string name, string person, string code, bool issue)
    {
        cout<<boolalpha;
        cout<<"The Title of the book is : "<<name<<endl;
        cout<<"The Author of the book is : "<<person<<endl;
        cout<<"The ISBN code of the book is : "<<code<<endl;
        cout<<"Is the book issued? : "<<issue<<endl;
    }

    void issued(string name, string code, bool issue)
    {
        if (issue)
        {
            cout<<"Book "<<name<<" is issued of ISBN code : "<<code<<endl;
            issue=false;
        }
        else
        {
            cout<<"The book "<<name<<" is not available!"<<endl;
        }
    }
};

int main()
{
    Book b1;
    b1.displayBookDetails("Brief History of Time","Stephen Hawking","76428",true);
    b1.issued("Mariah Mundi","t12u2",false);
}