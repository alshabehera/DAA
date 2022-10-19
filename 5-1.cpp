#include <iostream>

using namespace std;
int catalan(int n){
    if(n==1)
        return 1;
    else{
        int a[n];
        a[0]=1;
        a[1]=1;
        for(int i=2;i<=n;i++)
            a[i]=(a[i-1]*2*i*(2*i-1))/(i*(i+1));
            return a[n-1];
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<catalan(n+1);
    return 0;
}
