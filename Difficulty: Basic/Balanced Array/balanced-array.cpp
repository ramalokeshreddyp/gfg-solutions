//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
        deque<int>dq(arr.begin(),arr.end());
        int sum1=0,sum2=0;
        while(!dq.empty()){
            if(!dq.empty()){
                sum1+=dq.front();
                dq.pop_front();
            }
            if(!dq.empty()){
                sum2+=dq.back();
                dq.pop_back();
            }
        }
        return abs(sum1-sum2);
    }
};


//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.minValueToBalance(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends