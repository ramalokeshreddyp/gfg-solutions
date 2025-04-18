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
    int commonSum(int n1, int n2, vector<int> &arr1, vector<int> &arr2) {
        // code here
      std::unordered_map<int, int> freq1, freq2;

    
    for (int num : arr1) freq1[num]++;
    for (int num : arr2) freq2[num]++;

    long long total = 0;

    
    for (const auto &p : freq1) {
        int val = p.first;
        if (freq2.find(val) != freq2.end()) {
            total+=val;
        }
    }

    return static_cast<int>(total % 1000000007); 
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n1;
        scanf("%d",&n1);
        
        
        int n2;
        scanf("%d",&n2);
        
        
        vector<int> arr1(n1);
        Array::input(arr1,n1);
        
        
        vector<int> arr2(n2);
        Array::input(arr2,n2);
        
        Solution obj;
        int res = obj.commonSum(n1, n2, arr1, arr2);
        
        cout<<res<<endl;
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends