#include<iostream>
using namespace std;
int main()
{
    int Int;
    cout<<"->";
    cin>>Int;
    switch(Int)
    {
    case 1:
        for(int Row=1;Row<=5;Row++)
        {
            for(int Col=1;Col<=5;Col++)
            {
                cout<<Col<<" ";
            }
            cout<<endl;
        }
    break;
    case 2:
        for(int Row=1;Row<=5;Row++)
        {
            for(int Col=1;Col<=Row;Col++)
            {
                cout<<Col;
            }
            cout<<endl;
        }
    break;
    case 3:
        for(int Row=1;Row<=5;Row++)
        {
            for(int Col=1;Col<=Row;Col++)
            {
                cout<<" ";
            }
            for(int Col=1;Col<=Row;Col++)
            {
                cout<<Col;
            }
            cout<<endl;
        }
    }

}