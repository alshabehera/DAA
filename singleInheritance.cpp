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
int main(){
    dog d;
    d.speak();
    d.age=23;
    cout<<d.age;

}
