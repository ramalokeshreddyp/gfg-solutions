//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        // code here
        int cnt=0;
        int i=0;
        while(i<s.length()){
            int index=s.rfind(s[i]);
            for(int j=i+1;j<index;j++){
                index=max(index,(int)s.rfind(s[j]));
            }
            cnt++;
            i=index+1;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends