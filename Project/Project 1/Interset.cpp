#include<iostream>
using namespace std;
int main()
{
    /*This is Some reference to variables:
    Inter is Interest
    Inter_Rate is the rate of interest
    Over_Inter is the excess from the interest
    */
    float Inter_Rate,Inter,Loan,Over_Inter=0,Payment,Anual_Per,Original_Loan;
    string Array_Inter,Array_Anual,Array_Loan,Array_Full,Array_Over;
    cout<<"Enter the Interst rate: \n->";
    cin>>Inter_Rate;
    cout<<"Enter the amount of loan: \n->";
    cin>>Loan;
    Original_Loan=Loan;
    Payment=Original_Loan/20;
   //To make Interset rate work both in dec and per
    if(Inter_Rate>=1)
    {
        Inter_Rate=Inter_Rate/100;
    }
    else if(Inter_Rate<1 && Inter_Rate>0)
    {
        Inter_Rate=Inter_Rate;
    }
    else
    {
        cout<<"Enter a proper interset rate";
        exit(0);
    }
    cout<<"Payment"<<"\t"<<"Loan"<<"\t\t"<<"Interest"<<"\t"<<"Annual(in %)";
    do
    {        
        Loan=Loan-Over_Inter;
        Inter=(Inter_Rate*Loan)/12;

//To the Data input part
        Array_Inter=to_string(Inter);    
        Anual_Per=(Inter*10000)/Original_Loan;
        Array_Anual=to_string(Anual_Per);
        
        Over_Inter=Payment-Inter;
        Array_Loan=to_string(Loan);
        cout<<endl;

//The printing of the table
        cout<<Payment<<"\t";
        cout<<Array_Inter<<"\t";
        cout<<Array_Loan<<"\t";
        Array_Inter=to_string(Inter);
        Array_Loan=to_string(Loan);
        
        cout<<Array_Anual<<"%"<<"\t";
    }
    while(Loan>=0);
}
        
