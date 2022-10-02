#include<iostream>
using namespace std;
int floorsqrt(int x)
{

    if (x==0||x==1)
        return x;
        int i=1,result=1;
        while(result<=x)
    {
        i++;
        result=i*i;
    }
    return i-1;
}
int main()
{
    int x;
    cout<<"root square of 16 is "<<floorsqrt(16)<<endl;
    cout<<"root square of 4 is "<<floorsqrt(4)<<endl;
    cout<<"root square of 6 is "<<floorsqrt(6)<<endl;
    return 0;

}
