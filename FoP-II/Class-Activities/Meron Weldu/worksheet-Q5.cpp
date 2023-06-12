#include<iostream>
#include<cmath>
using namespace std;

double add(double num1, double num2)
{
    double answer = pow(num1,3) + sqrt(num2);
    return answer;
}

int main(){
    double n1, n2;
    cout<<"enter two numbers: ";
    cin>>n1>>n2;
    double answer = add(n1,n2);
    cout<<answer;
    return 0;

}
