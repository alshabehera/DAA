#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int** p1 =&p;
    cout<<"print *P:"<<*p<<endl;//value of the address ,to which p is pointing
    cout<<"printing p:"<<p<<endl;//value of p i.e,address to which p is pointing
    cout<<"printing &p:"<<&p<<endl;//address of the pointer
    cout<<"printing **p:"<<**p1<<endl;
    cout<<"printing &*p:"<<&*p<<endl;
}