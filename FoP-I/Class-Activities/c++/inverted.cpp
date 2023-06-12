#include<iostream>
using namespace std;
int main()
{
    int row ,colomun;
    int i, j;
    cout<<"enter a row"<<endl;
    cin>>row;
    cout<<"enter a colomun"<<endl;
    cin>>colomun;
    for(i=0; i<row; i++)
    {
        for(j=i; j<row; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}