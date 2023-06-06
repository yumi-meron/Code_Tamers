#include<iostream>

using namespace std;

bool yearLeap(int year);

int main()
{
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;
    cout<<yearLeap(year);
}

bool yearLeap(int year)
{
    int reT;
    reT=year%4;
    if(reT==0&&reT%100==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
