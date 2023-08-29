#include<iostream>
#include <vector>
#include <string>

using namespace std;

class sol{
    private:
    void solve(string digits,string op,int index,vector<string>&ans,string *mapping){
        if(index>=digits.length()){
            ans.push_back(op);
            return;
        }
        int no=digits[index]-'0';
        string value=mapping[no];
        for(int i=0;i<value.length();i++){
            op.push_back(value[i]);
            solve(digits,op,index+1,ans,mapping);
            op.pop_back();
        }

    }

    public:
    void keypadSol(string digits,vector<string>&ans){
       
        int index=0;
        string op;
        string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        /*if(digits.length()==0){
            return ans;

        }*/
        solve(digits,op,index,ans,mapping);
        
    }

};
int main(){
sol s;
vector<string> solution;
string digits="34";
s.keypadSol(digits,solution);
for(int i=0;i<solution.size();i++){
    cout<<solution[i]<<endl;
}
return 0;

}


