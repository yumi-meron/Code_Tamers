#include<iostream>
using namespace std;
int main()
{
    string Choice[4];
    string Ans[4]={"A","B","C","A"};
    int One_Score,Score=0;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter the answer for question number "<<i+1<<"\n->";
        cin>>Choice[i];
        if(Choice[i]==Ans[i])
        {
            One_Score=1;
        }
        else
        {
            One_Score=0;
        }
    Score=Score+One_Score;
    }
    cout<<"Your score is "<<Score<<"/4";
}