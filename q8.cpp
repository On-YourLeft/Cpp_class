//Takes users full name and age and greets with how many days they have lived

#include <iostream>
#include <ctime> 
#include <chrono>

using namespace std;

int main()
{
    string name;
    int date,month,year;
    cout<<"May you state your name : ";
    getline(cin,name);
    cout<<"Enter your date of birth (DD MM YYYY) : " ;
    cin>>date>>month>>year;

    tm birthDate = {}; 
    birthDate.tm_mday = date; 
    birthDate.tm_mon = month - 1; 
    birthDate.tm_year = year - 1900; 
    time_t now = time(0); tm* nowTm = localtime(&now); 
    time_t birthTime = mktime(&birthDate); 
    time_t nowTime = mktime(nowTm); 
    double differenceInSeconds = difftime(nowTime, birthTime); 
    int differenceInDays = differenceInSeconds / (60 * 60 * 24); 
    cout << "Hello, " << name << "! You are " << differenceInDays << " days old." << endl;
    return 0;
}