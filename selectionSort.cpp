#include <iostream>
using namespace std;

void selectionSort(int *a,int n){
    int i,j,k;
    int temp;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(a[k]>a[j]){
                k=j;
            }
        }
        temp=a[k];
        a[k]=a[i];
        a[i]=temp;

    }



}

int main(){
    int i;
    int a[]={76,3,5,565,4,31,21,34,1};
    int n=9;
    selectionSort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}