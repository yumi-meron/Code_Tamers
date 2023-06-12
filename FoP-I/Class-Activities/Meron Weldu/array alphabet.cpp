#include<iostream>
using namespace std;
int main(){
char upper[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char lower[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
for (int i=0; i<26; i++){
    cout<<upper[i]<<lower[i];
    cout<<" ";
}
cout<<endl;
char alpha[2][26] = {{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
            {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}};
for (int i=0; i<26; i++){
    cout<<alpha[0][i]<<alpha[1][i];
    cout<<" ";
}

}
