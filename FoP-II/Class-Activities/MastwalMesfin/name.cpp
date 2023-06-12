#include<iostream>

using namespace std;

// To demonstrate a function delcaration and function calling 

void nameFun();

int main()
{
    nameFun();
}

void nameFun()
{
    string name;
    cout<<"Enter a name "<<endl;
    cin>>name;
    cout<<"Hello "<<name<<"\nWelcome to MP";
}