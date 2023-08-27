#include<iostream>
using namespace std;

void printDigit(string arr[],int x){
    if(x==0){
        return ;
    };
    int digit=x%10;
     x=x/10;
   
   
    printDigit(arr,x);
    cout<<arr[digit]<<endl;
  

}
int main(){
   string arr[]={"zero" , "one" , "two" , "three" , "four" , "five" , "six ", "seven" ,"eight"  ,"nine "};
   int x;
   cout<<"enter digits";
   cin>>x;
 printDigit(arr,x);
}