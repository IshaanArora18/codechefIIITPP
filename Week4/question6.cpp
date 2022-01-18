/*
https://www.codechef.com/problems/MAGDOORS
*/
#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       	    string s;
	    cin>>s;
	    bool flag=false;
	    int val=0;
	    for(int i=0;i<s.length();i++){
	        if((s[i]=='0' and flag==false) or (s[i]=='1' and flag==true)){
	            val++,flag=!flag;
	        }
	    }
	    cout<<val<<"\n";
    }
	return 0;
}
