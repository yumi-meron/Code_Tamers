#include<iostream>
using namespace std;
int main(){
int num, i=0, sum=0;
cout<<"Enter a number: ";
cin>>num;

while( i< num+1){
     sum += i;
    i+=2;
}
cout<<"The sum of the numbers is "<<sum;


return 0;
}
