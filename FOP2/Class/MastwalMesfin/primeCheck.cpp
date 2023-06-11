#include<iostream>
#include<cmath>

using namespace std;

bool primeCheck(int &firstNum);

int main()
{
    int firstNum;
    cout<<"Enter a number from 1-1000 and check if it is prime or not"<<endl;
    cin>>firstNum;
    bool vaL=primeCheck(firstNum);
    if(vaL==true)
    {
        cout<<"The number "<<firstNum<<" is prime"<<endl;
    }
    else
    {
        cout<<"The number "<<firstNum<<" is not prime"<<endl;
    }
}

bool primeCheck(int &firstNum)
{
    int a=ceil(sqrt(firstNum));

    if(firstNum>=1&&firstNum<=1000)
    {
        //Sets number 1 to false cuz it is 1 is not considered a prime number
        if(firstNum==1)
        {
            return false;
        }
        //Sets 2 as a prime number as cuz i used it as a relative in the loop otherwise it returns false for 2
        if(firstNum==2)
        {
            return true;
        }
        //Checking for prime number
        for (int i=2;i<=a;i++)
        {
            if(firstNum%i==0)
            {
                return false;
            }
        }
        return true;
    }
    //Checking if the number passed is in the range of 1-1000
    else
    {
        cout<<"Enter a proper number in range"<<endl;
        cin>>firstNum;
        primeCheck(firstNum);
        return false;
    }
 
}