//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    // Complete this function
    void freqSorted(vector<int>& arr) {
        // Your code here
        map<int,int>mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto it:mpp){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.freqSorted(arr);

        // cout<<endl;
    }
    return 0;
}

// } Driver Code Ends