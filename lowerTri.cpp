#include <iostream>
using namespace std;
int main(){
    int A[4][4];
    
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           if(j>i){
            A[i][j]=0;
           }
           if(i>=j){
            A[i][j]=(i+j)+1;
           }
        }
        
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           
            cout<<" "<<A[i][j]<<" ";
            }
            cout<<endl;
        }
}