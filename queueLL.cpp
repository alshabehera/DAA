#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class queue{
    private:
    node *front;
    node *rear;
    public:
    queue(){front=rear=NULL;}
    void enqueue(int x);
    int dequeue();
    void display();
   ~queue();
};
void queue::enqueue(int x){
     node *t;
    t=new node;
    if(t==NULL)//heap is full
    {
        cout<<"Queue is full";
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){front=rear=t;}
        else{
            rear->next=t;
            rear=t;
            cout<<"tada";

        }
       

    }
    
}
int queue:: dequeue(){
    node *p;
    int x=-1;
    if(front==NULL){
        cout<<"Queue is empty";
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete p;

    }
    return x;

}
void queue:: display(){
    node *p=front;
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;

    }

}
queue::~queue() {
    while (front != NULL) {
        node* p = front;
        front = front->next;
        delete p;
    }
}
int main(){
    queue q;
    q.enqueue(10);
    q.display();
}