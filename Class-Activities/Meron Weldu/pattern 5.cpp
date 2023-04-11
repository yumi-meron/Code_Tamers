#include<iostream>
using namespace std;
int main(){
    for (int i=7; i>=1; i--){
        for (int j=1; j<=i; j++){
            if (j==1 || i==7 || i==j ){
            cout<<"*";
            }else{
            cout<<" ";}
        }cout<<endl;
    }
}
