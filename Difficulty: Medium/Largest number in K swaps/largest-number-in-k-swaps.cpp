//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
   
   void findMaxUtil(string& s, string& maxStr, int k, int idx) {
    if (k == 0) return;

    char maxDigit = s[idx];
    for (int i = idx + 1; i < s.size(); i++) {
        if (s[i] > maxDigit) {
            maxDigit = s[i];
        }
    }

    if (maxDigit != s[idx]) {
        k--;
    }

    for (int i = s.size() - 1; i >= idx; i--) {
        if (s[i] == maxDigit) {
            swap(s[idx], s[i]);
            if (s.compare(maxStr) > 0)
                maxStr = s;
            findMaxUtil(s, maxStr, k, idx + 1);
            swap(s[idx], s[i]);
        }
    }
}

string findMaximumNum(string s, int k) {
    string maxStr = s;
    findMaxUtil(s, maxStr, k, 0);
    return maxStr;
}


};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends