//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> Rearrange(vector<int> arr) {
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
        return res;
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
        vector<int> ans = obj.Rearrange(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends