/*
https://www.codechef.com/problems/LAPIN
*/
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
string first,second;
int len=s.length();
for(int i=0; i<len/2; i++){
first+=s[i];
second+=s[len-i-1];
}
sort(first.begin(), first.end());
sort(second.begin(), second.end());
if(first == second)
{
cout<<"YES\n";
}
else
{
cout<<"NO\n";
}
    }
	return 0;
}
