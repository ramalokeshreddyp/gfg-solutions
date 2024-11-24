//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    // Code here
		    int o=(n+1)/2;
		    int e=n/2;
		   int osum=o*o;
		   int esum=e*(e+1);
		   return {osum,esum};

		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends