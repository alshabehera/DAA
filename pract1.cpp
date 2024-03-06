#include<iostream>
using namespace std;
void fun(int* arr,int n){
    int t;
    for(int i=0;i<n;i=i+2){
        if(i==n-1){
            break;
        }
        t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;

    }

}
int main(){
int arr[]={2,0,4,5,9,8};
int n=6;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
fun(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}