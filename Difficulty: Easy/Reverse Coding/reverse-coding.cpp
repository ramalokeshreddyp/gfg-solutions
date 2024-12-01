//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define MOD 1000000007
class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
        long long int sum = (1LL * n * (n + 1)) / 2;
    return sum % MOD;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends