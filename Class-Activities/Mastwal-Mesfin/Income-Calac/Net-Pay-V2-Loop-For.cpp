#include<iostream>
using namespace std;
int main()
{
    float Net_Pay,Salary,Tax_Rate,Tax,Over_Rate,Over,Working_Hour,Income;
    int Normal_Hour=40,Over_Hour;
    int Times;
    cout<<"How many users are there: ";
    cin>>Times;
    for(int Init=0;Init<Times;Init++)
    {
        cout<<"Enter the Working Hour: ";
        cin>>Working_Hour;
        cout<<"Enter the Salary: ";
        cin>>Salary;
        // cout<<"Enter the Tax Rate(in decimals): ";
        // cin>>Tax_Rate;
        float Pen=(Salary*0.07);
        if(Salary<=200 && Salary>0)
        {
            Tax_Rate=0;
        }
        else if(Salary>200 && Salary<=600)
        {
            Tax_Rate=0.1;
        }
        else if(Salary>600 && Salary<=1200)
        {
            Tax_Rate=0.15;
        }
        else if(Salary>1200 && Salary<=2000)
        {
            Tax_Rate=0.2;
        }
        else if(Salary>2000 && Salary<=3500)
        {
            Tax_Rate=0.25;
        }
        else if(Salary>3500)
        {
            Tax_Rate=0.30;
        }
        if(Working_Hour>40)
        {
            cout<<"Enter the Over rate: ";
            cin>>Over_Rate;
            Over_Hour=(Working_Hour-Normal_Hour);
        }
        else
        {
            Over_Hour=0;
        }
        if(Over_Rate>=0 && Over_Rate<1)
        {
            Over=(Over_Rate*Over_Hour);
        }
        else if(Over_Rate>=1)
        {
            Over=(Over_Rate/100)*Over_Hour;
        }
        Income=(Salary+Over);
        Tax=(Tax_Rate*Income);
        if(Working_Hour>40)
        {
            Net_Pay=(Salary-Pen-Tax)+Over;
            cout<<"This is your net pay "<<Net_Pay<<"\n";
            cout<<"You have over worked this is you addtional payment"<<Over<<"\n";
        }
        else if(Working_Hour<=40)
        {
            Net_Pay=(Salary-Pen-Tax);
            cout<<"This is your net pay "<<Net_Pay<<"\n";
            cout<<"You Worked in the normal working time you don't have addtional payment\n";
        }
    }
    

}