#include <iostream>
#include <math.h>
using namespace std;

int main() {
    char option;
    cout << "enter the number of people you want to calculate bmi for: " <<"\n"<< "A.for a single person" <<"\n"<< "B.for multiple person"<<endl;
    cin >> option;
    switch(option) {
        case 'a':
            float h, w, bmi;
            cout << "enter your height and then your weight: ";
            cin >> h >> w;
            bmi = w / pow(h, 2);

            cout << "your body mass index is: " <<bmi <<endl;
            char gen;
            cout << "enter your gender: m or f" <<endl;
            cin >> gen;
            switch(gen) {
            case 'm':
                if(bmi<20) {
                cout << "shibo" <<endl;
                }
            else if(20<=bmi && bmi<=25) {
                cout << "fine" <<endl;
            }
            else {
                cout << "fatman" <<endl;
            }
            break;
            case 'f':
            if(bmi<18) {
                cout << "skinny" <<endl;
            }
            else if(bmi>=18 && bmi<=23) {
                cout << "nice" <<endl;
            }
            else {
                cout << "fatwoman" <<endl;
            }
            break;
            default:
            cout << "u'r gender doesn't exist." <<endl;
            break;
            }
        break;
        case 'b':
            string reply;
            cout << "do you know the number of people you want to calculate for: answer" << "\n"<< "yes"<<"\n"<<"no"<<endl;
            cin >> reply;
            if(reply == "yes") {
                
                int n;
                cout << "enter the number of people you want to work for: ";
                 cin >> n;
    
                for (int i=1; i <= n; i++) {
                    float h, w, bmi;
                    cout << "enter your height and then your weight: ";
                    cin >> h >> w;
                    bmi = w / pow(h, 2);

                    cout << "your body mass index is: " <<bmi <<endl;
                    char gen;
                    cout << "enter your gender: m or f" <<endl;
                    cin >> gen;
                    switch(gen) {
                    case 'm':
                    if(bmi<20) {
                    cout << "shibo" <<endl;
                    }
                    else if(20<=bmi && bmi<=25) {
                    cout << "fine" <<endl;
                    }
                    else {
                    cout << "fatman" <<endl;
                    }
                    break;
                    case 'f':
                    if(bmi<18) {
                        cout << "skinny" <<endl;
                    }
                    else if(bmi>=18 && bmi<=23) {
                        cout << "nice" <<endl;
                    }
                    else {
                        cout << "fatwoman" <<endl;
                    }
                    break;
                    default:
                    cout << "u'r gender doesn't exist." <<endl;
                    break;
                    
                }
                }
            }
                else if(reply == "no") {
                    int i;
                    while (true) {
                    float h, w, bmi;
                    cout << "enter your height and then your weight: ";
                    cin >> h >> w;
                    bmi = w / pow(h, 2);

                    cout << "your body mass index is: " <<bmi <<endl;
                    char gen;
                    cout << "enter your gender: m or f" <<endl;
                    cin >> gen;
                    switch(gen) {
                    case 'm':
                    if(bmi<20) {
                    cout << "shibo" <<endl;
                    }
                    else if(20<=bmi && bmi<=25) {
                    cout << "fine" <<endl;
                    }
                    else {
                    cout << "fatman" <<endl;
                    }
                    break;
                    case 'f':
                    if(bmi<18) {
                        cout << "skinny" <<endl;
                    }
                    else if(bmi>=18 && bmi<=23) {
                        cout << "nice" <<endl;
                    }
                    else {
                        cout << "fatwoman" <<endl;
                    }
                    break;
                    default:
                    cout << "u'r gender doesn't exist." <<endl;
                    break;
                    }
                    string answer;
                    cout << "\n"<<"do you want to continue?" <<endl;
                    cin>>answer;
                    if(answer=="no" || answer=="nop" || answer=="nah") {
                        break;
                    }

                }
                    
            }

            
    
    }
    
    return 0;
    }
    
    
