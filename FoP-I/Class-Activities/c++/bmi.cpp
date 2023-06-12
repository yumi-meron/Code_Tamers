#include <iostream>
using namespace std;
int main ()
{
    for(int i; i)
    float h,w;
    float Bmi;
    int random;
    cout<<"enter height";
    cin>>h;
    cout<<"enter mass";
    cin>>w;
    Bmi = w/(h*h);
    cout<<Bmi;
    cin>>random;
    switch (random)
   
    {
        case 1:
        if (Bmi <= 18) 
        {
            cout<<"under weight";
        }
        break;
        if (18<Bmi && Bmi<= 20) 
        {
            cout<<"normal weight";
        }
        break;
        if (Bmi >= 20) 
        {
            cout<<"over weight";
        }
        break;
    
    }
}
