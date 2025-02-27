//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
       
       unordered_map<int,int>mpp;
       for(auto i:arr){
           mpp[i]++;
       }
       vector<pair<int,int>>fre(mpp.begin(),mpp.end());
       sort(fre.begin(),fre.end(),comp);
       vector<int>res;
       for(auto it:fre){
           res.insert(res.end(),it.second,it.first);
       }
       return res;
    }
   static bool comp(const pair<int,int>&p1,const pair<int,int>&p2){
        if(p1.second==p2.second){
            return p1.first<p2.first;
        }
        return p1.second>p2.second;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends