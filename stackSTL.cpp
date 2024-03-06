#include <iostream>
#include <stack>
using namespace std;

int main(){
 string s="alsha";
 cout<<s;
 stack<char> st;
 for(int i=0;i<s.length();i++){
    char ch=s[i];
st.push(ch);
 }
 string ans="";
 while(!s.empty()){
    char p=st.top();
    ans.push_back(p);
    cout<<p;
    st.pop();
 }
 cout<<ans;
 return 0;

}