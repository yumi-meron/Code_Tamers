#include<iostream>
using namespace std;
int main()
{
    int Choice,Size;
    do
    {
        cout<<"Select the shape to print:\n"<<"1.Square\n2.Hollow Square\n3.Half Pyramid\n4.Inverted Half Pyramid\n";
        cout<<"5.Inverted Half Hollow Pyramid\n6.Full Pyramid\n7.Inverted Full Pyramid\n8.Full Inverted Hollow Pyramid\n";
        cout<<"9.Full Hollow Pyramid\n0.Exit\n";
        cout<<"->";
        cin>>Choice;
        switch(Choice)
        {
            case 1:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=1;i<=Size;i++)
                {
                    for(int Col=0;Col<7;Col++)
                    {
                        cout<<"*"<<" ";
                    }
                    cout<<endl;
                }
            }
            break;
            case 2:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=1;i<=Size;i++)
                {
                    for(int k=1;k<=Size;k++)
                    {
                        if(i==1||i==Size||k==1||k==Size)
                        {
                            cout<<"*";
                        }
                        else
                        {
                            cout<<" ";
                        }
                    }
                    cout<<endl;
                }
            }
                break;
            case 3:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=1;i<=Size;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
            }
                break;
            case 4:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=Size;i>=1;i--)
                {
                    for(int j=i;j>=1;j--)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
            }
                break;
            case 5:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=Size;i>=1;i--)
                {
                    for(int j=i;j>=1;j--)
                    {
                        if(i==j||j==1||i==Size)
                        {
                            cout<<"*";
                        }
                        else
                        {
                            cout<<" ";
                        }
                    }
                    cout<<endl;
                }
            }
                break;
            case 6:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=1;i<=Size;i++)
                {
                    for(int j=Size;j>=i;j--)
                    {
                        cout<<" ";
                    }
                    for(int j=1;j<=i;j++)
                    {
                        cout<<"*"<<" ";
                    }
                    cout<<endl;
                }
            }
                break;
            case 7:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=1;i<=Size;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<" ";
                    }
                    for(int j=5;j>=i;j--)
                    {
                        cout<<" "<<"*";
                    }
                    cout<<endl;
                }
            }
                break;
            case 8:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=1;i<=Size;i++)
                {
                    for(int j=1;j<=(i-1);j++)
                    {
                        cout<<" ";
                    }
                    for(int k=1;k<=(Size*2-(2*i-1));k++)
                    {
                        if(i==1||k==1||k==(Size*2-(2*i-1)))
                        {
                            cout<<"*";
                        }
                        else
                        {
                            cout<<" ";
                        }
                    }
                    cout<<endl;
                }
            }
                break;
            case 9:
            {
                cout<<"Enter the size of the shape:\n->";
                cin>>Size;
                for(int i=1;i<=Size;i++)
                {
                    for(int j=i;j<Size;j++)
                    {
                        cout<<" ";
                    }
                    for(int k=1;k<=((2*i)-1);k++)
                    {
                        if(k==1||i==Size||k==((2*i)-1))
                        {
                            cout<<"*";
                        }
                        else
                        {
                            cout<<" ";
                        }
                    }
                cout<<endl;
                }
            }
        }
    }while(Choice!=0);
}
