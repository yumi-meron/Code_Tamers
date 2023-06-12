/*a c++ function based function that accept variables of type integer and 
double and return the product of two numbers, with double type*/
#include <iostream>
using namespace std;

//the function prototype
double getProduct(int num1, double num2);

int main() {
    //the actual parameter type should be similar with the formal parameter 
    int firstNum;
    double secondNum;
    cout<<"Enter two numbers, one type of integer and other of double:\n";
    cin>>firstNum>>secondNum;
    double product=getProduct(firstNum, secondNum);
    cout<<"The product of the two num is: "<<product;
}

//defining the function
double getProduct(int num1, double num2) {
    cout<<"The product of the two num is: ";
    return num1 * num2;
}