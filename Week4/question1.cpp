/*Not everyone probably knows that Chef has younder brother Jeff. Currently Jeff learns to read.
He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with 
the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.
Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!
Input:
act
2
cat
dog

Output:
Yes
No
*/
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    string s;
    cin>>s>>n;
    while(n--){
        string r;
	   cin>>r;int m1=0;
	   for(int i=0;i<s.length();i++)
	   {
	        for(int j=0;j<r.length();j++)
	        {
	             if(s[i]==r[j])
	             {
	                m1++;                   
	             }
	        }
	   }
	   if(m1==r.length())
	   {
	           cout<<"Yes"<<endl;
	   }
	   else
	   {
	           cout<<"No"<<endl;
	   }
        
    }
    
	return 0;
}

