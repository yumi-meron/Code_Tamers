#include<iostream>
#include<cmath>

using namespace std;

int count=3;

double hypCalc(double sideX,double sideY);

int main()
{
    while(count>0)
    {
        double sideX,sideY;
        cout<<"Enter an X value"<<endl;
        cin>>sideX;
        cout<<"Enter an Y value"<<endl;
        cin>>sideY;
        double hyP=hypCalc(sideX,sideY);
        cout<<"The hyp is "<<hyP<<endl;
        count--;
    }
}

double hypCalc(double sideX,double sideY)
{
    return hypot(sideX,sideY);
}