#include <iostream>
using namespace std;

class queue{
   public:
    int *Q;
    int size;
    int front,rear;
    queue(){};
    queue(int sz){this->size=sz;Q=new int[size];front=rear=-1;}
    void enqueue(int key);
    int dequeue();
    int isEmpty();
};
void queue:: enqueue(int key){
    if(rear==size-1){
        cout<<"queue is full";
    }
    else{
        rear++;
        Q[rear]=key;
    }
}
int queue::dequeue(){
    int x;
    if(rear==front){
        cout<<"queue is empty";
    }
    else{
        front++;
       x=Q[front];
       return x;
    }
    
}
int queue::isEmpty(){
    if(rear==front){
        return 1;
    }
    return 0;

}
void BFS(queue ,int A[][7],int s){
    queue q(7);int i;
    int visited[q.size]={0};
    int v;
    cout<<s;
    visited[s]=1;
    q.enqueue(s);
    while(!q.isEmpty()){
        v=q.dequeue();
        for(int i=1;i<=7;i++){
            if(A[v][i]==1 && visited[i]==0){
                cout<<i;
                visited[i]=1;
                q.enqueue(i);
            }
        }
    }

}
void DFS(queue q,int s){

    cout<<s;
    int visited[q.size]={0};
    

}
int main(){
    queue q(7);
    
    int A[7][7]={
    {0,0,0,0,0,0,0},
    {0,0,1,1,0,0,0},
    {0,1,0,0,1,0,0},
    {0,1,0,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0},
    
    
    
    };
    BFS(q,A,5);
    
}