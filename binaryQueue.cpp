#include <iostream>
using namespace std;
class node{
    public:
    node *lchild;
    node *rchild;
    int data;
};
class queue{
    private:
    int front;
    int rear;
    node **Q;
    int size;
    public:
    queue(){
        front=rear=-1;
        size=10;
        Q=new node*[size];
    }
     queue(int sz){
        front=rear=-1;
        this->size=sz;
        Q=new node*[this->size];
    }
    void enqueue(node *p);
    node* dequeue();
    void display();
    int isEmpty();
   

};
void queue::enqueue(node *p){
if(rear==size-1){
    cout<<"stack is full";}
 else{
    rear++;
    Q[rear]=p;

 }   
}

node * queue::dequeue(){
    node* x=NULL;
    if(rear==front){
        cout<<"queue is empty";
    }
    else{
        front++;
        x=Q[front];
    }
    return x;
 }
 void queue::display(){
    for(int i=0;i<size-1;i++){
        cout<<Q[i]<<endl;
    }
 }
 int queue:: isEmpty(){
   return front==rear;
 }
