//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
    int n = str.length();
    if (n == 0) return 0;

    unordered_set<char> unique_chars(str.begin(), str.end());
    int total_unique = unique_chars.size();

    unordered_map<char, int> window_freq;
    int min_len = n + 1;
    int start = 0, count = 0;

    for (int end = 0; end < n; ++end) {
        char end_char = str[end];
        window_freq[end_char]++;
        if (window_freq[end_char] == 1)
            count++;

        while (count == total_unique) {
            min_len = min(min_len, end - start + 1);
            char start_char = str[start];
            window_freq[start_char]--;
            if (window_freq[start_char] == 0)
                count--;
            start++;
        }
    }

    return min_len;

    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends