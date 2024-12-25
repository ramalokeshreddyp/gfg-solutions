//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans="";
        if(arr.size()==0){
            return "";
        }
       for (int i=0; i<arr[0].size(); i++){
               char ch= arr[0][i];
               bool flag= true;
           for (int j= 1; j<arr.size(); j++){
                if(arr[j].size()<=i or ch!= arr[j][i]){
                    flag= false;
                    break;
                }
             
           }
           if(flag==false){
               break;
           }
           else{
               ans.push_back(ch);
           }
       }
       if(ans.empty()){
           return "";
       }
       else{
           return ans;
       }
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends