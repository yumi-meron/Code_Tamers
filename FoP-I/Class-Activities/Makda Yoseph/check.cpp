#include <iostream>
using namespace std;
int main()
{
    char letter;
    

    cout<<"enter a letter";
    cin>>letter;
    if (letter>='A' && letter<='Z')
    {
        cout<<"it is capital letter";
    }
    else if( letter>='a' && letter<='z')
    {
        cout<<"it is a small letter";
    }
    else if(letter>='0' && letter<='9'&& letter % 2 == 0)
    {
        cout<<"it is a even digit";
    }
    else if(letter>='0' && letter<='9'&& letter % 2 != 0)
    {
        cout<<"it is a odd digit";
    }
    else
    {
        cout<<"it is a special case";
    }
}