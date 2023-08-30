#include<iostream>
using namespace std;
class A{
   public:
    void speak(){

        cout<<"inside function a";
    }
};
class B:public A{

};
class C:public A{

};
int main(){
   B b;
   C c;
   b.speak();
   c.speak();

}
