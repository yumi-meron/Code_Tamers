#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char usr[12], pass[15];
    char usrName[] = "saxachin";
    char password[] = "soloman@123";
    cout << "Enter your name: ";
    cin >> usr;
    cout << "Enter your password: ";
    cin >> pass;

        int right = strcmp(usrName, usr);
        if(right==0) {
            int correct = strcmp(password, pass);
            if(correct==0)
                printf("you signed in successfully.");
            else
                printf("you inserted wrong password!");
            return 0;
        }
        else {
            int correct = strcmp(password, pass);
            if(correct==0)
                printf("check your user name again!");
            else
                printf("you inserted wrong password and user name!");
            return 0;
        }

}
