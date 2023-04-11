#include<iostream>
#include<cmath>
using namespace std;
int main(){
int  i=0, mark, sum=0;
float average;
while(i<5){
    cout<<"enter the mark: ";
    cin>>mark;
    while (mark < 0 || mark > 100){
        cout<<"input out of range, enter again: ";
        cin>>mark;
    } sum += mark;
    i++;}
average = sum / 5;
cout<<"The average of the marks is "<<average<<".";


return 0;
}
