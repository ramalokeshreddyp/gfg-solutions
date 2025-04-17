//{ Driver Code Starts
//Initial Template for C++



#include <iostream>
using namespace std;



// } Driver Code Ends

//User function Template for C++

class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
        //Your code here
        int sum=0;
        while(n!=0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
};


//{ Driver Code Starts.


int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	    
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends