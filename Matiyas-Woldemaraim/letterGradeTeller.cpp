#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string subject;
    int creditHrs, mark, test, project, assignment, finalExam, value, totalCredit, quiz;
    
    cout << "enter your grade by entering each of the assesment mark: " <<"\n" <<" quiz(5%):  ";
    cin >> quiz;
    int i; 
    for (i = 1; i<=5 && (quiz>5 || quiz<0); i++) {
        cout << "please enter again: ";
        cin >> quiz;
    }
    if(i>5) {
        quiz = 0;
        cout << "your quiz is " <<quiz<<endl;
    }

    cout << "test(15%): ";
    cin >> test;
    for(i = 1; i<=5 && (test>15 || test<0); i++) {
         cout << "please enter again: ";
         cin >> test;
    }
    if(i>5) {
        test = 0;
        cout << "your test is " <<test <<endl;
    }

    cout << "project(20%): ";
    cin >> project;
    for(i=1; i<=5 && (project>20 || project<0);i++) {
        cout << "please enter again: ";
        cin >> project;
    }
    if(i>5) {
       project = 0;
       cout << "your project is " <<project<<endl; 
    }

    cout << "assignment(10%): ";
    cin >> assignment;
    for (i=1; i<=5 && (assignment>10 || assignment<0); i++) {
        cout << "please enter again: ";
        cin >> assignment;
    }
    if(i>5) {
        assignment = 0;
        cout << "your assignment is " << assignment<<endl;
    }

    cout << "final exam(50%): ";
    cin >> finalExam;
    for(i=1;i<=5 && (finalExam>50 || finalExam<0); i++) {
        cout << "please enter again: ";
        cin >> finalExam;
    }
    if(i>5) {
        finalExam = 0;
        cout << "your final exam is " <<finalExam<<endl;
    }

    mark = quiz + test + project + assignment + finalExam;
    cout << "your grade is " << mark<<endl;

    if(mark < 0 || mark >100) {
        cout << "come on men there is no such grade.";
    }
    else if(mark>=90 && mark<=100) {
         cout << "ur letter grade is A+." <<endl;
         value = 4;    }
        
    else if(mark>=85 && mark < 90) {
        cout << "ur letter grade is A." <<endl;
    }
        
    else if(mark>=80 && mark < 85) {
        cout << "ur letter grade is A-." <<endl;
    }
        
    else if(mark>=75 && mark < 80) {
        cout << "ur letter grade is B+" <<endl;
    }
        
    else if(mark>=70 && mark < 75) {
        cout << "ur letter grade is B." <<endl;
    }
        
    else if(mark>=65 && mark < 70) {
        cout << "ur letter grade is B-." <<endl;
    }
        
    else if(mark>=60 && mark < 65) {
        cout << "ur letter grade is c+." <<endl;
    }

    else if(mark>=55 && mark < 60) {
        cout << "ur letter grade is c." <<endl;
    }
    
}