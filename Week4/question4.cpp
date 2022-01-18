/*
https://www.codechef.com/problems/CSUB
*/
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int length_string=n;
	    long long count=0;
	    for(int i=0;i<length_string;i++){
           if(s[i]=='1'){
               count++;
           }
	    }
	    count=(count*(count+1))/2;
	    std::cout << count << std::endl;
	}
	return 0;
}
