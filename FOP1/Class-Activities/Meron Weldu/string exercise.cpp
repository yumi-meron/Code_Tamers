#include<iostream>
using namespace std;
int main(){
char myString[11] = {'a', 'd', 'c', 'a', 'b', 'd', 'b', 'd', 'a', 'c','\0'};
string answer[11] ;
int x ,no = 1, sum = 0, n=1;
char ans;
char testAns[11]={};
for (int i =0; i<10; i++){
    cout<<"Answer for question number "<<no<<": ";
    cin>>ans;
    testAns[i]= ans;
    no++;

}
for (int j=0; j<10; j++){
    if (myString[j]== testAns[j]){
        answer[j]= "Correct";
        sum += 1;
    }
    else{
        answer[j]= "Incorrect";
    }
}
for (int i=0; i<10; i++){

    cout<<n<<"."<<answer[i]<<endl;
    n++;
}
cout<<"Your result out of 10 is "<<sum<<"/10";
}
