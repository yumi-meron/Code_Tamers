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
    cout<<"Payment"<<"\t"<<"Loan"<<"\t\t"<<"Interest"<<"\t"<<"Annual(in %)";
    do
    {        
        Loan=Loan-Over_Inter;
        Inter=(Inter_Rate*Loan)/12;
//Data input part
        
    }
    while(Loan>=0)
