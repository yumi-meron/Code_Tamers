#include <iostream>
using namespace std;
int main(){
    int c, sumofC=0,sumofG=0, sumscore =0, score=1;
    char grade;
    float gpa;
    for (int x=1;x<=3;x++){
    cout<<"Enter your course credit hours"<<endl;
    cin>>c;
    if(c>=1 && c<=4){
        cout<<"Enter the first course grade"<<endl;
        cin>>grade;
        if(grade =2
        c= 'A'){
            grade = 4;
        }
        else if (grade == 'B'){
            grade = 3;
        }
        else if (grade == 'C'){
            grade = 2;
        }
        else if (grade == 'D'){
            grade = 1;
        }
        else if (grade == 'F'){
            grade = 0;
        }
        sumofC += c;
        score = c*grade;SS
        sumscore+= score;

        
    } 
    }
    gpa=sumscore/sumofC;
    cout<<gpa;
    
}