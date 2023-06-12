#include <iostream>
using namespace std;
int product(int arr[],int a);
int main(){
    int arr[100], a;
    cout<<"Enter the an integer."<<endl;
    cin>>a;
    for (int i=0;i<a;i++){
        cout<<"enter the "<<i<<" element"<<endl;
        cin>>arr[i];
    }
    cout<<"The product of elements in the array is: "<<product(arr,a)<<endl;
}
int product( int arr[],int a){
    int answer=1;
    for(int i = 0;i<a;i++){
        answer *= arr[i];
    }
    return answer;
}