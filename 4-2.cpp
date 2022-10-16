#include<bits/stdc++.h>
using namespace std;
void peak(int arr[],int n){
    if(n==1)
    cout<<arr[0];
    if(arr[0]>=arr[1])
        cout<<arr[0]<<endl;
    if(arr[n-1]>=arr[n-2])
       cout<<arr[n-1]<<endl;
    else{
    for(int i=2;i<n-1;i++){
        if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1]){
            cout<<arr[i]<<endl;
        }
    }
  }
}
int main(){
    int arr[]={7,6,14,200,175};
    int n=sizeof(arr)/sizeof(arr[0]);
    peak(arr,n);

    return 0;
}