//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        // code here
        int mx=0,cur=0;
        while(n!=0&&n!=1){
            int rem=n%2;
            if(rem==1){
                ++cur;
                mx=max(mx,cur);
            }
            else{
                cur=0;
            }
            n/=2;
        }
        if(n==1){
            ++cur;
        }
        mx=max(mx,cur);
        return mx;
        
        
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends