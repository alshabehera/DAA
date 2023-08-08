#include <iostream>

using namespace std;


int partition(int *a,int l,int h){
    int pivot=a[l];
    int i,j;
    i=l;j=h;int temp;
    do{
    do{i++;}while(pivot>=a[i]);
    do{j--;}while(pivot<a[j]);
    if(i<j){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;

    }
    }while(i<j);
     temp=a[j];
        a[j]=a[l];
        a[l]=temp;
    return j;
   

}
void quickSort(int *a,int l,int h){
    
    int j;
    if(l<h){
         j=partition(a,l,h);
         quickSort(a,l,j);
         quickSort(a,j+1,h);

    }
   
}
int main(){
     int i;
    int a[]={76,3,5,565,4,31,21,34,1,INT32_MAX};
    int n=9;
    quickSort(a,0,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

