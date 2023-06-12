#include <iostream>
using namespace std;

int main() {
    float gross, pension, workHrs, tax, bonus, extraHrs, overTime, netSalary;
    cout << "enter your gross salary: ";
    cin >> gross;
    pension = gross * (0.07);
    cout << "your pension rate is " << pension <<endl;

    if(gross<200) {
        int i;
        for(i=1;i<=5;i++)
        cout << "i didn't say tell me your debt!?";
    }
    else if(gross>=200 && gross <=600) {
        tax = gross * (0.1);
        cout << "your tax is " <<tax <<endl;
    }
    else if(gross>600 && gross <=1200) {
        tax = gross * (0.15);
        cout << "your tax is " <<tax <<endl;
    }
    else if(gross>1200 && gross <=2000) {
        tax = gross * (0.2);
        cout << "your tax is " <<tax <<endl;
    }
    else if(gross>2000 && gross<=3500) {
        tax = gross * (0.25);
        cout << "your tax is " <<tax <<endl;
    }
    else if(gross>3500) {
        tax = gross * (0.3);
        cout << "your tax is " <<tax <<endl;
    }
    
    cout << "enter your working hours: ";
    cin >> workHrs;
    if(workHrs <= 40) {
        netSalary = gross - pension - tax;
        cout << "your net salary is " << netSalary;
    }
    else {
        cout << "enter your bonus rate per hrs: " <<endl;
        cin >> bonus;
        extraHrs = workHrs - 40;
        overTime = extraHrs * bonus; 
        cout << "the overtime payment is " << overTime <<endl;
        netSalary = (gross - pension - tax) + overTime;
        cout << "then your netSalary is " <<netSalary;
    }
    return 0;
}
