#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *lchild;
    node *rchild;
};
class binaryST{
    
    
    public:
    node *root=NULL;
    void insert(int key);
    void InOrder(node *p);
    node *search(node *p,int key);
   


};
void binaryST::insert(int key){
    node *p=root;
    
    node *r=NULL;
    if(p==NULL){
      p=new node; 
       p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    if(p!=NULL)
    {
       
       while(p!=NULL){ r=p;
        if(key<p->data){
            p=p->lchild;

        }
        else{
            p=p->rchild;
        }};
        p=new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        if(r->data<p->data){
            r->rchild=p;
        }
        else{
             r->lchild=p;
        }
      
      
    }



}
void binaryST:: InOrder(node *p){
    if(p){cout<<p->data<<" ";
    InOrder(p->lchild);
    InOrder(p->rchild);
}
}
node * binaryST::search(node *p,int key){
    
    if(key==p->data){
        return p;
    }
    else if(key<p->data){
      return search(p->lchild,key);

    }
    else{
        return search(p->rchild,key);
    }

}
int main(){
    binaryST b;
   b.insert(50);
   b.insert(45);
   b.InOrder(b.root);
   node*t=b.search(b.root,45);
   cout<<endl;
   cout<<"found the node having key value "<<t->data;

}
