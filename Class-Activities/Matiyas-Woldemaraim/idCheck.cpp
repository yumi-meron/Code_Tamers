#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    string Id[5]= {"ets1018", "ets1017", "ets1016", "ets1015", "ets1019" };
    string name[6] = {"matiyas", "sax", "french", "maste", "matu"};
    string input;
    cout << "enter the id: ";
    cin >> input;
    for(int i=0; i<5; i++) {
        if(input==Id[i]) {
            for(int j=i; j<6; j++) {
                cout << name[i];
                break;
            }
        }
    }
    
         
}