#include <iostream>
using namespace std;

class array{
   public:
   int *A;//a pointer to create an array in heap memory
   int size;
   int length;
 
  array(){
      size=10;
      length=0;
      A=new int[size];
  }
  array(int x){
      size=x;
      length=0;
      A=new int[size];
  }
   void display();
   void elements();
   void insert(int index,int x);
   void append(int x);
   int Delete(int index);
   int linearSearch(int key);
   int binarySearch(int key);
   int rbinarySearch(int l,int h,int key);
   array* merge(array b);
   void reverse();
   void reverse2();
  
   
};
void array::display(){
    cout<<"elements are: ";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}
void array::elements(){
    cout<<"enter elements:";
    for(int i=0;i<size;i++){
        cin>>A[i];
        length++;
    }
    cout<<"length is:"<<length;
}
void array::insert(int index,int x){
    if(index>=0 && index<=length){
        for(int i=length;i>index;i--){
            A[i]=A[i-1];
            
        }
        A[index]=x;
        length++;
        
    }
    
}
void array::append(int x){
    if(length<size){
        A[length++]=x;
        
    }
    
}

int array::Delete(int index){
    int x=0;
    if(index>=0 && index<length){
        x=A[index];
        for(int i=index;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
        return x;
    }
    return 0;
   
    
} 
int array::linearSearch(int key){
    for(int i=0;i<length;i++){
    if(key==A[i]){
        return i;
    }
        
    }
  return -1;  
}
int array::binarySearch(int key){
    int l=0;
    int h=length-1;
    int mid;
    while(l<=h){
    mid=(l+h)/2;
    if(A[mid]>key){
        h=mid-1;
    }
    else if(A[mid]<key){
        l=mid+1;
    }
    else if(A[mid]==key){
        return mid;
    }
    }
    return -1;
}
int array::rbinarySearch(int l,int h,int key){
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(A[mid]==key){
            return mid;
        }
        else if(A[mid]>key){
            return rbinarySearch(l,mid-1,key);
        }
        else if(A[mid]<key){
            return rbinarySearch(mid+1,h,key);
        }
    }return -1;
}

void array:: reverse(){
    int *b=new int[length];
    int i,j;
    for(i=length-1,j=0;i>=0;i--,j++){
        b[j]=A[i];
    }
    for(i=0;i<length;i++){
        A[i]=b[i];
    }
}
void array:: reverse2(){
    int i,j,temp;
    for(i=0,j=length-1;i<j;i++,j--){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}

array* array::merge(array b){
 array* c=new array(length+b.length);
 int i=0,j=0,k=0;
 while(i<length && j<b.length){
 if(A[i]<b.A[j]){
     c->A[k++]=A[i++];
 }
 else if(A[i]>b.A[j]){
     c->A[k++]=b.A[j++];
 }
 else if(A[i]==b.A[j]){
     c->A[k++]=b.A[j++];
     i++;
 }
 }
 for(;i<length;i++){
     c->A[k++]=A[i++];
 }
 for(;j<b.length;i++){
     c->A[k++]=b.A[j++];
 }
 c->length=k;
 return c;
 
    
}    
    

int main(){
    array *a;
    array b;
    array *c;
    int size;
    cout<<"Enter size";
    cin>>size;
    a=new array(size);
    a->insert(0,1);
    a->insert(1,3);
    a->insert(2,5);
    a->insert(3,14);
    a->append(23);
    a->append(25);
    b.insert(0,2);
    b.insert(1,4);
    b.insert(2,6);
    b.insert(3,15);
    b.append(22);
    b.append(30);
    c=a->merge(b);
    //a->reverse2();
    c->display();
   //int d=a->rbinarySearch(0,a->length,23);
   //cout<<"key index:"<<d;
    //int d=a->Delete(0);
    //a->display();
    //cout<<d;
    
    
    
    
    
    
    
    
    
    
  return 0;  
    
}







