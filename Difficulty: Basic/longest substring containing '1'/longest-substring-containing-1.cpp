//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;

cout << "~" << "\n";
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
// your code here
int c=0,max=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='1'){
        c++;
        if(c>max){
            max=c;
        }
    }
    else{
        c=0;
    }
}
if(c>max){
    max=c;
}
return max;
}