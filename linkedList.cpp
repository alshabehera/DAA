#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int *A,int n){
    first=new node;
    struct node *t,*last;
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    int i;
    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int sum(struct node *first){
    int sum=0;
    while(first!=0){
        sum=sum+first->data;
        first=first->next;
    }
   return sum;
}

void insert(struct node *p,int index,int x){
        struct node *t;
        if(index<0){
            return ;}
        t=new node;
        t->data=x;    
    
        if(index==0){
            t->next=first;//address in pointer p(pointer p is in stack call)
             first=t;//now pointer p in stack will have address of t
            }
        else{
                
                for(int i=0;i<index-1;i++){
                    p=p->next;
                }
                
                t->next=p->next;
                p->next=t;

                
            }
        }


void sortInsert(struct node *p,int key){
    struct node *t ;
    struct node *q=NULL ;
    t=new node;
    t->data=key;
    t->next=NULL;
    
    if(first==NULL){
        first=t;
    }
    else{ 
        while(p!=0 && key>p->data){
        q=p;
        p=p->next;

    }
    if(p==first){
        t->next=first;
        first=t;

    }
    else{t->next=q->next;

q->next=t;}

}
}
void display(){
    
    while(first!=0){
        cout<<first->data<<" ";
       
        first=first->next;
    }
     
}

int Delete(struct node *p,int index){
   struct node *q;
   q=NULL;
   int x=-1;
   if(index<0){
    return -1;
   }
   if(index==1){
    p=first;
    first=first->next;
    x=p->data;
    delete p;
    return x;
   }
   else{
    for(int i=0;i<index-1;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    delete p;
    return x;

   }
}

void reverseNode(){
    struct node *q=NULL;
    int *A;
    int i=0;
    A=new int[7];
    q=first;
    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=first;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }


}
void reverseLink(struct node *p){
struct node *q=NULL;
struct node *r=NULL;
p=first;
while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;
    
}
first=q;

}

int main(){
    
    int A[]={3,4,5,23,56,87,89};
    create(A,7);
    //sortInsert(first,15);
    //Delete(first,4);
    reverseLink(first);
    display();
    
    
    //insert(first,3,89);
    
    
    //count(first);
   //int s=count(first);
   //cout<<s;
   //insert(first,5,78);
   //display();
}
