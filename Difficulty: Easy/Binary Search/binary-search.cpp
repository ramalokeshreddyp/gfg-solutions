//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
         int low=0;
         int high=arr.size()-1;
         int index=-1;
         while(low<=high){
             int mid=(low+high)/2;
             if(arr[mid]==k){
             index=mid;
             break;
             }
             else if(k>arr[mid]){
                 low=mid+1;
             }
             else{
                 high=mid-1;
             }
         }
         return index;
         }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends