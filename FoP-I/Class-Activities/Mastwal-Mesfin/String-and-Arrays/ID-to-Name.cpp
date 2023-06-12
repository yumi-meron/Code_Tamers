#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string Names[5]={"Mastwal","Kidus","Izzat","Mihiret","Milkiyas"};
    string Id[5]={"1015/14","0924/14","0833/14","1074/14","1101/14"};
    string Id_In;
    cout<<"Enter your ID:\n->";
    cin>>Id_In;
    for(int i=1;i<=5;i++)
    {
        if(Id[i]==Id_In)
        {
            cout<<"You are "<<Names[i];
            break;
        }
    }
}