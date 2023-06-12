#include <iostream>
using namespace std;
int a, b, p, r,m ;
int main()
{
    cout<<"write the first number "<<endl;
    cin>>a;
    cout<<"write the second number"<<endl;
    cin>>b;
    p = a*b;
    r = a % b;
    if(  r == 0 ){

        cout<<"the hcf is: "<<b<<endl;
        cout<<"and the lcf is: "<<p/b<<endl;
         }
        else{
            while(r != 0){
                a = b;
                b = r;
                r = a % b;
                if(r == 0 ){
                     cout<<"the hcf is"<<b<<endl;
                     cout<<"and the lcf is"<<p/b<<endl;

            }
        }

        
    }
    

}