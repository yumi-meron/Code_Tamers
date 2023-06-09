//identifying a year is leap year or not
#include <iostream>
using namespace std;

void leapy();

int main()
{
    leapy();
}

void leapy() {
    int year;
    cout<<"enter a year: ";
    cin>>year;
    cout<<((year%4==0 && year%100 != 0) || year%400==0);
}