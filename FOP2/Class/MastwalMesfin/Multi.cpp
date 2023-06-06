#include<iostream>

using namespace std;

float mult(float a,float b);

int main()
{
    float a,b;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"Enter a number "<<endl;
    cin>>b;
    cout<<mult(a,b);
}

float mult(float a,float b)
{
    return a*b;
}