#include <iostream>
#include <cmath>
using namespace std;

double hypotesis(double side1,double side2);

int main(){
    double side1, side2;
    cout<<hypotesis(side1,side2);
}

double hypotesis(double side1,double side2){
    cout<<"enter first side"<<endl;
    cin>>side1;
    cout<<"enter second side"<<endl;
    cin>>side2;
    double hypo;
    hypo = (sqrt(pow(side1,2)+pow(side2,2)));
    return hypo;
}