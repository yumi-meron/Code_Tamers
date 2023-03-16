#include<iostream>
#include<stdio.h>
#include <iomanip>
using namespace std;
int main()
{
const char separator = ' ';
const int nameWidth = 6;
const int numWidth = 8;
char x;
cout<<"choose \nA,for a single person.\nB,for multiple people.\n";
cin>>x;
switch(x){
case 'a':
    float h,w,bmi;
    char se;
    cout<<"select a gender\n m or f\n";
    cin>>se;
    cout<<"enter your height?\n";
    cin>>h;
    cout<<"enter your weight?\n";
    cin>>w;
    bmi=w/(h*h);
    if(se='f'){
        if(bmi<=18){
            cout<<"your bmi is: "<<bmi<<", you are under weight.";
        }
        else if(bmi<=23 && bmi>18){
            cout<<"\nyour bmi is: "<<bmi<<", you are normal.";
        }
       else if(bmi>23){
        cout<<"your bmi is: "<<bmi<<", you are overweight.";
       }
    }
   else if(se='m'){
        if(bmi<=20){
            cout<<"your bmi is: "<<bmi<<", you are under weight.";
        }
        else if(bmi<=25 && bmi>20){
            cout<<"your bmi is: "<<bmi<<", you are normal.";
        }
       else if(bmi>25){
        cout<<"your bmi is: "<<bmi<<", you are overweight.";
       }
    }
break;
case 'b':
string v;
cout<<"do you know how many people there are:yes or no\n";
cin>>v;
if(v=="yes"){
int n;
cout<<"enter the number of people:";
cin>>n;
for(int i=1;i<=n;i++){
    float h,w,bmi;
    char se;
    cout<<"\nselect a gender\n m or f\n";
    cin>>se;
    cout<<"enter your height?\n";
    cin>>h;
    cout<<"enter your weight?\n";
    cin>>w;
    bmi=w/(h*h);
    if(se='f'){
        if(bmi<=18){
            cout<<"your bmi is: "<<bmi<<", you are under weight.";
        }
        else if(bmi<=23 && bmi>18){
            cout<<"your bmi is: "<<bmi<<", you are normal.";
        }
       else if(bmi>23){
        cout<<"your bmi is: "<<bmi<<", you are overweight.";
       }
    }
   else if(se='m'){
        if(bmi<=20){
            cout<<"your bmi is: "<<bmi<<", you are under weight.";
        }
        else if(bmi<=25 && bmi>20){
            cout<<"your bmi is: "<<bmi<<", you are normal.";
        }
       else if(bmi>25){
        cout<<"your bmi is: "<<bmi<<", you are overweight.";
       }
    }
}
}
else if(v=="no"){
int i=1;
while(true){
    float h,w,bmi;
    char se;
    cout<<"\nselect a gender\n m or f\n";
    cin>>se;
    cout<<"enter your height?\n";
    cin>>h;
    cout<<"enter your weight?\n";
    cin>>w;
    bmi=w/(h*h);
    if(se='f'){
        if(bmi<=18){
            cout<<"your bmi is: "<<bmi<<", you are under weight.";
        }
        else if(bmi<=23 && bmi>18){
            cout<<"your bmi is: "<<bmi<<", you are normal.";
        }
       else if(bmi>23){
        cout<<"your bmi is: "<<bmi<<", you are overweight.";
       }
    }
   else if(se='m'){
        if(bmi<=20){
            cout<<"your bmi is: "<<bmi<<", you are under weight.";
        }
        else if(bmi<=25 && bmi>20){
            cout<<"your bmi is: "<<bmi<<", you are normal.";
        }
       else if(bmi>25){
        cout<<"your bmi is: "<<bmi<<", you are overweight.";
       }
    }
string c;
cout<<"\ndo you want to continue. \nsay no if you don't want to continue, press any other key if you want to continue.\n";
cin>>c;
if (c=="no"){
    break;
}
}
}
}
}
