//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            char c='A';
            for(int j=i;j<=n;j++){
                cout<<c;
                c++;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends