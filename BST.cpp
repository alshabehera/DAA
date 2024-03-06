#include<iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
node* insertNode(node* root,int data){
    
    if(root==NULL){
        root= new node(data);
       
        return root;
    }
    if(data < root->data){
        root->left=insertNode(root->left,data);
    }
    if(data > root->data){
        root->right=insertNode(root->right,data);
    }
    return root;
}
void takeInput(node* &root){
    int data;
    cout<<"enter data";
    cin>>data;
    while(data!=-1){
       root= insertNode(root,data);
        cin>>data;
    }
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

bool searchBST(node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data > x){
        searchBST(root->left,x);
    }
    else{
         searchBST(root->right,x);
    }
    
}


node* deleteBST(node* root,int x){

}

int main(){
    node* root=NULL;
    takeInput(root);
    levelorder(root);
    cout<<searchBST(root,67);
    deleteBST(root,67);
}

