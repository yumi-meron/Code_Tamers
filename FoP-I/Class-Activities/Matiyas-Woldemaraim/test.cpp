//a program that were on our exam workout
#include <iostream>
using namespace std;

int main() {
    float crh1, crh2, crh3, grade_pt, total_cr, GPA;
    char grade1, grade2, grade3;

    cout << "enter the credit hour of the three courses: "<<endl;
    cin >> crh1>> crh2 >>crh3;
    cout << "enter the grade of the three courses: "<<endl;
    cin >> grade1>>grade2>>grade3;
    switch(grade1) {
        case 'A':
            grade1=4;
        break;
        case 'B':
            grade1=3;
        break;
        case 'C':
            grade1=2;
        break;
        case 'D':
            grade1=1;
        break;
    }
    switch(grade2) {
        case 'A':
            grade2=4;
        break;
        case 'B':
            grade2=3;
        break;
        case 'C':
            grade2=2;
        break;
        case 'D':
            grade2=1;
        break;
    }
    switch(grade3) {
        case 'A':
            grade3=4;
        break;
        case 'B':
            grade3=3;
        break;
        case 'C':
            grade3=2;
        break;
        case 'D':
            grade3=1;
        break;
    }
    grade_pt = (crh1*grade1) + (crh2*grade2) + (crh3*grade3);
    total_cr = crh1+crh2+crh3;
    GPA = grade_pt/total_cr;
    cout << "your gpa is "<<GPA<<endl;

    if(GPA >= 3.5 && GPA <=4)
        cout << "destination";
    else if(GPA >=2 && GPA < 3.5)
        cout << "satisfactory";
    else if(GPA < 2)
        cout << "warning"; 
    else
        cout << "you enetered wrong information";

} 
