#include<iostream>
using namespace std;
int main()
{
    int Inp;
    cout<<"->";
    cin>>Inp;
    switch(Inp)
    {
    case 1:
        for(int Row=0;Row<4;Row++)
        {
            for(int Col=0;Col<7;Col++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    break;
    case 2:
    int Colm,Row;
    cout<<"Enter Row dimension: ";
    cin>>Row;
    cout<<"Enter Colm dimension: ";
    cin>>Colm;
    for(int i=1;i<=Row;i++)
    {
        for(int k=1;k<=Colm;k++)
        {
            if(i==1||i==Row||k==1||k==Colm)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    break;
    case 3:
        for(int Row=0;Row<5;Row++)
        {
            for(int Col=0;Col<Row;Col++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        break;
    case 4:
        for(int Row=1;Row<5;Row++)
        {
            for(int Col=5;Col>=Row;Col--)
            {
                cout<<" ";
            }
            for(int Col=1;Col<=Row;Col++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        break;
    case 5:
        for(int Row=1;Row<=5;Row++)
        {
            for(int Col=1;Col<=Row;Col++)
            {
                cout<<" ";
            }
            for(int Col=5;Col>=Row;Col--)
            {
                cout<<" "<<"*";
            }
            cout<<endl;
        }
        break;
    // case6:
    //     for()

    }
    }
