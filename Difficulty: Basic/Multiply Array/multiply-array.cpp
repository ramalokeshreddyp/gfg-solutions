//{ Driver Code Starts
//Initial Template for C++

// } Driver Code Ends
//User function Template for C++
#define ll  long long int
class Solution{
    public:
    int product(int arr[], int n)
    {
        ll p=1;
        for(int i=0;i<n;i++){
            p*=arr[i];
        }
        return p;
    }
};

//{ Driver Code Starts.

#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.product(arr, n)<<endl;
    
cout << "~" << "\n";
}
	
	return 0;
	
	
}
// } Driver Code Ends