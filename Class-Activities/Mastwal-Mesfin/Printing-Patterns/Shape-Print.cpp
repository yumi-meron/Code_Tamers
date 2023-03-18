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
    // case 2:
    //     for(in; ; ;)
    //     {}
    // break;
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
