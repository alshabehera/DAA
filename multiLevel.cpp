#include<iostream>
using namespace std;
class Animal{
    public:
    int age ;
    int weight;
    
    void speak(){

        cout<<"speaking";
    }
};
class dog:public Animal{

};
class sero:public dog{

};
int main(){
    sero r;
    r.speak();
    r.age=23;
    cout<<r.age;

}
