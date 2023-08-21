#include<iostream>

using namespace std;
int getLength(char *n){
    int i=0;int count =0;
    while(n[i]!='\0'){
count++;
i++;
    }
    return count;
}
void reverse(char *n){
    int s=0;int e=getLength(n)-1;
    while (s<e){
        char temp;
        temp=n[s];
        n[s]= n[e];
        n[e]=temp;
        s++;e--;


    }
    cout<<n;


}
int main(){
    char name[10];
    cout<<"enter:";
    cin>>name;
    
    int x=getLength(name);
    cout<<"length: "<<x;
   reverse(name);

}