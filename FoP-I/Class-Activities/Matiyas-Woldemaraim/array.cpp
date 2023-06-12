//working on arrays
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    //a program that store the ascii code and print out the the alphabet in upper and lowe case
    int upper[26];
    int n = 65;
    for(int k=0; k<26; k++) {
        upper[k] = n;
        n++;
    }

    int lower[26];
    int m = 97;
    for(int p=0;p<26;p++) {
        lower[p] = m;
        m++; 
    }

    for(int i=0, k=0, p=0; i<6;i++) {
        for(int j=0; j<5;j++) {
            cout << (char)upper[k]<<(char)lower[p] <<" ";
            k++;
            p++;
        }
        cout << endl;
    }
    cout << endl;

    //declare and initialize a 2d array
    int array1[5][6] = {{1,2,2,3,4,5}, {2,2,4,6,9,7}, {1,4,5,2,3,6}};
    for(int i=0;i<5;i++) {
        for(int j=0;j<6;j++)
            cout << array1[i][j] <<" ";
         cout << endl;
    }
    
    //a string declaration and initialization
    string name = "matiyas", lname= "wolde";
    int age=20;
    cout << name +" "+ lname + " and age " << age<<endl;
    cout << sizeof(lname);
    
    
}
