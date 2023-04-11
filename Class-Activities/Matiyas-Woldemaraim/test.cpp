//a program that were on our exam workout
#include <iostream>
using namespace std;

int main() {
    float h, i, j, pt, tot, GPA;
    char e, f, g;

    cout << "enter the credit hour of the three courses: "<<endl;
    cin >> h >> i>>j;
    cout << "enter the grade of the three courses: "<<endl;
    cin >> e>>f>>g;
    switch(e) {
        case 'A':
            e=4;
        break;
        case 'B':
            e=3;
        break;
        case 'C':
            e=2;
        break;
        case 'D':
            e=1;
        break;
    }
    switch(f) {
        case 'A':
            f=4;
        break;
        case 'B':
            f=3;
        break;
        case 'C':
            f=2;
        break;
        case 'D':
            f=1;
        break;
    }
    switch(g) {
        case 'A':
            g=4;
        break;
        case 'B':
            g=3;
        break;
        case 'C':
            g=2;
        break;
        case 'D':
            g=1;
        break;
    }
    pt = (h*e) + (i*f) + (j*g);
    tot = i+j+h;
    GPA = pt/tot;
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