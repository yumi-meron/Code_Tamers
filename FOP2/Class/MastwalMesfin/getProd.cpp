#include<iostream>

using namespace std;

double getProd(int firstNum, double secNum);

int main()
{
    int firstNum,secNum;
    cout<<"Enter a number"<<endl;
    cin>>firstNum;
    cout<<"Enter a number"<<endl;
    cin>>secNum;
    int proD=getProd(firstNum,secNum);
    cout<<"The product of the number is "<<proD;
}

double getProd(int firstNum, double secNum)
{
    return firstNum*secNum;
}