//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> valid(vector<int>& arr) {
        // Your code goes here
        stable_partition(arr.begin(),arr.end(),[](int num){ return num!=0;});
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0&&arr[i]==arr[i+1]){
                arr[i]=2*arr[i];
                arr[i+1]=0;
                i++;
                
            }
        }
         stable_partition(arr.begin(),arr.end(),[](int num){ return num!=0;});
         return arr;
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
        vector<int> ans;
        Solution ob;
        ans = ob.valid(arr);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends