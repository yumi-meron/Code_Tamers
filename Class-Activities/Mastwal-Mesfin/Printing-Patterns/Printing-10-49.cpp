#include<iostream>
using namespace std;
int main()
{
    int Num_Int=10;
    for(int Row=0;Row<4;Row++)
    {
        for(int Col=0;Col<10;Col++)
        {
            cout<<Num_Int<<" ";
            Num_Int=Num_Int+1;
        }
        cout<<endl;
    }
}