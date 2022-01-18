/*
Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. The wildcard character '?' 
can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length,
made up of lower case letters and the character '?'. He wants to know whether the strings X and Y can be matched or not.
Input:
2
s?or?
sco??
stor?
sco??
Output:
Yes
No
Explanation::
First Example: There are several ways the two strings can be matched, one of those is "score".
Second Example: There is no way to match the strings.
*/
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int a,n1;
	cin >> a;
	while(a--){
		n1=0;
		string b,c;
		cin >> b>> c;
		for (int i=0;i<b.length();i++){
			if (b[i]!=c[i] && (b[i]!='?' && c[i]!='?')){
				n1=1;
				break;
			}
		}
		if(n1==1){
		    cout<<"No"<<endl;
		}
		else{
		    cout<<"Yes"<<endl;
		}
	}
	return 0;
}
