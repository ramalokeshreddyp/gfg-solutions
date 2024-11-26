//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
        int n=arr.size();
        queue<int>qp,qn;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                qn.push(arr[i]);
            }
            else{
                qp.push(arr[i]);
            }
        }
        vector<int>res;
        while(!qn.empty()||!qp.empty()){
            if(!qp.empty()){
                res.push_back(qp.front());
                qp.pop();
            }
            if(!qn.empty()){
                res.push_back(qn.front());
                qn.pop();
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
        vector<int> ans = obj.arranged(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends