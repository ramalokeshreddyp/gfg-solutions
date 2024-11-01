//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
       
        sort(arr.begin(),arr.end());
        deque<int>dq(arr.begin(),arr.end());
        vector<int>res;
        while(!dq.empty()){
            if(!dq.empty()){
                res.push_back(dq.front());
                dq.pop_front();
            }
            if(!dq.empty()){
                res.push_back(dq.back());
                dq.pop_back();
            }
        }
        int n=res.size();
        long long large=0;
        large+=(long long)abs(res[0]-res[n-1]);
        for(int i=1;i<n;i++){
            large+=(long long)abs(res[i]-res[i-1]);
        }
        return large;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends