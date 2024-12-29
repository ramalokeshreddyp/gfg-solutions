//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to sort the array in a custom pattern.
    vector<int> customSort(vector<int>& arr) {
        // your code
        int n=arr.size();
        n=n/2;
        sort(arr.begin(),arr.begin()+n);
        
        sort(arr.begin()+n,arr.end());
        reverse(arr.begin()+n,arr.end());
        return arr;
       
        
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
        vector<int> ans = obj.customSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends