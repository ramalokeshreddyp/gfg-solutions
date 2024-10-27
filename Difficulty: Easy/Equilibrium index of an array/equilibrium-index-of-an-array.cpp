//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findEquilibrium(vector<int>& arr) {
        // code
        int n=arr.size();
        int totalsum=accumulate(arr.begin(),arr.end(),0);
        int cursum=0;
        for(int i=n-1;i>=0;i--){
            cursum+=arr[i];
            if(cursum==(totalsum-cursum)){
                return i-1;
            }
        }
        return -1;
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
        int res = obj.findEquilibrium(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends