#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
      size=0;
    }
    void insertion(int val){
        //increase the size by one and insert at the tail
        size=size+1;
        int index=size;
        arr[index]=val;
        //then take it to its correct pposition
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index/2],arr[index]);
                index=parent;
            }
            else{
                return;
            }

        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<endl;
        }
    }
    void deletion(){
        //check if there is node is prsent or not;
        if(size==0){
            return ;
        }
        //swap the root noded with the last node
        swap(arr[1],arr[size]);
        //remove the last node
        size--;
        int i=1;
        //check until the root node recheses to its righ position
        while(i<size){
            int indexleft=2*i;
        int rightindex=2*i+1;

            if(indexleft<=size && arr[indexleft]>arr[i]){
            swap(arr[indexleft],arr[i]);
            i=indexleft;
        }
        else if(rightindex<=size && arr[rightindex]>arr[i]){
            swap(arr[rightindex],arr[i]);
            i=rightindex;
        }
        else{
            return;
        }
        
        }
        
    }

    void heapify(int *a,int n,int i){
        int index=i;
       int left=2*index;
       int right=2*index+1;
       if(left<size && a[left] > a[index]){
        index=left;
       }
       if(right<size && a[right] > a[index]){
        index=right;
       }
       if(index!=i){
        swap(a[index],a[i]);
        heapify(a,n,index);
       }

    }
};

int main(){
    heap h;
    h.insertion(56);
    h.insertion(45);
    h.insertion(78);
    h.insertion(98);
    h.insertion(8);
    h.print();
    h.deletion();
    h.print();

}