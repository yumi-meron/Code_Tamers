#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=10;i++) {
        for(int j=1; j<=11;j++) {
            if(i==1 || i==10 || j==1 || j==11) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout <<endl;
    }
    return 0;
}