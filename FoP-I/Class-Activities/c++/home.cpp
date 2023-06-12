#include <iostream>
using namespace std;

int main()
{
    float x;
    cout<<"enter your result";
    cin>>x;
    if(x >= 90)
    {
        cout<<"A+";
    }
    else if(x >= 80)
    {
        cout<<"A";
    }
    else if(x >= 75)
    {
        cout<<"B+";
    }
     else if(x >= 60)
    {
        cout<<"B";
    }
     else if(x >= 55)
    {
        cout<<"C+";
    }
     else if(x >= 45)
    {
        cout<<"C";
    }
     else if(x >= 30)
    {
        cout<<"D";
    }
     else if(x < 30)
    {
        cout<<"F";
    }
    
    
}