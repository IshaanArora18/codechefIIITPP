/*
https://www.codechef.com/problems/SNAKPROC
*/
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t1;
	cin>>t1;
	long long int i,j,k,n,c,t;
	while(t1--){
	    cin>>n;
	    string s;
	    cin>>s;
	    c=0;
	    int flag=1;
	    for(i=0;s[i]!='\0';i++)
	    {
	        if(s[i]=='.')
	        continue;
	        else
	        {
	            if(s[i]=='H')
	            c=c+1;
	            else
	            c=c-1;
	        }
	        if(c>1 || c<0)
	        {
	            flag=0;
	            break;
	        }
	    }
	    if(flag==0 || c!=0)
	    cout<<"Invalid"<<endl;
	    else
	    cout<<"Valid"<<endl;
	}
	return 0;
}
