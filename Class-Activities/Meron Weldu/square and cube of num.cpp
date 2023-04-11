#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num=100, sqr, cube;

for (int i=0; i<=100; i++){
        sqr = pow(i,2);
        cube = pow(i, 3);
    cout<<i<<"\t"<<sqr<<"\t"<<cube<<endl;
}



return 0;
}
