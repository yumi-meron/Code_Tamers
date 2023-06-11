#include<iostream>
#include<cmath>

using namespace std;

double sumCalc(double cubE,double sqR);
double cubeCal(double cubE);
double sqRCal(double sqR);

int main()
{
    double a,b;
    cout<<"Enter a number to be cubed"<<endl;
    cin>>a;
    cout<<"Enter a number to be square rooted"<<endl;
    cin>>b;
    double cubE=cubeCal(a);
    double sqR=sqRCal(b);
    double suM=sumCalc(cubE,sqR);
    cout<<"the sum of the cube of "<<a<<" and the square root of "<<b
        <<" is "<<suM<<endl;
}

double cubeCal(double cubE)
{
    return pow(cubE,3);
}

double sqRCal(double sqR)
{
    return sqrt(sqR);
}

double sumCalc(double cubE,double sqR)
{
    return cubE+sqR;
}