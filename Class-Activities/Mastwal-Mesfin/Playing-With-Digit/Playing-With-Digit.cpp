#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int Choice,Num_Rev,Rev=0,Num_Val,Sum=0,Num_In,Num,Multi=1,Mod_Num,Num_Last,Num_First;
    int Num_Mid,Pow=-1,Power;
    string Num_Cout;
    cout<<"Choose: \n 1.Number reverser 2.Number counter\n 3.The Sum of the numbers\n";
    cout<<"4.Calculating the product of the even numbers\n 5.To print the First and Last number and add them\n ";
    cout<<"6.To swap the first and last numbers\n 7.To check for Palindrome\n";
    cout<<"->";
    cin>>Choice;
    switch(Choice)
    {
        case 1:
            cout<<"Enter the number to be reversed"; 
            cin>>Num_Rev;
            while(Num_Rev!=0)
            {
                Rev=Rev*10+Num_Rev%10;
                Num_Rev=Num_Rev/10;
            }
            cout<<"This is the reverse of the number "<<Rev;
            break;
        case 2:
            cout<<"Enter Number: ";
            cin>>Num_Cout;
            if(Num_Cout>"0"&&Num_Cout<="9")
            {
                cout<<"The length is "<<Num_Cout.length();
            }
            else
            {
                cout<<"Enter a proper number";
            }
            break;
        case 3:
            cout<<"Enter Number: ";
            cin>>Num_Val;
            while(Num_Val!=0)
            {
                Sum=Sum+Num_Val%10;
                Num_Val=Num_Val/10;
            }
            cout<<Sum;
            break;
        case 4:
            cout<<"Enter Number: ";
            cin>>Num_In;
            while(Num_In!=0)
            {
                Num=Num_In%10;
                Num_In=Num_In/10;
                if(Num%2==0)
                {
                Multi=Multi*Num;
                }
            }
            cout<<Multi;
            break;
        case 5:
            cout<<"Enter a Number: ";
            cin>>Num_In;
            Num_Last=Num_In%10;
            while(Num_In!=0)
            {
                Num_First=Num_In%10;
                Num_In=Num_In/10;
            }
            cout<<"The first number is "<<Num_First<<" and the last number is "<<Num_Last<<"\n There sum is "<<Num_First+Num_Last;
        case 6:
            cout<<"Enter a number ";
            cin>>Num_In;
            Num_Last=Num_In%10;
            Num=Num_In;
            while(Num_In!=0)
            {
                Num_First=Num_In%10;
                Num_In=Num_In/10;
                Pow++;
            }
            Power=pow(10,Pow);
            Num_Mid=(Num%Power)/10;
            cout<<Num_Last<<Num_Mid<<Num_First;
        case 7:
            int Num_Rev,Rev=0,Num_In;
            cout<<"Enter a number ";
            cin>>Num_Rev;
            Num_In=Num_Rev;
            while(Num_Rev!=0)
            {
                Rev=Rev*10+Num_Rev%10;
                Num_Rev=Num_Rev/10;
            }
            if(Num_In==Rev)
            {
                cout<<"The num is palindrome";
            }
            else if(Num_In!=Rev)
            {
                cout<<"The num is not palindrome";
            }
    }
}