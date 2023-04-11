#include<iostream>
#include<cstring>
using namespace std;
int main(){
char id[11];
char stu_ID[4][20]= {{'E', 'T', 'S', '1', '0', '4', '8', '/', '1', '4', '\0'},
                    {'E', 'T', 'S', '1', '0', '4', '4', '/', '1', '4', '\0'},
                    {'E', 'T', 'S', '1', '0', '4', '9', '/', '1', '4', '\0'},
                    {'E', 'T', 'S', '1', '0', '5', '0', '/', '1', '4', '\0'}};
char names[4][20]= { {'M', 'E', 'R', 'O', 'N', '_', 'W', 'E', 'L', 'D', 'U', '\0' },
                {'M', 'E', 'R', 'O', 'N', '_', 'K', 'I', 'F', 'L', 'A', 'Y' ,'\0' },
                {'M', 'E', 'R', 'O', 'N', '_', 'N', 'I', 'G', 'U', 'S', 'U', '\0' },
                {'M', 'E', 'R', 'O', 'N', '_', 'Z', 'E', 'M', 'E', 'N', 'U', '\0' }};
cout<<"input your ID number: ";
cin>>id;
for (int i=0; i<4; i++){
    id[i]= toupper(id[i]);
}
for (int i=0; i<4; i++){
    bool result = strcmp(id, stu_ID[i]);
    stu_ID[i] == names[i];
    if (result == 0){
    cout<<names[i];
        break;
    }

}

}
