#include <iostream>
using namespace std;
//factorial
int fact(int n){
    if(n==0){
        return 1;
    }
    int sp=fact(n-1);
    int bp=n*sp;
    return bp;
}
int count(int n){
    if(n==0){
 return 0;
    } count(n-1);
    cout<<n<<endl;
  
   
    
   
}
int main(){
    int n;
    cin>>n;
   // int ans=fact(n);
   count(n);
    
    return 0;
}


