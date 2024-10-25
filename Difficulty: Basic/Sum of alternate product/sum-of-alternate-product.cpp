//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int altProduct(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int product=0;
        deque<int>dq(arr.begin(),arr.end());
        while(!dq.empty()){
            int key1,key2;
            if(!dq.empty()){
                 key1=dq.front();
                dq.pop_front();
            }
            if(!dq.empty()){
                 key2=dq.back();
                dq.pop_back();
            }
            product+=(key1*key2);
        }
        return product;
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
        int res = obj.altProduct(arr);
        cout << res << endl;
        // cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends