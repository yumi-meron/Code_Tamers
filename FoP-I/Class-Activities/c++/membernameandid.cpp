#include <string>
#include <iostream>
using namespace std;
int main(){
    
    string id;
    cout<<"enter idno";
    cin>>id;
    
    string stsno[5][2] = {
        {"ETS1006","Makda jo"},
        {"ETS1007","Maa ho"},
        {"ETS1004","iiida"},
        {"ETS1003","laao"},
        {"ETS1008","Mjo"}
        };
    
    for(int i; i < 5; i++) {
          if(stsno[i][0] == id) {
            cout<<stsno[i][1];
            return 0;
             
            }
           cout<<"error";
           return 0; 
        
       
    }
}