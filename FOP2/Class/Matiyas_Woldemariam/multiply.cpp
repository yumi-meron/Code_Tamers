//class activity
#include <iostream>
using namespace std;

//function declaration
float mult(float x, float y);

int main()
{
    
    //q1
    float a, b; //actual par
    cout<<"enter two values to know their product: \n";
    cin>>a>>b;
    cout<<"\nthen the product of this two number is "<<mult(a,b);    
}

//function definition
float mult(float x, float y) {
    return  x * y; //return value
}