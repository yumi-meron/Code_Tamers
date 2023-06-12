#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(double side1, double side2){
    return hypot(side1, side2);
}
int main(){
    double s1, s2;
    cout<<"Input side-1 and side-2: ";
    cin>>s1>>s2;
    double result = hypotenuse(s1, s2);
    cout<<result;

    return 0;
}
