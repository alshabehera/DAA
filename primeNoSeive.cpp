#include<iostream>
#include<vector>
using namespace std;

int CountPrime(int n ){
    vector<bool>prime(n+1,true);
    prime[0]=0;prime[1]=0;
    int count=0;
    int i;
   for(i=2;i<n;i++){
    if(prime[i]){
        count++;
    }
    for(int j=2*i;j<n;j=j+i){
        prime[j]=0;
    }
   }
return count;
}

int main(){
    int n;
    cout<<"Enter a no. to find the number of prime no. between the given number: ";
    cin>>n;
    int x=CountPrime(n);
    cout<<x;
    return 0;
}