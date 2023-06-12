#include<iostream>
using namespace std;

int product(int n,int arr[]={}){
    int product=1;
    for (int i=0; i<n; i++){
        product *= arr[i];
    }
    return product;
}
int main(){
    int n;
    cout<<"Enter the length of numbers to be calculate: ";
    cin>>n;
    int arr[n]={};
    for (int i=0; i<n; i++){
        int num;
        cout<<"enter numbers: ";
        cin>>num;
        arr[i] = num;
    }
    cout<<"the product is "<<product(n,arr);

    return 0;
}
