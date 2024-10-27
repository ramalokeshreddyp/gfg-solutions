//{ Driver Code Starts
#include <bits/stdc++.h>
#include <queue>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> arr, int k) {
        // Your code here
        priority_queue<int>pq(arr.begin(),arr.end());
        int key;
        while(k!=0){
             key=pq.top();
            pq.pop();
            k--;
        }
        return key;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.KthLargest(arr, k) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends