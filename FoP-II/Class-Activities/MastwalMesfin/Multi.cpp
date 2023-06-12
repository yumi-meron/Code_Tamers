#include<iostream>

using namespace std;

float mult();

int main()
{
    cout<<mult();
}

float mult()
{
    float a,b;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"Enter a number "<<endl;
    cin>>b;
    return a*b;
}