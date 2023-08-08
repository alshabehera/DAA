#include <iostream>
using namespace std;

void insertionSort(int *a,int n){
    int i,j;
    int x;
    for(i=1;i<n;i++){
        j=i-1;
        x=a[i];
        while(j>-1 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;



    }
}
int main(){
    int A[]={9,4,5,34,1,43};
    int n=6;int i;
    insertionSort(A,n);
    for(i=0;i<n;i++){
        cout<<A[i]<<endl;

    }
}
