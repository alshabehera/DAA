
#include <iostream>

using namespace std;
class matrix{
 private:
   int A[10];
   int length=4;//dimension
 public:
  void Set(int i,int j,int x){
      if(i==j){
          A[i-1]=x;
          
      }
  }
  int get(int i,int j){
      if(i==j){
          return A[i-1];}
        else{
            return 0;
        }  
      
  }
  void display(){
      int i,j;
      for(i=1;i<=length;i++){
          for(j=1;j<=length;j++){
              if(i==j){
                  cout<<" "<<A[i-1]<<" ";
              }
              else{
                  cout<<" 0 ";
              }
          }cout<<endl;
      }
  }
};

int main()
{
    matrix m;
   
    m.Set(1,1,5);m.Set(2,2,3);m.Set(3,3,6);m.Set(4,4,15);
    m.display();

    return 0;
}
