#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of element of array you want: "<<endl;
    cin >> n;
    cout << "enter the array elements: ";
    int nums[n], dNum[n];
    for(int i=0;i<n;i++) {
        cin >> nums[i];
        if(i%2==0) 
            dNum[i] = 2 * nums[i];
        else 
            dNum[i] = nums[i];
    }
    cout << "the array you entered is: ";
    for(int k=0;k<n;++k) 
        cout << nums[k]<<" ";
    cout << endl;
    cout << "the array that is modified is: ";
    for(int j=0;j<n;++j)
        cout << dNum[j]<<" ";
}