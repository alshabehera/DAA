#include <iostream>

using namespace std;

int main()
{
   char name[]="ALSHA";
   int i;
   for(i=0;name[i]!='\0';i++){
       name[i]=name[i]+32;
       
   }
   cout<<name;
   

    return 0;
}
