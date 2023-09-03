#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

};
class circularLL{
    private:
    node *tail;
    public:
    circularLL(){tail=NULL; }
    void inserthead(int d){
         node *t=new node;
        t->data=d;
      if(tail==NULL){
       tail=t;
        t->next=tail;
        
      }
      else{
        t->next=tail->next;
        tail->next=t;

      }

    }
void  print(){
    node *p=tail->next;
    do{ cout<<p->data<<" ";
        p=p->next;}
    while(p!=tail->next);
}

void Delete(int pos){
    node *p=tail;
    node *q=NULL;
if(pos<1){
    return ;
}
else{
    for(int i=1;i<pos;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    p->next=NULL;
    delete p;
}
}
};



int main(){
    circularLL c;
    c.inserthead(20);
    c.inserthead(78);
    c.Delete(2);
c.print();
}