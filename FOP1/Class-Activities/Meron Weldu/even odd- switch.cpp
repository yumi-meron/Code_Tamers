#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter a number: ";
cin>>num;
int type = num % 2;
switch(type){
case 0:
    cout<<num<<" is an even number.";
    break;
case 1:
    cout<<num<<" is an odd number.";
    break;
}

}
