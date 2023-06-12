//the first function program
#include <iostream>
using namespace std;

//function prototype for welcome message
void wilkomen();

int main() {
    wilkomen();
}

//function definition for welcome message
void wilkomen() {
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"\nHello, "<<name<<" \nWelcome to M.P.";
}