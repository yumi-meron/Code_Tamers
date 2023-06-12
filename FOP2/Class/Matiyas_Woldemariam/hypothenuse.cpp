/*a c++ function based program that calculate the hypothenuse of 
right angle triangle given that the two sides are provided*/
#include <iostream>
#include <cmath>
using namespace std;

double hypothen(double s1, double s2);

int main() {
    double a, b;
    cout<<"enter the two sides of right angle to obtain the hypothenuse: ";
    cin>>a>>b;
    cout<<"the hypothenuse of the two sides "<<a<<" and "<<b<<" is "<<hypothen(a,b);
}

double hypothen(double s1, double s2) {
    return hypot(s1, s2);
}
