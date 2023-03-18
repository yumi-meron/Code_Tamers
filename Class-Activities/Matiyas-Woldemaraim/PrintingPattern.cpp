#include <iostream>
using namespace std;

int main() {
  char choice;
  int n;
  cout << "THIS IS A PRITING PATTERNS: \na. Rectangle \nb. Hollow Rectangle \nc. Half Pyramid \nd. Inverted Half Pyramid \ne.Hollow Inverted Half Pyramid \nf. Full Pyramid \ng. Inverted Full Pyramid \nh. Hollow Pyramid \ni. Inverted Hollow Pyramid: " <<endl;
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
        for(int i=n; i>=1;i--) {
            for(int k=n-i; k>0; k--) 
                cout << " ";
            for(int j=i; j>0; j--)
                if(i==1 || i==n || j==i || j==n || j==1)
                    cout << "*";
                else
                    cout << " ";
            cout << endl;
        }

    break;
    case 'f':
        cout << "enter the number of rows you want: ";
        cin >> n;
        for(int i=1; i<=n;i++) {
            for(int k=n-i;k>0;k--) 
                cout << " ";
            for(int j=1; j<=i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    break;
    case 'g':
        cout << "enter the row size of inverted pyramid you want: ";
        cin >> n;
        for(int i=n; i>=1;i--) {
            for(int k=n-i;k>0;k--) 
                cout << " ";
            for(int j=1; j<=i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    break;
    case 'h':
        cout << "enter the row size of hollow pyramid you want: ";
        cin >> n;
        for(int i=1; i<=n;i++) {
            for(int k=n-i;k>0;k--) 
                cout << " ";
            for(int j=1; j<=i; j++) {
                if(i==1 || i==n || i==j || j==1 || j==n)
                    cout << "* ";
                else    
                    cout << "  ";
            }
            cout << endl;
        }
    break;
    case 'i':
        cout << "enter the row size of inverted hollow pyramid you want: ";
        cin >> n;
        for(int i=n; i>=1;i--) {
            for(int k=n-i;k>0;k--) 
                cout << " ";
            for(int j=1; j<=i; j++) {
                if(i==1 || i==n || i==j || j==1 || j==n)
                    cout << "* ";
                else    
                    cout << "  ";
            }
            cout << endl;

    
 
}
return 0;
}
 
