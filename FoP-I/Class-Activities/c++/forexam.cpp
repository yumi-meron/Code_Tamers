#include <iostream>
using namespace std;
int main(){
    int a,c, b=10;
    a=(b++ * b--);
    c=(b++);
    cout<<a<<endl;
    cout<<c<<endl;
}