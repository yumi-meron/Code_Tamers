#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char Id[5][8]={"1015/14","0924/14","1074/14","1101/14","0833/14"};
    char Id_In[8];
    cout<<"Enter an ID:\n->";
    cin>>Id_In;
    for(int i=0; i<5;i++)
    {
        if(strcmp(Id[0], Id_In)==0)
        {
            cout<<"ID "<<Id[i]<<" is on the list";
            break;
        }
        else
        {
            cout<<"Your ID is not on the list";
            break;
        }

    }
}