#include <iostream>
using namespace std;

#define MAX_ROWS 10
#define MAX_COLS 10
int main() {
    int row, col;
    int mat1[MAX_ROWS][MAX_COLS];
    int mat2[MAX_ROWS][MAX_COLS];
    int resul[MAX_ROWS][MAX_COLS];

    cout << "enter the number of rows and column of matrix 1: "<<endl;
    cin>>row>>col;
    
    cout << "this is the tabular form for matrix 1: "<<endl;
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j) {
            cout << "enter the value of row ";
            cout << i << " , "<< "col "<<j<<" : ";
            cin >> mat1[i][j];
        }
        cout << endl;
    }
    cout << "\n";

    cout << "enter the 2nd matrix: \n";
    cout << "enter the number of rows and columns" <<endl;
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j) {
            cout << "enter the value of row";
            cout << i << " , "<<"col "<<j<< " : ";
            cin >> mat2[i][j];
        }
        cout << endl;
    }

    cout << "********printing the tabular form of the first matrix************* "<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";

    cout << "********printing the tubular form of the second matrix***********"<<endl;
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j)
            cout << mat2[i][j]<<" ";
        cout << endl;
    }

    cout << "**********the sum of two matrices is******************"<<endl;
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j) {
            resul[i][j] = mat1[i][j] + mat2[i][j];
            cout << resul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}