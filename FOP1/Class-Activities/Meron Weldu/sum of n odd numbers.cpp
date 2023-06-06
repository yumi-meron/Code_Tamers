#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num, i=1, sum=0;
cout<<"Enter a number: ";
cin>>num;

while( i< num+1){
     sum += i;
    i+=2;
}
cout<<"The sum of the numbers is "<<sum;


return 0;
}
