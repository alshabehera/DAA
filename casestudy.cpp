#include<iostream>
using namespace std;
int main()
{
    int capacity;
    int tp=0;
    while(tp<capacity)
    {
        char A;
        string passcode;
        cout<<"are you an alumunus(Y/N):"<<endl;
        cin>>A;
        cout<<"Enter password"<<endl;
        cin>>passcode;
        if(A!='Y')
        {
            cout<<"you are not an alumunus"<<endl;
            continue;
        }
        if(passcode!="Classroom")
        {
            cout<<"You have enter wrong password"<<endl;
            break;
        }
        
        cout<<"welcome"<<endl;
        tp++;
    }
    if(tp==capacity)
    {
        cout<<"You are late";
    }
}