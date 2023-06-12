#include <iostream>
using namespace std;
int i,j,k;
int main(){
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=5;k>=(i-j);k--){
            cout<<"* ";
        }
        cout<<endl;
    }
}