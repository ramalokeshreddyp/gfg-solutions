//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// Complete this function
vector<int> vFill(vector<int>& arr) {
    // Your code here
    fill(arr.begin(),arr.end(),0);
    return arr;
}



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        vFill(arr);
        for (auto it : arr)
            cout << it << " ";
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends