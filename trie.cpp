#include<iostream>
using namespace std;
class trienode{
    public:

    char data;
    trienode* children[26];
    bool isterminal;
    trienode(char data){
        this->data=data;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal=false;


    }

};

class trie{
    public:
    trienode* root;
    
    
    trie(){
        root=new trienode('\0');
    }
    
    
    
    void insert(trienode* root,string word){
        if(word.length()==0){
            root->isterminal=true;
            return;
        }
        int index=word[0]-'a';
        trienode* child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            child=new trienode(word[0]);
            root->children[index]=child;

        }
        insert(child,word.substr(1));//it will remove the first letter making the second letter as index 0
    }

   
   
    void insertword(string w){
        insert(root,w);
    }

   
   
    bool search(trienode* root,string word){
        if(word.length()==0){
            return root->isterminal;
        }
        int index=word[0]-'a';
        trienode* child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }
       return search(child,word.substr(1));
    }
    
    
    bool searchword(string w){
       return search(root,w);
    }
    void remove(trienode* root,string word){
        if(word.length()==0){
            root->isterminal=false;
            return;
        }
        int index=word[0]-'a';
        trienode* child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return;
        }
        remove(child,word.substr(1));
    }
    void removeword(string s){
        remove(root,s);
    }
};


int main(){
    trie* t=new trie();
    t->insertword("abcd");
   t->insertword("abcde");
   t->insertword("abcdef");
   t->insertword("abcdefg");
    cout<<"present or not abd " << t->searchword("abd")<<endl;
     cout<<"present or not abcd " << t->searchword("abcd")<<endl;
     t->removeword("abcd");
      cout<<"present or not abcd " << t->searchword("abcd")<<endl;
    return 0;
 
}






