#include <iostream>
#include "binaryQueue.cpp"
using namespace std;
class tree{
    public:
  node *root;
  tree(){root=NULL;}
  void create();
  void preorder(node *p);void inorder(node *p);void postorder(node *p);
  void level();
  void height();
};

void tree::create(){
    node *p;
    node *t;
    int x;
    queue Q(100);
    root=new node;
    cout<<"enter the root value:";
    cin>>x;
    root->data=x;
    root->lchild=root->rchild=NULL;
    Q.enqueue(root);
    while(!Q.isEmpty()){
        p=Q.dequeue();
        cout<<"Enter leftchild value of "<<p->data<<":";
        cin>>x;
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->lchild=t;
            Q.enqueue(t);

        }
        cout<<"Enter rightchild value of "<<p->data<<":";
        cin>>x;
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->rchild=t;
            Q.enqueue(t);


        }
        


    }


}
void tree:: preorder(node *p){
   
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void tree:: inorder(node*p){
    
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);

    }
}
void tree:: postorder(node*p){
    
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
  
    }
}
void tree::level(){
    queue Q(100);
    cout<<root->data<<" ";
    Q.enqueue(root);
    if(!Q.isEmpty()){
        root=Q.dequeue();
        if(root->lchild){
            cout<<root->lchild->data<<" ";
            Q.enqueue(root->lchild);

        }
         if(root->rchild){
            cout<<root->rchild->data<<" ";
            Q.enqueue(root->rchild);
    }
}
}
int main(){
    tree t;
    t.create();
    //t.preorder(t.root);
    t.level();
}
