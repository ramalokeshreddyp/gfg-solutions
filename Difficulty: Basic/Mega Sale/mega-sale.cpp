//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int maxProfit(int m, vector<int> &arr) {
       vector<int> negatives;

    for (int x : arr) {
        if (x < 0) {
            negatives.push_back(-x); 
        }
    }

    sort(negatives.rbegin(), negatives.rend()); 
    int profit = 0;
    for (int i = 0; i < min(m, (int)negatives.size()); i++) {
        profit += negatives[i];
    }

    return profit;

}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.maxProfit(k, arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends