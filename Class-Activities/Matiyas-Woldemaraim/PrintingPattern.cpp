#include <iostream>
using namespace std;

int main() {
  char choice;
  int n;
  cout << "THIS IS A PRITING PATTERNS: \na. rectangle \nb. hollow rectangle \nc. Half Pyramid \nd. Inverted Half Pyramid \ne.Hollow Inverted Half Pyramid \nf. full Pyramid: " <<endl;
  cin >> choice;
  switch(choice) {
    case 'a':
        cout << "enter the size of rectangle you want: ";
        cin >> n;
        for(int i=1; i<=7; i++) {
            for(int j=1; j<=7; j++) {
            cout << "* ";
            }
            cout << endl;
        }
    break;
    case 'b':
        cout << "enter the size of hollow rectangle you want: ";
        cin >> n;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
            if(j==1 || j==n || i==1 || i==n)
                cout << "*";
            else 
                cout << " ";
            }
            cout << endl;
        }
    break;
    case 'c':
        cout << "enter the size of half pyramid you want: ";
        cin >> n;
        for(int i=1;i<=n;i++) {
            for(int j=1; j<=i;j++) {
                cout << "*";
            }
            cout << endl;
        }
    break;
    case 'd':
        cout << "enter the size of inverted half pyramid you want: ";
        cin >> n;
        for(int i=n; i>=1; i--) {
            for(int j=i; j>0; j--) {
                cout << "*";
            }
            cout << endl;
        }
    break;
    case 'e':
        cout << "enter the number of rows you want: ";
        cin >> n;

    break;
    case 'f':
        cout << "enter the number of rows you want: ";
        cin >> n;


    
 
}
}
 
