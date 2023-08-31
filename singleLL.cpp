#include<iostream>
using namespace std;

class node{
public:
int data;
node *next;
};
class linkedList{
   private:
    node *head=NULL;

//node(){node*head=NULL;};
public:

void inserthead(int d);
void insertTail(int d);
void insertMiddle(int pos,int d);
void Delete(int index);
void display();
~linkedList() {
        node* current = head;
        while (current != nullptr) {
            node* temp = current;
            current = current->next;
            delete temp;
} }};

void linkedList:: inserthead(int d){
    node *p=head;
    node *t=new node;
    t->data=d;
    
    if(head==NULL)
    {
    
    head=t;
    t->next=NULL;
    }
     else {
       
        t->next=head;
        head=t;
    }
}

void linkedList :: insertTail(int d){
    node *p=head;
    node *t=new node;
    t->data=d;
    if(head==NULL)
    {head=t;
    t->next=NULL;
    }
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=t;
        t->next=NULL;

    }
}
void linkedList::insertMiddle(int pos,int d){
    node *p=head;
    node *t=new node;
    t->data=d;
    if(pos<0){
        return;}
    
    if(head==NULL){
        
        t->next=NULL;
    }
    else{
        for(int i=1;i<pos-1;i++){
            p=p->next;
        }
        if(p->next==NULL){
            insertTail(d);
        }
        else{
            t->next=p->next;
        p->next=t;
        }
    }
}

void linkedList:: Delete(int index){
    //int x=-1;
     node *p=head;
     node*q=NULL;
if(index<0){
    return ;
   }
   if(index==1){
    p=head;
    head=head->next;
    
    delete p;
   
   }
   else{
    for(int i=0;i<index-1;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    
    delete p;
    

   }
}


void linkedList::display(){
    node *p=head;
    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    linkedList n;
    n.inserthead(30);
    n.insertTail(40);
    n.insertTail(50);
    n.insertTail(10);
    n.insertTail(2);
    n.insertMiddle(6,99);
    n.Delete(5);
  //cout<<x;
   
    n.display();
   return 0;

}