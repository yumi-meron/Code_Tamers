#include <iostream>
#include<cmath>
using namespace std;

/*int main(){
	for (int i=1; i<=5;i++){
        for (int j=i; j<=5; j++){
            cout<<"  ";
        }

        for (int j=1; j<=i; j++){
            cout<<"* ";
            }
        for (int j=1; j<i; j++){
            cout<<"* ";
        }cout<<endl;
    }*/
int main(){
 int upperbound;
 cout<<"Enter the upperbound: ";
 cin>>upperbound;
    for(int i = 2; i<= upperbound; ++i){
        int maxFactor = (int)sqrt(i);
        bool isPrime = true;
        int factor = 2;
        while(isPrime && factor<= maxFactor){
            if(i % factor == 0){
                isPrime = false;
            }
            ++factor;
            }
        if(isPrime){
            cout<<i<<" ";
        }
    }



return 0;
}
