#include<iostream>
using namespace std;
int main()
{
  int N,K;
  cout<<"Enter nuber:";
  cin>>N;
  cout<<"Enter the value of k:";
  cin>>K;
  for(int i=1;i<=N;i++)
  {
    if(i==K)
    continue;
    cout<<i<<endl;
  }
}