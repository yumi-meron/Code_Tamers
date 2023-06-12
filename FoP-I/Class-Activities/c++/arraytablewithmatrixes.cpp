#include <iostream>
using namespace std;
#define maxrow 10
#define maxcol 10

int main(){

    int mat1[maxrow][maxcol];
    int mat2[maxrow][maxcol];
    int res_mat[maxrow][maxcol];
    int i,j,row ,col;
    cout<<"Enter first matrix: \n enter number of rows:";
    cin>>row;
    cout<<"Enter no of colomun:";
    cin>>col;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"enter value of row "<<(i)<<","<<"enter value of column "<<(j)<<":";
            cin>>mat1[i][j];
        }
    }
    cout<<"generated table ........\n/******matrix one*****/\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<mat1[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<mat1[i][j] + mat1[i][j]<<" ";
        }
        cout<<"\n";
    }
    mat1[0][1] = 44;
   cout<<mat1[0][1];
   for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<mat1[i][j]<<" ";
            
        }
        cout<<"\n";
    }

}