#include <iostream>
using namespace std;
double getproduct(int num1, double num2);
int main(){
    int firstnum;
    double secondnum;
 cout<< getproduct(firstnum,secondnum)<<endl;

}
double getproduct(int num1 , double num2){
    double product;
    cout<<"Enter the firt number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    product = num1*num2;
    return product;
}