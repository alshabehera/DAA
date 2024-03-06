
#include <bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int> &arr) 
{
   sort(arr.begin(),arr.end());
   int size=arr.size();
   for(int i=0;i<size-1;i++){
      if(arr[i]==arr[i+1]){
          return arr[i];
           
      }
   }
   return -1;
	
}
int main(){
    vector<int>arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
int x=findDuplicate(arr);
return x;
}