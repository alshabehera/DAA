#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
node* createTree(node* root){
    int data;
    cout<<"enter data "<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data inserting in left of"<<data<<endl;
    root->left=createTree(root);
    cout<<"enter data inserting in right of"<<data<<endl;
    root->right=createTree(root);
    return root;

}
void levelorder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
       
        q.pop();
        if(temp==NULL){
            cout<<endl;
             if(!q.empty()){
                q.push(NULL);
       }
        }
        else{
                cout<<" "<<temp->data;
       if(temp->left){
        q.push(temp->left);
       }
       if(temp->right){
        q.push(temp->right);
       }
        }
       
    }//2 3 4 -1 -1 98 -1 -1 67 -1 -1
}
node* insertlevlbylevel(node* root){
queue<node*>q;
int data;
cout<<"enter the data:"<<endl;
cin>>data;
root=new node(data);
q.push(root);
while(!q.empty()){
    
}

    
}
int main(){
    node* root=NULL;
    root=createTree(root);
    //inorder(root);
    levelorder(root);
}