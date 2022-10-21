#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0||n==1)
        return n;
    else{
        int a[n+1];
        a[0]=0,a[1]=1;
        for(int i=2;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
        return a[n];
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}

