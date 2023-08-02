#include <iostream>
using namespace std;
class queue{
    private:
    int size;
    int rear;int front;
    int *Q;
    public:
    queue(){
        rear=front=0;
        size=10;
        Q=new int[size];
    }
    queue(int sz){
        rear=front=0;
        this->size=sz;
        Q=new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
    void display();

};
void queue:: enqueue(int x){
    if((rear+1)%size==front){
        cout<<"Queue is full";
    }
    else{
        rear=(rear+1)%size;
        Q[rear]=x;
    }
}

int queue:: dequeue(){
    int x=-1;
    if(rear==front){
        cout<<"queue is empty";
    }
    else{
        front=(front+1)%size;
        x=Q[front];

    }
    return x;
}
void queue:: display(){
    int i=front+1;
    do{
        cout<<Q[i]<<endl;
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
   
}
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);q.enqueue(30);q.enqueue(40);q.enqueue(50);q.enqueue(60);q.enqueue(70);q.enqueue(80);q.enqueue(90);
    q.display();
    cout<<q.dequeue();
    cout<<q.dequeue();cout<<q.dequeue();cout<<q.dequeue();cout<<q.dequeue();
    

}