#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num;
cout<<"Enter a positive number: ";
cin>>num;
if (num < 0){
    return 0;
}else{
    int square;
    square = pow(num, 2);
    cout<<"The square of "<<num<<" is "<<square;}
    return 0;
}
