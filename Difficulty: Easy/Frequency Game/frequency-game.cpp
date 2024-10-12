//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        int num=-1,minn=INT_MAX;
 for (auto it : mpp) {
            int element = it.first;
            int frequency = it.second;

            
            if (frequency < minn || (frequency == minn && element > num)) {
                minn = frequency;
                num = element;
            }
        }
        return num;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends