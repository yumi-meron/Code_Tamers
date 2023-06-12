# include <iostream>
using namespace std;
int main()
{
    int num, r, rev = 0;
    cout<<"enter any digit";
    cin>>num;
    while(num)
    {
     r= num % 10;
     
      num = num/10;
      rev = (rev * 10) + r;
      

 }  
    cout<<rev;
}