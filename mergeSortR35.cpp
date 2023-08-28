#include <iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int mainIndex=s;
    //copy
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIndex++];
    }
    mainIndex=mid+1;
     for(int i=0;i<len2;i++){
        second[i]=arr[mainIndex++];
    }
    //merge
    int i=0;int j=0;
    mainIndex=s;
   while(i<len1 && j<len2){
    if(first[i]>second[j]){
        arr[mainIndex++]=second[j++];
    }
    else{
         arr[mainIndex++]=first[i++];
    }
   }
  while(i<len1){
     arr[mainIndex++]=first[i++];
  }
   while(j<len2){
     arr[mainIndex++]=second[j++];
  }
  delete []first;
  delete []second;

}

void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

}

int main(){
  
  int arr[]={38,27,43,3,9,82,10};
  int s=0;int e=7;
  mergeSort(arr,s,e-1);
  for(int i=0;i<e;i++){
    cout<<arr[i]<<endl;
  }

}