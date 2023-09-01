#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
    node(){
        next=NULL;
        prev=NULL;
    }

};
class doublyLL{
    private:
    node *head;
    public:
    doublyLL(){head=NULL;}
    void print();
    int count();
    void inserthead(int d);
    void inserttail(int d);
    void insertMiddle(int index,int d);
    ~doublyLL(){
        while(head!=NULL){
            node *p=head;
            head=head->next;
            head->prev=NULL;
            p->next=NULL;
            
            delete p;
        }
    }


};
void doublyLL::inserthead(int d){
    node *p=head;
    node *t=new node;
    t->next=NULL;
    t->prev=NULL;
    t->data=d;
   
    if(head==NULL){
        head=t;}
    else{
        t->next=head;
        head->prev=t;
        head=t;}
}

void doublyLL:: inserttail(int d){
     node *p=head;
    node *t=new node;
    t->next=NULL;
    t->prev=NULL;
    t->data=d;
    if(head==NULL){
       head=t;
    }
    else{
        while(p->next!=NULL){
            p=p->next;
            
        }
        p->next=t;
        t->prev=p;
    }

}

void doublyLL:: insertMiddle(int index,int d){
     node *p=head;
    node *t=new node;
    t->next=NULL;
    t->prev=NULL;
    t->data=d;
   
    if(head==NULL){
        head=t;}
    else{
        for(int i=1;i<index-1;i++){

            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        p->next->prev=t;
        p->next=t;
    }

}


int doublyLL:: count(){
    node *p=head;
    int cnt=0;
    while(p!=NULL){
        cnt++;
        p=p->next;
    }return cnt;
 }

void doublyLL:: print(){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    doublyLL d;
    d.inserthead(10);
    //d.inserthead(40);
    d.inserttail(40);
    d.inserttail(20);
    d.inserttail(4);
    d.insertMiddle(2,99);
    d.print();
    int x=d.count();
    cout<<endl;
    cout<<x;
    return 0;
}
