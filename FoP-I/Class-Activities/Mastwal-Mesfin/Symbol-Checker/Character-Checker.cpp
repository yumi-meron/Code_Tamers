#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char Letter;
    int U;
    //U=Letter%2;
    cout<<"Enter the character: ";
    cin>>Letter;
    if(Letter>='A' && Letter<='Z')
    {
        cout<<"Capital-Case Letter";
    }
    else if(Letter>='a' && Letter<='z')
    {
        cout<<"Small-Case Letter";
    }
    /*else if(isdigit(Letter))
    {
        cout<<"is digit";
    }*/
    else if(Letter>='0' && Letter<='9' && Letter%2==0)
    {
        cout<<"Is an even digit";
    }
    else if(Letter>='0' && Letter<='9' && Letter%2==1)
    {
        cout<<"Is an Odd digit";
    }
    else
    {
        cout<<"This is a special character";
    }
}