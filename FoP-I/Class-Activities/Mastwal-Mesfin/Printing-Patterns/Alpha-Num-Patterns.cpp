#include<iostream>
using namespace std;
int main()
{
    int Int;
    cout<<"Enter \n 1. 1-5 Square \n 2. 1-5 right aligned right triangle \n 3. 1-5 left aligned right triangle\n";
    cout<<" 4. a-e Square \n 5. A-X Square \n 6. A-E right aligned right triangle\n";
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
        for(int k=1;k<=5;k++)
        {
        for(int j=5-k;j>0;j--)
        {
            cout<<" ";
        }
            for(int l=k;l>0;l--)
            {
                cout<<l;
            }
        cout<<endl;
        }
        break;
    case 4:
        for(int i=0;i<5;i++)
        {
        int Test=97;
        for(;Test<102;)
        {
            cout<<char(Test)<<" ";
            Test=Test+1;
        }
        cout<<endl;
        }
        break;
    case 5:
    {
    int Test=65;
    for(int i=0;i<4;i++)
        {
        for(int i=0;i<6;i++)
        {
            cout<<char(Test)<<" ";
            Test=Test+1;
        }
        cout<<endl;
        }
        break;
    }
    case 6:
    {
    for(int i=65;i<71;i++)
    {
        for(int j=65;j<i;j++)
        cout<<char(j)<<" ";
        cout<<endl;
    }
    }
    }
}