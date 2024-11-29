//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
        arr.clear();
        while(!pq.empty()){
            arr.push_back(pq.top());
            pq.pop();
        }
      
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
        obj.heapSort(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends