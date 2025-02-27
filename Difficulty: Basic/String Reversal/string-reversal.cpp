//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    
cout << "~" << "\n";
}
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    reverse(s.begin(),s.end());
    string str;
    set<char>se;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
        if(se.find(s[i])!=se.end()){
            continue;
        }
        else{
            str.push_back(s[i]);
            se.insert(s[i]);
        }
        }
    }
    return str;
}