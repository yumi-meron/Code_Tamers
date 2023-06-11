#include<iostream>

using namespace std;

double multiProd(double a=1,double b=1,double c=1,double d=1,double e=1,double f=1);

int main()
{
    double a,b,c,d,e,f;
    cout<<"Enter a number"<<endl;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<multiProd(a,b,c,d,e,f);
}

double multiProd(double a,double b,double c,double d,double e,double f)
{
    return a*b*c*d*e*f;
}