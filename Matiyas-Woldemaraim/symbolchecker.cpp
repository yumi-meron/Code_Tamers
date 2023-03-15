#include <iostream>
using namespace std;

int main() {
    char x;
    cout << "enter any character: " <<endl;
    cin >> x;
    if(x>='a' && x<='z') {
        cout << "the symbol "<< x << " is lower case letter.";
    }
    else if(x>='A' && x<='Z') {
        cout << "the symbol " << x << " is upper case letter.";
    }
    else if(x >= '0' && x <= '9') {
        (x % 2 == 0) ? 
        cout <<"The symbol "<< x << "is even num.":
        cout << "odd num.";
    }
    else {
        cout << "the symbol " << x << " is special character";
    }

    return 0;

}