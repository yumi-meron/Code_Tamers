#include <iostream>
#include <cmath>
using namespace std;
bool prime(int a);

int main(){
    int a;
    cout<<"enter a number to check weather it is true or false"<<endl;
    cin>>a;
    if (prime(a)==1){
        cout<<"True";
    }
    else{
        cout<<"false";
    }

}

bool prime(int a){
    if (a == 1){
        return false;
    }
    else if (a >= 1000){
        return false;
    }
    else if(a == 2 ){
        return true;
    }
    else if (a == 3){
        return true;
    }
    else if (a>=2 && a< 1000){
        for(int i=2;i<sqrt(a);i++){
            if(a % (i) ==0){
                return false;
            }
            else{
                return true;
            }
        }
    }
}