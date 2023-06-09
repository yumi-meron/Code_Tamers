#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter a number for the sand glass pattern: ";
    cin>>n;
//for the above part of triangle
    for(int i=0;i<n;i++) 
    {
//Code for the outer spacing
        for(int k=n-i;k<n;++k) 
        {
            cout << "  ";
        }
        for(int j=n-i;j>=0;j--) 
        {
            cout << j<<" ";
//print numbers onward zero
            if(j==0) 
            {
                for(int l=1;l<=n-i;l++)
                {
                    cout << l;
                }
            }
        }
        cout << endl; 
    }
 //lower part of the pyramid
    int m=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=m-i;k>=0;k--)
        {
            cout << "  ";
        }
//Code for the increasing print
        for(int j=i;j>=0;j--) 
        { 
            cout << j<<" ";
            if(j==0) 
            {
                for(int l=1;l<=i;l++) 
                { 
                    cout << l<<" ";
                }
            }
        }
        cout << endl;
    }
}
