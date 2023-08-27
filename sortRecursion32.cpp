#include<iostream>
using namespace std;
bool sortR(int *arr,int s,int n){
    if(n==0 ||n==1){
        return 1;
    }
    
    if(arr[s]>arr[s+1])
        return false;
    sortR(arr,s+1,n-1);
   return 1;
}
int main(){
    int arr[5]={1,2,3,4,5} ;
    int n=5;
    int s=0;
    cout<<sortR(arr,s,n);

}