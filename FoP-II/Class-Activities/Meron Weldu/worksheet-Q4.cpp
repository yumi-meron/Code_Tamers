#include<iostream>
using namespace std;
double getProduct(int num1, double num2);
int main(){
    int firstNum = 3;
    double secondNum = 3.5;

    double product = getProduct(firstNum, secondNum);
    cout<<product;

    return 0;
}
double getProduct(int num1, double num2){
    double product = num1*num2;
    return product;
}
