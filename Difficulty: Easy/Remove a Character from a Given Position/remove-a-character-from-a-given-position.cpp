//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:

    // Function to remove a character from the given position
    string removeCharacter(string &s, int pos) {
        // code here
        s.erase(s.begin()+pos);
        return s;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        int pos;

        getline(cin, s);
        cin >> pos;
        cin.ignore();

        Solution ob;
        string result = ob.removeCharacter(s, pos);

        cout << result << endl;
    }
    return 0;
}
// } Driver Code Ends