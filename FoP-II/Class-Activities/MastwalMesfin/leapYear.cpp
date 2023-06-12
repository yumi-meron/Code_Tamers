#include<iostream>
#include<string>

using namespace std;

string yearLeap(int year);

int main()
{
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;
    cout<<yearLeap(year);
}

string yearLeap(int year)
{
    int reT;
    reT=year%4;
    if(reT==0&&reT%100==0)
    {
        return "It is a leap year";
    }
    else
    {
        return "It is not a leap year";
    }
}
