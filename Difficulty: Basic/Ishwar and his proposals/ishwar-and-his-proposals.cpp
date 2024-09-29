//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    vector <int> acceptedProposals (vector <int> &arr, int n)
    {
        //code here.
        set<int>s(arr.begin(),arr.end());
        vector<int>v(s.begin(),s.end());
        return {v[v.size()-2],v[1]};
    }

};

//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
		vector <int> arr (n);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        Solution ob;
		vector <int> res = ob.acceptedProposals (arr, n);
		cout << res[0] << " " << res[1] << endl;
    }
}

// } Driver Code Ends