//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
              string ans = ""; 

            map<char, int> a;   
    
            for (char i: A) {
              
                if (a[i] == 0)   a[i]++;  
            }
            
          
            for (char i: B) {
                 
                if (a[i] == 0)   a[i]--;
                
              
                if (a[i] == 1)   a[i]++;
            }
            
          
            for (auto it: a) {
                
                if (it.second == 1 || it.second == -1) {
                    ans += it.first;    
                }
            }
            
            
            if (ans == "") return "-1";
            return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends