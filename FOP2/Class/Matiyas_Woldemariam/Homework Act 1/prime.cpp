//a c++ function based program that check weather a number is prime or not
#include <iostream>
#include <cmath>
using namespace std;

//bool valued function prototype
bool prime(int num);

int main() {
    int n;
    cout<<"enter a number between 1 to 1000 to check if it is prime: ";
    cin>>n;
    if(n<0 || n>1000)
    {
        cout<<"enter number b/n 1 and 1000!";
        return 1;
    }
    cout<<prime(n);
}

//function definition for prime check bool function
bool prime(int num) {
    if (num==0 || num==1)
        return false;
    else if(num>1 && num<=1000) {
        int s = sqrt(num);
        for(int i=2;i<=s;++i)
        {
            if(num%i==0)
                return false;
        }
        return true;
    }
}
