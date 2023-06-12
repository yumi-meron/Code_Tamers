#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char input;
    cout<<"Enter any character: ";
    cin>>input;
        if ('A' <= input && 'Z' >= input){
            if (input = 'A' , 'E' , 'I' , 'O' , 'U'){
                cout<<"Your input \'"<<input<<"\' is a Vowel Upper case.";}
            else{
                cout<<"Your input \'"<<input<<"\' is a Consonant Upper case.";}}

        else if('a' <= input && 'z' >= input){
            if (input = 'a', 'e', 'i', 'o', 'u'){
                cout<<"Your input \'"<<input<<"\' is a Vowel Lower case.";}
            else{
                cout<<"Your input \'"<<input<<"\' is a consonant lower case.";
            }}
        else if(isdigit(input)){

                if (input%2 == 0){
                    cout<<"Your input \'"<<input<<"\' is an even Digit.";}
                else{
                    cout<<"Your input \'"<<input<<"\' is an odd Digit.";
                    }}
        else{cout<<"Your input \'"<<input<<"\' is a special character.";
        }}
