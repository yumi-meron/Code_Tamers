#include<iostream>
using namespace std;
int main()
{
    float Grade_Num;
    cout<<"Enter your result: ";
    cin>>Grade_Num;
    if(Grade_Num>=90)
    {
        cout<<"A+";
    }
    else if(90>Grade_Num && Grade_Num>=80)
    {
        cout<<"A";
    }
    else if(80>Grade_Num && Grade_Num>=75)
    {
        cout<<"B+";
    }
    else if(75>Grade_Num && Grade_Num>=60)
    {
        cout<<"B";
    }
    else if(60>Grade_Num && Grade_Num>=55)
    {
        cout<<"C+";
    }
    else if(55>Grade_Num && Grade_Num>=45)
    {
        cout<<"C";
    }
    else if(55>Grade_Num && Grade_Num>=30)
    {
        cout<<"D";
    }
    else if(30>Grade_Num)
    {
        cout<<"F";
    }
    else if(Grade_Num<0)
    {
        cout<<"The Value you entered is not allowed";
    }
    else
    {
        cout<<"The Value is not a number";
    }
}