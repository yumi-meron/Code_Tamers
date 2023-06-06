#include <iostream>
using namespace std;

int main() {
    signed int arr[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16,3};
    for(int i=0;i<4;++i) {
        for(int j=0;j<5;++j) {
            if(arr[0][0]<arr[i][j]) 
                arr[0][0]=arr[i][j];
        }
    }
    cout << "the largest number in the array is "<<arr[0][0];
}