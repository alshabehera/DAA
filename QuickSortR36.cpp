#include<iostream>
using namespace std;


int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);
    int i=s;int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){i++;}
        while(arr[j]>pivot){j--;}
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}


void QuickSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    //partition index
    int p=partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}
int main(){
    int arr[]={6,4,1,10,2,56,8};
    int e=7;
    int s=0;
    QuickSort(arr,s,e-1);
    for(int i=0;i<e;i++){
        cout<<arr[i]<<endl;
    }
}