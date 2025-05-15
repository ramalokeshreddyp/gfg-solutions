//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        int cnt=s.size();
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }

        
        for(auto it:mpp){
            if(it.second>1){
                cnt+=fact(it.second-1);
            }
        }
        return cnt;
    }
    int fact(int n){
       return n*(n+1)/2;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends