#include <iostream>
using namespace std;

void bubbleSort(int *a,int n){
    int i;int j;int flag;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }



        }
        if(flag==0){
            cout<<"given elements are already set.";
            return;
        }
    }

}
void swap(int *a,int *b){
    int *temp;
    temp=a;
    a=b;
    b=a;
}
void display(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}


int main(){
    int a[]={3,2,4,98,8,4};
    bubbleSort(a,6);
    display(a,6);
    return 0;
}