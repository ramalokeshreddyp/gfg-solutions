//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int countZeroes(int arr[], int n) {
        // code here
        return count(arr,arr+n,0);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int arr[100001];
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number, size = 0;
        while (ss >> number) {
            arr[size++] = number;
        }

        Solution ob;
        cout << ob.countZeroes(arr, size) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends