#include <string>
#include <iostream>
using namespace std;
int main(){
    
    string id;
    cout<<"enter idno";
    cin>>id;
    
    string stsno[5][11] = {"ETS1006","ETS1008","ETS1007","ETS1010","ETS1009"};
    
    for(int i; i< 5; i++) {
        if (stsno[i][11] == id) {
            cout<<id<<endl;
        }
        else{
            cout<<"error";
            return 0;
        }
    }
    
    

}