//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lastSeenElement(vector<int>& arr) {
        // Complete the function
        multiset<int>ms(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int cnt=ms.count(arr[i]);
            ms.erase(ms.find(arr[i]));
            if(cnt>=2){
                continue;
            }
            else{
            return arr[i];
            }
        }
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
        Solution obj;
        cout << obj.lastSeenElement(arr) << endl;
    }
}

// } Driver Code Ends