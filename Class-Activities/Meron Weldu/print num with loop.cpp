#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter a number: ";
cin>>num;
for (int i=0; i<=num; i++){
    cout<<i<<endl;
}
for (int i=num; i>0; i--){
    cout<<i<<endl;
}
return 0;
}
