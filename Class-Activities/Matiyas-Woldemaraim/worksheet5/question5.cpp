#include <iostream>
using namespace std;

int main() {
    int row=4, col=6, balance[4][6] = {{7,1,4}, {4,2,3}, {8,6,9}, {2, 1, 1}};
    cout << "then the tabular format of the 2D array is:"<<endl;
            for(int i=0;i<row;++i) {
                for(int j=0;j<col;++j) 
                    cout << balance[i][j] << " ";
                cout <<endl;
            }
}