#include<iostream>
using namespace std;
class Animal{
    public:
    int age ;
    int weight;
    void bark(){
        cout<<"barkig";
    }
 
};
class human{
    public:
    char tag;
       void speak(){

        cout<<"speaking";
    }
    
};
class pet:public human,public Animal{

};
int main(){
    pet p;
    p.speak();
    p.bark();

}
