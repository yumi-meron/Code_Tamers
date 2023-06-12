//a c++ function based program that cube the first number and take the square root of second number and add it
#include <iostream>
#include <cmath>
using namespace std;

//prototype of the function
double sum(double cube, double square);

int main() {
    double x, y;
    cout<<"enter two numbers one to be cubed and other to be square rooted: ";
    cin>>x>>y;
    cout<<sum(x,y);
}

//function definition
double sum(double cube, double square) {
    cube = cbrt(cube);
    square = sqrt(square);
    cout<<"\nThe sum of two number is: ";
    return cube + square;
}
