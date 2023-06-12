#include <iostream>
using namespace std;

int main() {
    cout <<"THE PRINTING PATTERN INCLUDES NUMBERS AND LETTER: ";
    cout << "-------------------------------------------------" <<endl;
    int n=5;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) 
            cout << j << " ";
        cout <<endl;
    }

    cout << "-------------------------------------------------" <<endl;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++)
            cout << j << " ";
        cout <<endl;
    }

    cout << "-------------------------------------------------" <<endl;

    for(int i=1; i<=n; i++) {
        for(int k=n-i; k>0; k--)
            cout << " ";
        for(int j=1; j<=i; j++) 
            cout << j;
        cout << endl;
    }

    cout << "-------------------------------------------------" <<endl;

    for(int i=1; i<=5; i++) {
        for(char j='a';j<='e';j++) 
            cout << j <<" ";
        cout << endl;
    }

    cout << "-------------------------------------------------" <<endl;

    for(int i=1,l=0;i<=4;i++){
        for(int j=1;j<=6;j++){
            cout<<(char)(65+l)<<" ";
            l++;
        }
        cout<<endl;
    }

    cout << "------------------------------------------------" <<endl;

    for(int i=0; i<=5; i++) {
        for(int j=0; j<=i; j++)
            cout << char(j+65) << " ";
        cout << endl;
    }


}