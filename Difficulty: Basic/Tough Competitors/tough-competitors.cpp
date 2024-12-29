//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minDiff(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
       int mn=INT_MAX;
       for(int i=0;i<arr.size();i++){
           if(abs(arr[i]-arr[i+1])<mn){
               mn=abs(arr[i]-arr[i+1]);
           }
       }
       return mn;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.minDiff(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends