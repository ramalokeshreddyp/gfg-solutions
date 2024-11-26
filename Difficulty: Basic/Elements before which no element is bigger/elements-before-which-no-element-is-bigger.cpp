//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countElements(vector<int>& arr) {
        // code here
        int cnt=1;
        int mai=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]<=mai){
                continue;
            }
            else{
                mai=arr[i];
                cnt+=1;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character before getline
    while (t--) {
        vector<int> arr;
        string line;

        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution solution;
        cout << solution.countElements(arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends