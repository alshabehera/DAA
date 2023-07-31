#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *prev;
    struct node *next;
}*first=NULL;

void create(int *A,int n){
    struct node *t;
    struct node *last;
    int i;
    first= new node;
    first->data=A[0];
    first->next=NULL;
    first->prev=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        t->prev=last;
        last=t;
    }


}
void display(struct node *p){
    p=first;

    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
        
    }
}
int main(){

int A[]={2,3,4,5,6,7,8};
create(A,7);
display(first);
}