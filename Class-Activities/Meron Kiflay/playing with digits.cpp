#include <iostream>
using namespace std;
int main()
{
    char choice;
    int input;
cout<<"what do you want to do with your digit?\n";
cout<<"a) Prints the reverses of the number.\n";
cout<<"b) Counts the number of digits in a given number.\n";
cout<<"c) Find the sum of the digits of the a given number.\n";
cout<<"d) Find the product of even digits of the a given number.\n";
cout<<"e) Prints the first and the last digit of the number and find their sum.\n";
cout<<"f) Swap the first and the last digit of the number.\n";
cout<<"g) Check whether a number is palindrome or not.\n";
cout<<"h) Find the frequency of each digit in a given integer and print in table format.\n";
cout<<"i) Check if a number is Armstrong or not.\n";
cout<<"j) Check if a number is Strong or not.\n";
cout<<"k) Check whether a number is Perfect number or not.\n";
cin>>choice;
switch(choice)
{
case 'a':
cout<<"enter your number: ";
cin>>input;
break;
case 'b':
cout<<"enter your number: ";
cin>>input;
break;
case 'c':
cout<<"enter your number: ";
cin>>input;
break;
case 'd':
cout<<"enter your number: ";
cin>>input;
break;
case 'e':
cout<<"enter your number: ";
cin>>input;
break;
case 'f':
cout<<"enter your number: ";
cin>>input;
break;
case 'g':
cout<<"enter your number: ";
cin>>input;
break;
case 'h':
cout<<"enter your number: ";
cin>>input;
break;
case 'i':
cout<<"enter your number: ";
cin>>input;
break;
case 'j':
cout<<"enter your number: ";
cin>>input;
break;
case 'k':
cout<<"enter your number: ";
cin>>input;
break;
default:
cout<<"enter your number: ";
cin>>input;
cout<<input;
break;
}
}
