#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of elements you want to enter for: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array: "<<endl;
    for(int i=0;i<n;++i) {
        cin >> arr[i];
    }
    //the loop for the acending order
    for(int i=0;i<n;++i) {
        for(int j=i+1;j<n;++j) {
            if(arr[i]>arr[j]) {
                int sort=arr[i];
                arr[i] = arr[j];
                arr[j] = sort;
            }
        }
    }
    cout << "the array in asceding ordered is: ";
    for(int i=0;i<n;++i) 
        cout << arr[i]<<" ";
    cout << endl;
    
    //the loop for decrease or decending order
    for(int i=0;i<n;++i) {
        for(int j=i+1;j<n;++j) {
            if(arr[i]<arr[j]) {
                int sort=arr[i];
                arr[i] = arr[j];
                arr[j] = sort;
            }
        }
    }
    cout << "the array in descending ordered is: ";
    for(int i=0;i<n;++i) 
        cout << arr[i]<<" ";
    cout << endl;
    
}