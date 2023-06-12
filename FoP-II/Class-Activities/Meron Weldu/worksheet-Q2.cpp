#include <iostream>
using namespace std;
int leapYear(int year){
    if (year % 400 == 0){
        return true;
        }
    else if (year % 100 == 0){
        return false;
    }
    else if(year % 4 ==0){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int year;36283276
    cout<<"Enter year please."<<endl;
    cin>>year;
    cout<<leapYear(year);
}

