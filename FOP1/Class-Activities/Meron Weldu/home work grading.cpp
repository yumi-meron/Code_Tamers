#include<iostream>
using namespace std;
int main(){
float mark, quiz, test, f_exam, project, assignment;
 int x;
cout<<"quiz mark out of 5%: ";
cin>>quiz;
    while (quiz >5){
    for (int i = 1; i<5 ;i++){
    cout<<"your input is out of range.\nquiz mark out of 5%: ";
    cin>>quiz;}
    quiz == 0;}
    for(int i=1;i<5&&test>15||test<0;i++){
    cout<<"\ntest mark out of 15%: ";
    cin>>test;

    //while (test >15){
    for (int i = 1; i<5 ;i++){
    cout<<"your input is out of range.\ntest mark out of 15%: ";
    cin>>test;
    if(i>=5){
    test=0;
    cout<<"your test score is: "<<test;
}}}

cout<<"\nassignment mark out of 10%: ";
cin>>assignment;
    while (assignment > 10){

            for (int i = 1; i<5 ;i++){
            cout<<"your input is out of range.\n quiz mark out of 10%: ";
            cin>>assignment;}
            assignment == 0;break;}
cout<<"\nproject mark out of 20%: ";
cin>>project;
    while (project > 20){
            for (int i = 1; i<5 ;i++){
            cout<<"your input is out of range.\n project mark out of 20%: ";
    cin>>project;} project == 0;break;}
cout<<"\nfinal exam mark out of 50%: ";
cin>>f_exam;
    while (f_exam > 50){
            for (int i = 1; i<5 ;i++){
            cout<<"your input is out of range.\n final exam out of 50%: ";
    cin>>f_exam;}f_exam == 0;break;}
mark = (quiz + test + assignment + project + f_exam);

    if (mark <0 || mark > 100){
        cout<<"Grade out is range.";}
    else if (mark >= 90 && mark <= 100){
        cout<<"your score is "<<mark<<", the corresponding letter-grade is A+." ;}
    else if (mark >= 80){
        cout<<"your score is "<<mark<<", the corresponding letter-grade is A." ;}
    else if (mark >= 75){
        cout<<"your score is "<<mark<<",the corresponding letter-grade is B+." ;}
    else if (mark >= 60){
        cout<<"your score is "<<mark<<", the corresponding letter-grade is B." ;}
    else if (mark >= 55){
        cout<<"your score is "<<mark<<", the corresponding letter-grade is C+." ;}
    else if (mark >= 45){
        cout<<"your score is "<<mark<<", the corresponding letter-grade is C." ;}
    else if (mark >= 30){
        cout<<"your score is "<<mark<<", the corresponding letter-grade is D." ;}
    else{
        cout<<"your score is "<<mark<<", the corresponding letter-grade is F." ;}
}
