#include<iostream>
using namespace std;
int firstOcuurance(int *a,int n,int key){
    int s=0;int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(key==a[mid]){
            ans=mid;
            e=mid-1;}
        else if(key>a[mid]){
            e=mid-1;
        }   
        else if(key<a[mid]){s=mid+1;

        } mid=s+(e-s)/2;

    }return ans;
}
int lasttOcuurance(int *a,int n,int key){
    int s=0;int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(key==a[mid]){
            ans=mid;
            s=mid+1;}
        else if(key>a[mid]){
            e=mid-1;
        }   
        else if(key<a[mid]){s=mid+1;

        } mid=s+(e-s)/2;

    }return ans;
}
int main(){
    int a[]={1,1,2,3,4,4,4,4,9};
    int f=firstOcuurance(a,9,4);
    int l=lasttOcuurance(a,9,4);
    cout<<"found fo:"<<f<<endl;

cout<<"last for:"<<l;

}