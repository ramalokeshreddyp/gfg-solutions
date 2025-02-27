//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    void SortedDuplicates(int n, vector<int> &arr) {
        // code here
        map<int, int> mpp;
    for (auto it : arr) {
        mpp[it]++;
    }

    bool hasDuplicates = false;
    for (auto it : mpp) {
        if (it.second > 1) {
            cout << it.first << " ";
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) {
        cout << -1;
    }
    cout << endl;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        
        obj.SortedDuplicates(n, arr);
        
    }
}

// } Driver Code Ends