//{ Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
  
class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
        for (int i = 0; i < N; ++i) {
           
            S[i] = (S[i] == '0') ? '1' : '0';
        }
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends