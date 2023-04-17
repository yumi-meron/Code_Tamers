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

//To the Data input part
         for(int i=0;;i++)
        {
            Array_Inter=to_string(Inter);
            break;
        }
        Anual_Per=(Inter*10000)/Original_Loan;
        for(int i=0;;i++)
        {
            Array_Anual=to_string(Anual_Per);
            break;
        }
        Over_Inter=Payment-Inter;
        for(int i=0;;i++)
        {
            Array_Loan=to_string(Loan);
            break;
        }
        cout<<endl;

//The printing of the table
        do
        {
            cout<<Payment<<"\t";
            break;
        } while (Loan>=0);
    
    }
    while(Loan>=0)
        do
        {
            cout<<Array_Inter<<"\t";
            break;
        } while (Loan>=0);
    do
        {
            cout<<Array_Loan<<"\t";
            break;
        } while (Loan>=0);

        for(int i=0;;i++)
        {
            Array_Inter=to_string(Inter);
            break;
        }
        for(int i=0;;i++)
        {
            Array_Loan=to_string(Loan);
            break;
        }
