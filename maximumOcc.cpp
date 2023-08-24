#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char getMaxOccuringChar(string str) {
        vector<int> temp(26, 0);
        int maxi =-1; // Initialize with the first character
        int i = 0;

        while (i<str.length()) {
            temp[(str[i] - 'a')]++;
            i++;
        }
        int index;
        i = 0;
        while (i < 26) {
           if(temp[i]>maxi)
               
                  { maxi = temp[i] ;
                    index=i;}   i++;
                }
                char ch=index+'a';
                return ch;
            }
       
    };


int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;
    }
    return 0;
}
