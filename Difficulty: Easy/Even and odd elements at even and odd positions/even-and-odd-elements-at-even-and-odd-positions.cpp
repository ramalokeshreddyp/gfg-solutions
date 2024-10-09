//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> arrangeOddAndEven(vector<int>& arr) {
        // Your code goes here
         queue<int>qe;
         queue<int>qo;
         for(int i=0;i<arr.size();i++){
             if(arr[i]%2==0){
                 qe.push(arr[i]);
             }
             else{
                 qo.push(arr[i]);
             }
         }
         vector<int>v;
         for(int i=0;i<arr.size();i++){
             if(!qe.empty()){
             v.push_back(qe.front());
              qe.pop();
             }
             if(!qo.empty()){
            v.push_back(qo.front());
             qo.pop();
             }
         }
         return v;
    }
};


//{ Driver Code Starts.
//        Driver code
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
        Solution Obj;
        vector<int> ans = Obj.arrangeOddAndEven(arr);
        int n = ans.size();
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends