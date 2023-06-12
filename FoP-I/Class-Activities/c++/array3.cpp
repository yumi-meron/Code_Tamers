# include <iostream>
using namespace std;
int main(){
    int arr[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout<<arr[2][0]<<endl;
    cout<<arr[2][0] + arr[1][1]<<endl;
    int const SIZE = 5;
    int a1[SIZE]; // Uninitialized
    for (int i = 0; i < SIZE; ++i) 
        cout << a1[i] << " ";
        cout << endl; 
   int a3[] = {31, 32, 33, 34, 35}; // Size deduced from init values
 int a3Size = sizeof(a3)/sizeof(int);
 cout << "Size is " << a3Size << endl; // 5
 cout<<sizeof(int)<<sizeof(a3)<<;
 for (int i = 0; i < a3Size; ++i) 
    cout << a3[i] << " ";
    cout << endl; // 31 32 33 34 35


}