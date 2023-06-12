#include <iostream>
using namespace std;

int main() {
    char x;
    cout << "enter any character: " <<endl;
    cin >> x;
    if(x>='a' && x<='z') {
        if(x == 'a') {
            cout << "the symbol " << x <<" is vowel small letter";
        }
        else if(x == 'e') {
            cout << "the symbol " << x <<" is vowel small letter";
        }
        else if(x == 'i') {
            cout << "the symbol " << x <<" is vowel small letter";
        }
        else if(x == 'o') {
            cout << "the symbol " << x <<" is vowel small letter";
        }
        else if(x == 'u') {
            cout << "the symbol " << x <<" is vowel small letter";
        }
        else {
            cout << "the symbol " << x << " is consonant small letter";
        }
    }
    else if(x>='A' && x<='Z') {
        if(x == 'A') {
            cout << "the symbol " << x <<" is vowel capital letter";
        }
        else if(x == 'E') {
            cout << "the symbol " << x <<" is vowel capital letter";
        }
        else if(x == 'I') {
            cout << "the symbol " << x <<" is vowel capital letter";
        }
        else if(x == 'O') {
            cout << "the symbol " << x <<" is vowel capital letter";
        }
        else if(x == 'U') {
            cout << "the symbol " << x <<" is vowel capital letter";
        }
        else {
            cout << "the symbol " << x << " is consonant capital letter";
        }
    }
    else if(x >= '0' && x <= '9') {
        (x % 2 == 0) ?  cout << "even num.": cout << "odd num.";
        
    }
    else {
        cout << "the symbol " << x << " is special character";
    }

    return 0;

}