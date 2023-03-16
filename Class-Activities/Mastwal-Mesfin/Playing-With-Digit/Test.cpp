#include<iostream>
using namespace std;
int main()
{
    int Num_Rev,Rev=0,Num_In;
    cin>>Num_Rev;
    // Num_In=Num_Rev;
    for(int i =Num_Rev; i!=0;)
    {
        Rev=Rev*10+i%10;
        i=i/10;
    }
    if(Num_Rev==Rev)
    {
        cout<<"The num is pal";
    }
    else if(Num_Rev!=Rev)
    {
        cout<<"The num is not pal";
    }
}
