//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
const int MOD = 1e9 + 7;
class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int n=arr.size();
        int total=0;
        for(int i=0;i<n;i++){
            total=total^arr[i];
        }
        if(total!=0){
            return 0;
        }
        long long ways=1;
        for(int i=1;i<n;i++){
            ways=(ways*2)% MOD;
        }
        ways-=1;
        return (int)ways;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int ans = obj.countgroup(arr);
        cout << ans << endl;
    }
}

// } Driver Code Ends