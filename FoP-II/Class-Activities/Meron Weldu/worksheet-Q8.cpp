#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    bool result = true;
    int x = sqrt(n);
    for (int i=2; i<=x; i++){
        if (n%i==0){
            result = false;
            break;
        }
    }return result;
}
int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<isPrime(num);
}
