#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char tstAns[] = "acceb";
    char ans;
    int result=0;
    for(int i=0; i<5; i++) {
        cout << "enter the answer for question number " << i+1 <<endl;
        cin >> ans;
        if(tstAns[i]==ans) {
            cout << "good"<<endl;
            result++;
        }
            
    }
    cout << "your result is " <<result;
        

}