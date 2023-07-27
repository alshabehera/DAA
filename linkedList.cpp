#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first;

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
void count(struct node *first){
     int c=0;
    while(first!=0){
        
        c++;
        first=first->next;
    }
    cout<<c;
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
    

void display(){
    
    while(first!=0){
        cout<<first->data<<" ";
       
        first=first->next;
    }
   
    
}

int main(){
    first=NULL;
    int A[]={3,4,56,6,7,8};
    create(A,6);
    insert(first,3,89);
    display();
    
    //count(first);
   //int s=count(first);
   //cout<<s;
   //insert(first,5,78);
   //display();
}
