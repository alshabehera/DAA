#include<iostream>
 using namespace std;
 struct act
 {
   int st=0;
   int ft=0;
 }a[6],b[6];
 int main()
 {
   for (int i=0;i<6;i++)
   {
      cout<<"enter starting and finishing time:";
      cin>>a[i].st>>a[i].ft;
   }
   int m=0, n=0;
   for(int i=0;i<5;i++)
   {
      for(int j=i+1;j<6;j++)
      {
        if(a[i].ft>a[j].ft)
        {
           m=a[j].ft;
           a[j].ft=a[i].ft;
           a[i].ft=m;
           n=a[j].st=a[i].st;
           a[j].st=a[i].st;
           a[i].st=n;

        }
      }
   }
   b[0].st=a[0].st;
   b[0].ft=a[0].ft;
   int k=1,p=0;
   for(int i=1;i<6;i++)
   {
      if(a[i].st>a[p].ft)
      {
        b[k].st=a[i].st;
        b[k].ft=a[i].ft;
        k++;
        p=i;
      }
   }
   for(int i=0;i<k;i++)
   {
     cout<<b[i].st<<","<<b[i].ft<<endl;
   }
   return 0;
}
