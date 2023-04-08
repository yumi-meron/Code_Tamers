#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int Choice,Num_Rev,Rev=0,Num_Val,Sum=0,Num_In,Multi=1,Mod_Num,Num_Last,Num_First;
    int Num_Mid,Pow=-1,Power;
    long int Elements,Num,Value;
    string Num_Cout;
    do
    {   cout<<"\nChoose: \n 1.Number reverser\n 2.Number counter\n 3.The Sum of the numbers\n ";
        cout<<"4.Calculating the product of the even numbers\n 5.To print the First and Last number and add them\n ";
        cout<<"6.To swap the first and last numbers\n 7.To check for Palindrome\n 8.To Check for the frequency of a digit in a number\n ";
        cout<<"9.Check for Armstrong Number\n 10.Check for Strong Number\n 11.Check for Perfect Number\n 0.To exit the program\n";
        cout<<"->";
        cin>>Choice;
        switch(Choice)
        {
            case 1:
                {
                    cout<<"Enter the number to be reversed:\n->"; 
                    cin>>Num_Rev;
                    while(Num_Rev!=0)
                    {
                        Rev=Rev*10+Num_Rev%10;
                        Num_Rev=Num_Rev/10;
                    }
                    cout<<"This is the reverse of the number "<<Rev;
                }
                break;
            case 2:
                {
                    cout<<"Enter a number:\n->";
                    cin>>Num_Cout;
                    if(Num_Cout>"0"&&Num_Cout<="9")
                    {
                        cout<<"The length is "<<Num_Cout.length();
                    }
                    else
                    {
                        cout<<"Enter a proper number";
                    }
                }
                break;
            case 3:
                {
                    cout<<"Enter a number:\n->";
                    cin>>Num_Val;
                    while(Num_Val!=0)
                    {
                        Sum=Sum+Num_Val%10;
                        Num_Val=Num_Val/10;
                    }
                    cout<<Sum;
                }
                break;
            case 4:
                {
                    cout<<"Enter Number:\n->";
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
                }
                break;
            case 5:
                {
                    cout<<"Enter a Number:\n->";
                    cin>>Num_In;
                    Num_Last=Num_In%10;
                    while(Num_In!=0)
                    {
                        Num_First=Num_In%10;
                        Num_In=Num_In/10;
                    }
                    cout<<"The first number is "<<Num_First<<" and the last number is "<<Num_Last<<"\n There sum is "<<Num_First+Num_Last;
                }
                break;
            case 6:
                {
                    cout<<"Enter a number\n->";
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
                }
                break;
            case 7:
                {
                    cout<<"Enter a number:\n->";
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
                break;
            case 8:
                {
                    int Length=1;
                    cout<<"Enter the number:\n->";
                    cin>>Num;
                    Value=Num;
                    do
                    {
                        Num=Num/10;
                        Length=Length+1;
                    } while (Num>9);
                    long int arry_Elements[Length];
                    for(int i=0;i<Length;i++)
                    {
                        Elements=Value%10;
                        arry_Elements[i]=Elements;
                        Value=Value/10;
                    }
                    for(int i=0;i<Length;i++)
                    {
                        int Count=0;
                        cout<<arry_Elements[i]<<"\t";
                        for(int j=0;j<Length;j++)
                        {
                            if(arry_Elements[i]==arry_Elements[j])
                            {
                                Count=Count+1;
                            }
                        }
                        cout<<Count<<"\t"<<"\n";
                    }
                    break;
                }
            case 9:
                {
                    int Length=1,Sum=0,Inc,Arm_Sum;
                    cout<<"Enter a number:\n->";
                    cin>>Num;
                    Inc=Value=Num;
                    do
                    {
                        Num=Num/10;
                        Length=Length+1;
                    } while (Num>9);
                    for(int i=0;i<Length;i++)
                    {
                        Elements=Value%10;
                        Value=Value/10;
                        Arm_Sum=pow(Elements,3);
                        Sum=Arm_Sum+Sum;
                    }
                    if(Inc==Sum)
                    {
                        cout<<"The number is Armstrong";
                    }
                    else
                    {
                        cout<<"The number is not Armstrong";
                    }
                }
                break;
            case 10:
                {
                    int Num,Elements,Sum=0,Length=1,Inc,Value;
                    cout<<"Enter a number:\n->";
                    cin>>Num;
                    Inc=Value=Num;
                    do
                    {
                        Num=Num/10;
                        Length=Length+1;
                    } while (Num>9);
                    for(int i=0;i<Length;i++)
                    {
                        int Facto=1;
                        Elements=Value%10;
                        for(int k=Elements;k>0;k--)
                        {
                            Facto=Facto*k;
                        }
                        Value=Value/10;
                        Sum=Sum+Facto;
                    }
                    if(Sum==Inc)
                    {
                        cout<<"The number is Strong";
                    }
                    else
                    {
                        cout<<"The number is not Strong";
                    }
                }
                break;
            case 11:
                {
                    int Nums,Value,Sum=0;
                    cout<<"Enter a number:\n->";
                    cin>>Nums;
                    for(int i=1;i<Nums;i++)
                    {
                        if(Nums%i==0)
                        {
                            Sum=Sum+i;
                        }
                    }
                    if(Sum==Nums)
                    {
                        cout<<"The number is perfect";
                    }
                    else
                    {
                        cout<<"The number is not perfect";
                    }
                }
        }
    }
    while(Choice!=0);
}