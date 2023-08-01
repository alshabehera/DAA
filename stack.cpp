#include <iostream>
#include <string.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

class stack{
private:
    node *top;
public:
    stack(){top=NULL;}
    void push(char x);
    char pop();
    int stTop();
    void display(); 
    char *inToPost(char *infix);   


};

void stack::push(char x){
    node *t=new node;
    if(t==NULL){
        cout<<"stack overflow";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
char stack:: pop(){
     node *p;
    int x=-1;
    if(top==NULL){
        cout<<"stack is underflow";
        }
    else{
        p=top;
    top=p->next;
    x=p->data;
    delete p;}
    return x;
}
int stack:: stTop(){
   if(top){
    return top->data;
   }
   else{
    return -1;
   }


}

void stack::display(){
    node *p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int pre(char x){
    if(x=='+'||x=='-'){
        return 1;
    }
    else if(x=='*'||x=='/')
    {return 2;}
    else{return 0;}
}
int isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'){
        return 0;
    }
    else {
        return 1;
    }
}
char* stack:: inToPost(char *infix){
    node *p=top;
    int len=strlen(infix)+1;
    char *postfix=new char[len];
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];

        }
        else{
            if(pre(infix[i])<pre(top->data)){
                postfix[j++]=pop();
            }
            else{
                push(infix[i++]);
            }
        }
        }
        while(top!=NULL){
            postfix[j++]=pop();
            
        }
        postfix[j]='\0';
     return postfix;
    

}

int main(){
    stack st;
    char *infix="a+b*c";
    st.push('#');
    char *postfix=st.inToPost(infix);
    cout<<postfix;

   


}