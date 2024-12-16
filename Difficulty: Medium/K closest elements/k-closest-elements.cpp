//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
 auto it=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        deque<int>dq;
        if(arr[it]==x){
            int j=1;
    for(int i=0;i<n;i++)    {
        if(i<it){
            dq.push_front(arr[i]);
        }
        else if(i>it){
            dq.push_back(arr[n-j]);
            j++;
        }
    }
        }
        else{
            int j=1;
            for(int i=0;i<n;i++)    {
        if(i!=it&&i<it){
            dq.push_front(arr[i]);
        }
        else if(i==it||i>it){
            dq.push_back(arr[n-j]);
            j++;
            
        }
    } 
        }
        vector<int>v;
        while(k!=0){
        if(abs(dq.front()-x)>=abs(dq.back()-x)){
            v.push_back(dq.back());
            dq.pop_back();
            k--;
        }
        else if(abs(dq.front()-x)<abs(dq.back()-x)){
            v.push_back(dq.front());
            dq.pop_front();
            k--;
        }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends