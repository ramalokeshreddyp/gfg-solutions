//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        // Your code goes here
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int n=arr1.size();
        arr1.insert(arr1.begin()+n,arr2.begin(),arr2.end());
        std::inplace_merge(arr1.begin(),arr1.begin()+n,arr1.end());
        swap(res,arr1);
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr1, arr2;
        int num;
        while (ss >> num) {
            arr1.push_back(num);
        }
        getline(cin, s);
        ss.clear();
        ss.str(s);
        while (ss >> num) {
            arr2.push_back(num);
        }
        int n = arr1.size();
        int m = arr2.size();
        vector<int> res(n + m);
        Solution ob;
        ob.sortedMerge(arr1, arr2, res);

        for (int i = 0; i < n + m; i++) {
            cout << res[i] << " ";
        }

        cout << "\n";

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends