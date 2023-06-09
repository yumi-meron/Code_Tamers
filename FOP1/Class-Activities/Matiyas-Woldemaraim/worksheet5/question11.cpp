#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "enter the number of row and column of the same size: ";
    cin >> row;
    double arr[row][row];
    cout << "enter the elements of the array: "<<endl;
    for(int i=0;i<row;++i) {
        for(int j=0;j<row;++j) {
            cout << "row "<<i<<" col "<<j<<": ";
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<row;++i) {
        for(int k=row-i;k<row;k++)
            cout << " ";
        for(int j=i;j<row;++j)
            cout << arr[i][j];
        cout << endl;
    }
}