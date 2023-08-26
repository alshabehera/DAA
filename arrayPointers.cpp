#include<iostream>
using namespace std;

void update(int *y){
   *y=*y+1;
   //y=y+1 we cannot write this way
}
int main(){
   int arr[]={23,34,56,6,3};
   cout<<"first element's index:"<<arr<<endl;
   cout<<"first element's index:"<<&arr[0]<<endl;
   cout<<"value of first element:"<<*arr<<endl;
   cout<<"value of first element:"<<arr[0]<<endl;
   cout<<"5th:"<<*arr+1<<endl;
   cout<<"value of 2nd element:"<<*(arr+1)<<endl;
   cout<<0[arr]<<endl;
   
   
   int temp[10]={2,3,4};
   int *p=&temp[0];
   cout<<"value of 1st index:"<<*p<<endl;
   cout<<"size of arr:"<<sizeof(temp)<<endl;
   cout<<"size of pointer:"<<sizeof(p)<<endl;
   cout<<"size :"<<sizeof(*p)<<endl;
   cout<<"size of pointer address:"<<sizeof(&p)<<endl;

   char ch[6]="abcde";
   cout<<ch<<endl;
   char *c=ch; 
   cout<<c<<endl;
   cout<<*c<<endl;//only first element will show

   int value=5;
   int *y=&value;
   cout<<"before updation:"<<*y<<endl;
   update(y);
   cout<<"after updation:"<<*y<<endl;
}