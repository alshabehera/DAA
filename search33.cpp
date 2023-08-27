#include <iostream>
using namespace std;

int binary(int *arr,int s,int e,int key)
{
    int mid=s+(e-s)/2;
if(e<=s){
    return -1;
}
if(arr[mid]==key){
    return mid;
}
else if(arr[mid]<key){
    return binary(arr,mid+1,e,key);
}
else{
    return binary(arr,s,mid-1,key);
}
}
int main(){
    int arr[]={12,34,56,57,78,90};
    int e=6;int s=0;
    int ans=-1;
    int key;
    cout<<"Enter key:";
    cin>>key;
    ans=binary(arr,s,e,key);
    cout<<ans;

}