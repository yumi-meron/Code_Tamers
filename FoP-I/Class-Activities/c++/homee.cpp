#include <iostream>
using namespace std;
int main()
{
    float gross, work , tax, bonus_rate, income_tax,income;
    int times, x;
    cout<<"\n enter number of times";
    cin>>times;
    for(x = 0;x < times; x++)
    {
        cout<<"Enter gross salary\n";
    cin>>gross;
    float pension_payment =0.07 * gross;
    cout<<"enter working hour\n";
    cin>>work;
     
    if(gross <= 200)
    {
     income_tax == 0;   
    }
    
    else if( 200<gross && gross<=600 )
    {
        income_tax =(gross*0.01);
    }

    
    else if(600<gross && gross<=1200)
    {
        income_tax = (gross * 0.15);
    }
    else if(1200<gross && gross<=2000)
    {
        income_tax = (gross*0.2);
    }
    else if(2000<income && gross<=3500)
    {
        income_tax = (gross*0.25);
    }
    else if(3500<gross)
    {
        income_tax = (gross * 0.3);
    }
     
    float net_without_overtime = gross - pension_payment - income_tax;
    
    if(work > 40)
    {
        cout<<"Enter over time bonus rate\n";
        cin>>bonus_rate;
        
         float overtime_bonus = (work - 40) * bonus_rate;    
        income = overtime_bonus + gross;
     if(income <= 200)
        {
         income_tax == 0;   
        }
    
            else if( 200<income && income<=600 )
        {
            income_tax =(income*0.01);
        }

        
        else if(600<income && income<=1200)
        {
            income_tax = (income * 0.15);
        }
        else if(1200<income && income<=2000)
        {
            income_tax = (income*0.2);
        }
        else if(2000<income && income<=3500)
        {
            income_tax = (income*0.25);
        }
        else if(3500<income)
        {
            income_tax = (income * 0.3);
        }
         
         float net_with_overtime = (gross - pension_payment - income_tax) + overtime_bonus;
        cout<<net_with_overtime;
    }
    else
    {
        cout<<net_without_overtime;
    }
    }
    
       
 
    
    
}