#include <iostream>
using namespace std;

int main() {
    int arr[8], average, sum=0;
    cout << "enter eight number of array: "<<endl;
            for(int i=0;i<8;i++) {
                cin >> arr[i];
                sum += arr[i];
            }
            average = sum/8;
            cout << "the arrays your entered are: ";
            for(int k=0;k<8;k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
            cout << "the average of the array is "<<average;
}