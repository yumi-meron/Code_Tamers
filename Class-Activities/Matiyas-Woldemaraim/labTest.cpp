#include <iostream>
using namespace std;

int main() {
    int num_ofemp;
    cout << "enter the number of wokers: ";
    cin >> num_ofemp;
    float work_hrs[num_ofemp], depen[num_ofemp], gross_sal[num_ofemp], overtime[num_ofemp], bonus_rate, bonus_pay[num_ofemp], secu_tax[num_ofemp], fed_tax[num_ofemp], state_tax[num_ofemp], insurance[num_ofemp], net_salary[num_ofemp];
    
    cout << "enter the detail of all the "<<num_ofemp<<" workers: ";
    for(int i=0;i<num_ofemp;i++) {
        cout << "enter the work hours for worker "<<i+1<<": ";
        cin >> work_hrs[i];
        cout << "enter the number of dependent of worker "<<i+1<<": ";
        cin >> depen[i];
        gross_sal[i] = work_hrs[i] * 315;
        if(work_hrs[i]>40) {
            overtime[i] = work_hrs[i] - 40;
            bonus_rate = 1.5 *  315;
            bonus_pay[i] = overtime[i] * bonus_rate; 
        } 
        secu_tax[i] = (gross_sal[i]) * (5/100);
        fed_tax[i] = (gross_sal[i] )* (75/100);
        state_tax[i] = (gross_sal[i]) * (25/100); 
        if(depen[i]<=3) 
            insurance[i] = 850;
        else
            insurance[i] += (850*1.5);
        net_salary[i] = gross_sal[i] + bonus_pay[i] - secu_tax[i] - fed_tax[i] - state_tax[i] - insurance[i];

    }
            cout << "---THE DATA IN TABULAR FORMAT---"<<endl;
        cout << "Gross Salary | Insurance | Net Salary"<<endl;
        for(int j=0;j<num_ofemp;j++) {
            cout << gross_sal[j]<< "     | "<<insurance[j]<<"    |"<<net_salary[j]<<endl;
        }

}