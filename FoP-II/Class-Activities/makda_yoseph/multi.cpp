#include <iostream>
using namespace std;
float multi(float x, float y);
int main(){
    float x ,y;
    cout<<"Enter the first number"<<endl;
    cin>>x;
    cout<<"Enter the second number"<<endl;
    cin>>y;
    cout<<multi(x,y);
}
float multi(float x, float y){
    float product = x*y;
    return product;
}