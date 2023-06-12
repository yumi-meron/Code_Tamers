#include <iostream>
using namespace std;
int glo[10]={1,3,5,7};
int main(){
    int month[5]= {1,2,3,4,5};
    int firstarray[2] = {0};
    cout<<firstarray[0]<<endl;
    int second[2]={};
    cout<<second[0]<<endl;
    int day[0]= {};
    cout<<day[1]<<endl;
    for(int a;a<10;a++)
        cout<<glo[a];
        for(int m; m<5;m++)
        cout<<month[m];
    
}