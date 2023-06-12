#include <iostream>
#include <cmath>
using namespace std;

double operation(double num1,double num2);

int main(){
    double num1,num2;
    cout<<"Enter the first number\n"<<"Enter the second number"<<endl;
    cin>>num1>>num2;
    cout<<operation(num1,num2);
}

double operation(double num1,double num2){
   double answer = pow(num1,3)+sqrt(num2);
   return answer;
}