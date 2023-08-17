#include <iostream>
using namespace std;

int binarySearch(int n){
    int s=0;int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
   
    while(s<=e){
        int sqr=mid*mid;
        if(sqr==n){
            return mid;
        }
        else if(sqr<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}


int floorSqrt(int n)
{
   return binarySearch(n);
}
int main(){
    int s=floorSqrt(6);
    cout<<s;
}