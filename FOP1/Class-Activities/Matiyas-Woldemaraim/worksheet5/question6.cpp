#include <iostream>
using namespace std;

int main() {
    double sales[3][4] = {{20, 30, 40,10}, {10,30,40,20}, {20,40,50,30}}, sum=0;
    for(int i=0;i<3;++i) {
        for(int j=0;j<4;++j) {
            if(sales[0][0] || sales[1][2] || sales[2][3])
                sum += sales[i][j];
        }
    }
    cout << "the sum of intended numbers are "<<sum;
    
}