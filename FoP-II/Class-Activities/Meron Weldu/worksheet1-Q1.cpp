#include <iostream>
using namespace std;
float mult(float x, float y){
    return x*y;
}

int main()
{
    float q,p;
    cout<<"enter the two integers: ";
    cin>>q>>p;
    cout<<"The product of the two numbers: "<<mult(q,p);
}