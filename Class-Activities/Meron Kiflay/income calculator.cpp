#include <iostream>
using namespace std;
int main(){
float gs,wh,it,itr,pen,ns1,ns2,bp,op;
cout<<"how much is your gross salary: ";
cin>>gs;
cout<<"how much is your working hour: ";
cin>>wh;
pen=(gs*7)/100;
itr=(it*gs)/100;
if (gs>=0&& gs<=200){
it=0;
if (wh<=40){
    ns1=gs-pen-itr;
cout<<"your net salary is: "<<ns1<<"$";
}
else{
cout<<"enter the bonus payment rate per hour: ";
cin>>bp;
  op=(wh-40)*bp;
  ns2=gs-pen-itr+op;
cout<<"your net salary is: "<<ns2<<"$";
}
}
else if (gs>200&& gs<=600){
it=10;
if (wh<=40){
    ns1=gs-pen-itr;
cout<<"your net salary is: "<<ns1<<"$";
}
else{
cout<<"enter the bonus payment rate per hour: ";
cin>>bp;
  op=(wh-40)*bp;
  ns2=gs-pen-itr+op;
cout<<"your net salary is: "<<ns2<<"$";
}
}
else if (gs>600&& gs<=1200){
it=15;
if (wh<=40){
    ns1=gs-pen-itr;
cout<<"your net salary is: "<<ns1<<"$";
}
else{
cout<<"enter the bonus payment rate per hour: ";
cin>>bp;
  op=(wh-40)*bp;
  ns2=gs-pen-itr+op;
cout<<"your net salary is: "<<ns2<<"$";
}
}
else if (gs>1200&& gs<=2000){
it=20;
if (wh<=40){
    ns1=gs-pen-itr;
cout<<"your net salary is: "<<ns1<<"$";
}
else{
cout<<"enter the bonus payment rate per hour: ";
cin>>bp;
  op=(wh-40)*bp;
  ns2=gs-pen-itr+op;
cout<<"your net salary is: "<<ns2<<"$";
}
}
else if (gs>2000&& gs<3500){
it=25;
if (wh<=40){
    ns1=gs-pen-itr;
cout<<"your net salary is: "<<ns1<<"$";
}
else{
cout<<"enter the bonus payment rate per hour: ";
cin>>bp;
  op=(wh-40)*bp;
  ns2=gs-pen-itr+op;
cout<<"your net salary is: "<<ns2<<"$";
}
}
else if (gs>=3500){
it=30;
if (wh<=40){
    ns1=gs-pen-itr;
cout<<"your net salary is: "<<ns1<<"$";
}
else{
cout<<"enter the bonus payment rate per hour: ";
cin>>bp;
  op=(wh-40)*bp;
  ns2=gs-pen-itr+op;
cout<<"your net salary is: "<<ns2<<"$";
}
}
}
