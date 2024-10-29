//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
           unordered_map<int, int> elementCount;
        int cnt = 0;

        for (int num : arr) {
            elementCount[num]++;
        }

        for (auto it = elementCount.begin(); it != elementCount.end(); ++it) {
            int num = it->first;
            int count = it->second;

            if (elementCount.count(num + k)) {
                cnt += count * elementCount[num + k];
            }
            if (k != 0 && elementCount.count(num - k)) {
                cnt += count * elementCount[num - k];
            }
        }

        return cnt / 2;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends