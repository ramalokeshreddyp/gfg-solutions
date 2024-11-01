//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int calculateFriendliness(vector<int>& arr) {
        // code here
        int n=arr.size();
        int large=0;
        large+=abs(arr[0]-arr[n-1]);
        for(int i=1;i<n;i++){
            large+=abs(arr[i]-arr[i-1]);
        }
        return large;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character before getline
    while (t--) {
        vector<int> arr;
        string line;

        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution solution;
        cout << solution.calculateFriendliness(arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends