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
                if(bmi<20) 
                    cout << "shibo" <<endl;
                else if(20<=bmi && bmi<=25) 
                    cout << "fine" <<endl;
                else 
                    cout << "fatman" <<endl;
            break;
            case 'f':
                if(bmi<18) 
                    cout << "skinny" <<endl;
                else if(bmi>=18 && bmi<=23)
                    cout << "nice" <<endl;
                else 
                    cout << "fatwoman" <<endl;
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
                
                int person;
                cout << "enter the number of people you want to work for: ";
                cin >> person;
                float height[person], weight[person], bmass[person];
                char gender[person];
                
                for (int i=0; i < person; ++i) {
                    float h, w, bmi;
                    cout << "enter your height and then your weight: ";
                    cin >> h >> w;
                    height[i]=h;
                    weight[i]=w;
                    bmi = w / pow(h, 2);
                    bmass[i]=bmi;

                    cout << "your body mass index is: " <<bmi <<endl;
                    char gen;
                    cout << "enter your gender: m or f" <<endl;
                    cin >> gen;
                    gender[i]=gen;
                    switch(gen) {
                    case 'm':
                        if(bmi<20) {
                            cout << "shibo" <<endl;
                        else if(20<=bmi && bmi<=25) 
                            cout << "fine" <<endl;
                        else 
                            cout << "fatman" <<endl;
                    break;
                    case 'f':
                        if(bmi<18) 
                            cout << "skinny" <<endl;
                        else if(bmi>=18 && bmi<=23) 
                            cout << "nice" <<endl;
                        else 
                            cout << "fatwoman" <<endl;
                    break;
                    default:
                        cout << "u'r gender doesn't exist." <<endl;
                    break;
                    
                }
                }
                cout<<"............THE TABULAR FORM FOR THE BMI......................"<<endl;
                cout<<"---------------------------------------------------------------"<<endl;
                cout<<".......THE BMI DATA FOR MULTIPLE PERSON WITH KONWN NUMBER......."<<endl;
                cout<<"Person\tHeight\tWeight\tGender\tBMI\n";
                for(int f=0;f<person;++f) {
                    cout<<f+1<<"\t";
                    cout<<height[f]<<"\t";
                    cout<<weight[f]<<"\t";
                    cout<<gender[f]<<"\t";
                    cout<<bmass[f]<<endl;
                }
            }
                else if(reply == "no") {
                    int i=0;
                    while (true) {
                        float h, w, bmi, height[20], weight[20], bmass[20];
                        char  gender[20];
                        cout << "enter your height and then your weight: ";
                        cin >> h >> w;
                        height[i]=h;
                        weight[i]=w;
                        bmi = w / pow(h, 2);
                        bmass[i]=bmi;

                        cout << "your body mass index is: " <<bmi <<endl;
                        char gen;
                        cout << "enter your gender: m or f" <<endl;
                        cin >> gen;
                        gender[i]=gen;
                        switch(gen) {
                        case 'm':
                            if(bmi<20) 
                            cout << "shibo" <<endl;
                            else if(20<=bmi && bmi<=25) 
                                cout << "fine" <<endl;
                            else 
                                cout << "fatman" <<endl;
                        break;
                        case 'f':
                            if(bmi<18) 
                                cout << "skinny" <<endl;
                            else if(bmi>=18 && bmi<=23) {
                                cout << "nice" <<endl;
                            else 
                                cout << "fatwoman" <<endl;
                        break;
                        default:
                            cout << "u'r gender doesn't exist." <<endl;
                        break;
                        }
                        string answer;
                        cout << "\n"<<"do you want to continue?" <<endl;
                        cin>>answer;
                        if(answer=="no" )
                            break;
                }
                cout<<"............THE TABULAR FORM FOR THE BMI......................"<<endl;
                cout<<"---------------------------------------------------------------"<<endl;
                cout<<".........THE BMI DATA FOR UNKOWN MULTIPLE PERSON NUMBER........"<<endl;
                cout<<"Person\tHeight\tWeight\tGender\tBMI\n";
                for(int j=0;j<i;++j) {
                    cout<<j+1<<"\t";
                    cout<<height[j]<<"\t";
                    cout<<weight[j]<<"\t";
                    cout<<gender[j]<<"\t";
                    cout<<bmass[j]<<endl;
                }
            }
    }
    
    if(option=='a') {
        cout << "............THE TABULAR FORM FOR THE BMI...................."<<endl;
        cout << "------------------------------------------------------------"<<endl;
        cout << "                   THE BMI DATA FOR SINGLE PERSON                              "<<endl;
        cout << "------------------------------------------------------------"<<endl;
        cout << "height\t|\tweight\t|\tgender\t|\tBMI\t|\tstatus"<<endl;
        cout <<h << "\t|\t"<<w<<"\t|\t"<<gen<<"\at|\t"<<bmi<<"\t|\t"<<endl;
    }
    return 0;
    }
    
    
