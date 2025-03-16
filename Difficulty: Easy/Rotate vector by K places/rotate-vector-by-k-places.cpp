//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

/*
vec: original vector
K: rotate vector by K places
*/
vector<int> leftRotate(vector<int> &arr, int k) {
    // your code here
    k=k%arr.size();
    rotate(arr.begin(),arr.begin()+k,arr.end());
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
        int k;
        cin >> k;
        cin.ignore();
        leftRotate(arr, k);
        for (auto it : arr)
            cout << it << " ";
        cout << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends