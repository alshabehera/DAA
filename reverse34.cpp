#include <bits/stdc++.h> 
#include<string.h>

string reverse(string str,int s,int e){
	if(e==0||s>e){
		return str;
	}
	swap(str[s],str[e]);
	reverse(str,s+1,e-1);
	
}
	

string reverseString(string str)
{int s=0;
int e=str.length();
	return reverse(str,s,e);
}