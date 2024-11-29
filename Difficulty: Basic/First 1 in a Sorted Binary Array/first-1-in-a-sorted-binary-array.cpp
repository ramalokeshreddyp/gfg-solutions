//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        auto it=find(arr.begin(),arr.end(),1);
        if(it!=arr.end()){
            return distance(arr.begin(),it);
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.firstIndex(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends