//{ Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


// } Driver Code Ends

class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
            
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            int maxi=mpp[arr[i]];
            int found=0;
            for(int j=i+1;j<n;j++){
                if(mpp[arr[j]]>maxi){
                    v.push_back(arr[j]);
                    found=1;
                    break;
                    
                }
            }
            if(!found){
                v.push_back(-1);
            }
        }
        return v;
    }
};



//{ Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    
cout << "~" << "\n";
}
	return 1;
}

// } Driver Code Ends