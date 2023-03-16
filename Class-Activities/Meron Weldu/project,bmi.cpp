#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float weight, height, bmi ;
    int num;
    string know, gender , choice;
    cout<<"Do u know the number of people you want to calculate the BMI for?\n \'yes\' or \'no\': ";
    cin>>know;
        if (know == "yes"){
            cout<<"input the number of people: ";
            cin>>num;
            //float heights[num], weights[num],bmi_a[num];
            //string genders[num], conclusion[num];
            for (int i=1; i<= num; i++){
                cout<<"\n what's your Gender?\n \'female\' or \'male\': ";
                cin>>gender;
                //genders[i] = gender;
                cout<<"input your weight: ";
                cin>>weight;
                //weights[i]= weight;
                cout<<"input your height: ";
                cin>>height;
                //heights[i]= height;
                bmi = weight / pow(height ,2);
                //bmi_a[i]= bmi;
                if (gender == "female"){
                     if (bmi > 23){
                        cout<<"your BMI is "<<bmi<<" , you are overweight.";}
                     //conclusion[i]= "overweight"; }
                    else if (bmi< 18){
                        cout<<"your BMI is "<<bmi<<" , you are underweight.";}
                       //conclusion[i]= "Underweight";  }
                    else{
                        cout<<"your BMI is "<<bmi<<" , you are normal weight.";}}
                        //conclusion[i]= "Normal Weight";  }}
               else if (gender == "male"){

                    if (bmi > 25){
                        cout<<"your BMI is "<<bmi<<" , you are overweight.";}
                        //conclusion[i]= "Overweight";  }
                    else if (bmi< 20){
                       cout<<"your BMI is "<<bmi<<" , you are underweight.";}
                       // conclusion[i]= "Underweight";  }
                    else{
                        cout<<"your BMI is "<<bmi<<" , you are normal weight.";}
                        //conclusion[i]= "Normal Weight";  }
                          }}

                   // for (int i=0; i<num; i++){
                      //  cout<<genders[i]<<"   "<<weights[i]<<"  "<<heights[i]<<"  "<<bmi_a[i]<<"    "<<conclusion[i];
                    }
        else{
            while (choice != "no"){
                    cout<<"\n what's your Gender?\n \'female\' or \'male\': ";
                    cin>>gender;
                    cout<<"input your weight: ";
                    cin>>weight;
                    cout<<"input your height: ";
                    cin>>height;
                    bmi = weight / pow(height ,2);
                    if (gender == "female"){
                         if (bmi > 23){
                            cout<<"your BMI is "<<bmi<<" , you are overweight.";}
                        else if (bmi< 18){
                            cout<<"your BMI is "<<bmi<<" , you are underweight.";
                        }
                        else{
                            cout<<"your BMI is "<<bmi<<" , you are normal weight.";}}
                   else if (gender == "male"){

                        if (bmi > 25){
                            cout<<"your BMI is "<<bmi<<" , you are overweight.";
                            }
                        else if (bmi< 20){
                                cout<<"your BMI is "<<bmi<<" , you are underweight.";
                        }
                        else{
                            cout<<"your BMI is "<<bmi<<" , you are normal weight.";}

                    }
                            cout<<"\nDo you want to continue?\n\'yes\' or \'no\': ";
                            cin>>choice;}}}

