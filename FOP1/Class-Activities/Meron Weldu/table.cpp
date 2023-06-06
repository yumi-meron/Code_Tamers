#include<iostream>
using namespace std;
int main(){
    for (int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            if(i*j>=1 && i*j<=9){
                cout<<i*j<<"  ";
            }
            else{
              cout<< i*j<<" ";
            }
       } cout<<endl;
    }
}
