/*a c++ program that uses a variable-length argument list to 
calculate the product of a series of integers.*/
#include <iostream>
#include <cstdarg> //header file for var-len arg lists
using namespace std;

int product(int count, ...);

int main() {
    int prod1 = product(3, 2, 8, 7);
    cout<<"The product of 2 * 8 * 7 = "<<prod1<<endl;

    int prod2 = product(5, 2, 5, 8, 3, 9);
    cout<<"The product of 2 * 5 * 8 * 3 * 9 = "<<prod2;
}

int product(int count, ...) {
    int result = 1;
    va_list args;
    va_start(args, count);
    for (int i=0;i<count;++i)
    {
    int x = va_arg(args, int);
    result *= x;
    }
    va_end(args);
    return result;
}