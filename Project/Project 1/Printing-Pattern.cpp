#include <iostream>
using namespace std;
int main() 
{
    int n=10;
//Setting triangle range to 0-9
    for(int i=0;i<10;i++) 
    {
//Code for the outer spacing
        for(int k=n-i;k<10;++k) 
        {
            cout << " ";
        }
        for(int j=9-i;j>=0;j--) 
        {
            cout << j;
//print numbers onward zero
            if(j==0) 
            {
                for(int l=1;l<=9-i;l++)
                {
                    cout << l;
                }
            }
        }
        cout << endl; 
    }
 //Part 2 of the print
    int m=9;
    for(int i=1;i<=m;i++)
    {
        for(int k=m-i;k>0;k--)
        {
            cout << " ";
        }
//Code for the increasing print
        for(int j=i;j>=0;j--) 
        { 
            cout << j;
            if(j==0) 
            {
                for(int l=1;l<=i;l++) 
                { 
                    cout << l;
                }
            }
        }
        cout << endl;
    }
}
