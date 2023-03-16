#include<iostream>
using namespace std;
int main(){
float g_salary, income_tax, tax_rate, pension, w_hours,tax ,bonus_rate , bonus, bonus_hour, net_salary ;
cout<<"How much is your Gross Salary? ";
cin>>tax;
if (g_salary < 200){
    tax_rate = 0;}
else if (g_salary > 200 && g_salary < 600){
    tax_rate = 10/ 100;}
else if (g_salary > 600 && g_salary < 1200){
    tax_rate = 15/ 100;}
else if (g_salary > 1200 && g_salary < 2000){
    tax_rate = 20/ 100;}
else if (g_salary > 2000 && g_salary < 3500){
    tax_rate = 25/ 100;}
else if (g_salary > 3500){
    tax_rate = 30/ 100;}
        cout<<"How much is your working hour? ";
        cin>>w_hours;
            if (w_hours > 40){
                cout<<"What is the over time bonus rate per hour? ";
                cin>>bonus_rate;
                bonus_hour = (w_hours - 40);
                bonus = (bonus_hour * bonus_rate/100);}

income_tax = (g_salary *tax_rate );
pension = (g_salary * 7/100);
net_salary = (g_salary - pension - income_tax) + bonus ;
cout<<"Your Net Salary is "<<net_salary;
}
