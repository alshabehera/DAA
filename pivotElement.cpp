#include<iostream>
using namespace std;

int pivot(int *a,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;


    }
    return s;
}

int main(){
    int a[]={7,9,1,2,3};int n=5;
    int p=pivot(a,n);
    cout<<"pivot element index and value:"<<p;
    cout<<endl<<a[p];

}