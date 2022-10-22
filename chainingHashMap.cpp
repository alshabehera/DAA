#include <iostream>
using namespace std;

class node{
    public:
    node *next;
    int data;
};
class hashTable{
    public:
    node **h;
    hashTable();
    int hashKey(int key);
    void insert(int key);
    int search(int key);
    ~hashTable();

};
hashTable::hashTable(){
    h=new node*[10];
    for(int i=0;i<10;i++){
        h[i]=nullptr;
    }
}
int hashTable::hashKey(int key){
return key%10;

}
void hashTable::insert(int key){
    int hi=hashKey(key);
    node *t=new node;
    t->data=key;
    t->next=NULL;
    if(h[hi]==nullptr){
        h[hi]=t;
    }
    else{
        node *p;
        node *q=h[hi];
        p=h[hi];
        while( p && p->data<key ){
            q=p;
            p=p->next;
        }
        if(q==h[hi]){
            t->next=h[hi];
            h[hi]=t;
        }
        else{
        t->next=q->next;
        q->next=t;}
        

    }
   

}
int hashTable::search(int key){
    int hi=hashKey(key);
    node *p=h[hi];
    while(p){
        if(p->data==key){
            return p->data;
        }
        p=p->next;
    }return -1;
}
hashTable::~hashTable(){
    node *p;
   for(int i=0;i<10;i++){
        p=h[i];
        while(p){
             node *temp = p;
            p = p->next;
            delete temp;
        }
        h[i] = nullptr;
    }
    delete [] h;
}
int main(){
    int A[] = {16, 12, 25, 39, 6, 122, 5, 68, 75,9};
	int n = sizeof(A)/sizeof(A[0]);
	hashTable h;
	for (int i=0; i<n; i++){
		h.insert(A[i]);
	}
    
	
int key=h.search(12);
cout<<key;
	return 0;

}
