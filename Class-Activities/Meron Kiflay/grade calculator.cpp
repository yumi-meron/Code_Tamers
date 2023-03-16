#include <iostream>
using namespace std;
int main(){
float grade,test,quiz,project,assignment,_final_;
int n;
cout<<"for how many people do you want to check the grade?\n";
cin>>n;
for(int i=1;i<=n;i++){
cout<<"enter your test score(15%): ";
cin>>test;
for(int i=1;i<5&&test>15||test<0;i++){
cout<<"your test score is invalid.\nplease enter your test score again: ";
cin>>test;
if(i>=5){
    test=0;
    cout<<"your test score is: "<<test;
}}
cout<<"\nenter your quiz score(5%): ";
cin>>quiz;
for(int i=1;i<=5&&(quiz>5||quiz<0);i++){
cout<<"your quiz score is invalid.\nplease enter your quiz score again: ";
cin>>quiz;
if(i>=5){
    quiz=0;
    cout<<"your quiz score is: "<<quiz;
}}
cout<<"\nenter your project score(20%): ";
cin>>project;
for(int i=1;i<=5&&project>20||project<0;i++){
cout<<"your project score is invalid.\nplease enter your project score again: ";
cin>>project;
if(i>=5){
    project=0;
    cout<<"your project score is: "<<project;
}}
cout<<"\nenter your assignment score(10%): ";
cin>>assignment;
for(int i=1;i<=5&&assignment>10||assignment<0;i++){
cout<<"your assignment score is invalid. \nplease enter your assignment score again: ";
cin>>assignment;
if(i>=5){
    assignment=0;
    cout<<"your assignment score is: "<<assignment;
}}
cout<<"\nenter your final score(50%): ";
cin>>_final_;
for(int i=1;i<=5&&_final_>50||_final_<0;i++){
cout<<"your final score is invalid. \nplease enter your final score again: ";
cin>>_final_;
if(i>=5){
    _final_=0;
    cout<<"your final score is: "<<_final_;
}}
grade=test+quiz+project+assignment+_final_;
cout<<"your overall score is: "<<grade<<"\n";
if(grade<0 || grade>100){
    cout <<"grade out of range.";}
else if (grade>=90&&grade<=100){
    cout<<"your grade is A+";}
else if (grade>=80&&grade<90){
    cout<<"your grade is an  A";}
else if (grade>=75&&grade<80){
    cout<<"your grade is a B+";}
else if (grade>=60&&grade<75){
    cout<<"your grade is a B";}
else if (grade>=55&&grade<60){
    cout<<"your grade is a C+";}
else if (grade>=45&&grade<55){
    cout<<"your grade is a C";}
else if (grade>=30&&grade<45){
    cout<<"your grade is a D";}
else if(grade<30){
    cout<<"your got an F";}
cout<<endl;
}
}
