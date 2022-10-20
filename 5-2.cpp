#include <iostream>

using namespace std;
void minchange(int a[],int n){
    int i;
    while(n){
        for(i=0;i<n;i++){
            if(a[i]<=n && a[i+1]>n){
                cout<<a[i]<<' ';
                n-=a[i];
                break;
            }

    }
}
}

int main()
{
   int a[]={1,2,5,10,20,50,100,200,500,2000,3000};
   int n;
   cin>>n;
   minchange(a,n);
    return 0;
}

