#include <iostream>
using namespace std;
enum days {mon, tue, wed, thrus, fri,sat};
int z = 6;
int main(){
    const int the_number = 5;
    #define the_other 4.6;
    float product = the_number * the_other;
    cout<<product<<endl;
    cout<<days(fri);
    int z = 2;
    cout<<::z<<endl;
double height = 5.5;
    if( height-- >5.0)
        cout<<"tall";
    if(--height >4.0)
        cout<<"average";
    if(height-- >3.0)
        cout<<"short";
    else
        cout<<"very short";
         int i,j;
    i = !(4!=7);
    j = (12<80 || 5<12);
    cout<<i<<endl;
    cout<<j<<endl;
    int p;
    bool a = true;
    bool b = false;
    int x = 10;
    int y = 5;
    p = (x|y)+(a+b);
    cout<<p;
    int c =5;
    float h;
    cout<<sizeof(++c+h)<<endl;
    cout<<c<<endl;
    int w =5;
    float t = 4.5;
    cout<<w+t;
    }

   