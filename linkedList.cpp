#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

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
void create2(int *B,int n){
    struct node *t,*last;
    int i;
    second=new node;
    second->data= B[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++){
     t=new node;
     t->data=B[i];
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
void display(struct node* p){
    
    while(p!=0){
        cout<<p->data<<" ";
       
       p=p->next;
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
void merge(struct node*f,struct node*s){
    struct node *last;
    third= new node;
    if(f->data<s->data){
        third=f;
        last=f;
        f=f->next;
        third->next=NULL;
        
    }
    else{
        third=s;
        last=s;
        s=s->next;
        third->next=NULL;
    }

    while(f!=NULL && s!=NULL){
        if(f->data<s->data){
            last->next=f;
            last=f;
            
            f=f->next;
            last->next=NULL;
        }
        else{  last->next=s;
            last=s;
            s=s->next;
            last->next=NULL;
           
        }
    }
    if(f){
        last->next=f;
    }
     if(s){
        last->next=s;
    }
}
int isLoop(struct node *first){
    struct node *p;
    struct node *q;
    p=q=first;
    do{
        p=p->next;
        q=q->next;
        q=q!=0?q->next:q;
    }
    while(p && q && p!=q);
    if(p==q){
        return 1;
    }
    else{
        return 0;
    }
}
int circularDelete(struct node *p,int pos){
struct node *q=NULL;
int x;
p=first;
if(pos==1){
    while(p->next!=first){
        p=p->next;
    }
    if(p=first){
        x=first->data;
        delete first;
        first=NULL;
    }
    else{
        p->next=first->next;
        x=first->data;
        delete first;
        first=p->next;

    }}
else{
    for(int i=0;i<pos-2;i++){
p=p->next;
    }
    q=p->next;
    p->next=q->next;
    x=q->data;
    delete q;
}  
return x;

}  




int main()
{
    struct node *t1;
    struct node *t2;
    
    int A[]={3,6,10,23,56,87,89};
    //int B[]={4,5,8,45,46,57,100};
    create(A,7);
    display(first);
    //create a loop
    t1=first->next->next->next;
    t2=first->next->next->next->next->next->next;
    t2->next=t1;
    display(first);
    cout<<endl;
    //cout<<isLoop(first);
    cout<<circularDelete(first,4);

    //create2(B,7);
    //sortInsert(first,15);
    //Delete(first,4);
    //reverseLink(first);
    //merge(first,second);
    //display(third);

    
    
    //insert(first,3,89);
    
    
    //count(first);
   //int s=count(first);
   //cout<<s;
   //insert(first,5,78);
   //display();
}
