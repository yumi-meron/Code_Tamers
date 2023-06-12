#include <iostream>
using namespace std;

int main() {
    int arr[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16}, sort[20];
    //copying the 2D array to the 1D array
    for(int k=0;k<20;++k) {
        for(int i=0;i<4;++i) {
            for(int j=0;j<5;++j) {
                sort[k] = arr[i][j];
                k++;
            }
        }
    }
    //the sorting loop
    for(int i=0;i<20;++i) {
        for(int j=i+1;j<20;++j) {
            if(sort[i]>sort[j]) {
                int temp = sort[i];
                sort[i]=sort[j];
                sort[j] = temp;
            }
        }
    }
    //printing the sorted array
    cout << "the sorted array is then: "<<endl;
    for(int i=0;i<20;++i) {
        cout << sort[i]<<" ";
    }
     
}