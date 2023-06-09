#include <iostream>
#include <cctype>
using namespace std;
int main()
{
char x;
cout<<"enter your character;\n";
cin>>x;
if ('a'<=x&& 'z'>=x){
if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
    cout<<"the character you entered is a lowercase vowel.";}
else {
    cout<<"the character you entered is a lowercase consonant.";
}
}
else if('A'<=x && 'Z'>=x){
if (x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
    cout<<"the character you entered is an uppercase vowel.";}
else {
    cout<<"the character you entered is an uppercase consonant";
}
}
else if('0'<=x && '9'>=x){
  switch(x%2==0){
  case true:
    cout<<"the character you entered is an even digit.";
  break;
  case false:
    cout<<"the character you entered is an odd digit.";
  break;}
}
else{
    cout<<"the character you entered is a special character.";
}
}
