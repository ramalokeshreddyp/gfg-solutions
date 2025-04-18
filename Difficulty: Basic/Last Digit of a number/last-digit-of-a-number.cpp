//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

void utility(int n){
int ans;
    //just complete below statement
    if(n%10<0){
     ans =-(n%10);
    }
else{
    ans=n%10;
}
    //print the result
    cout << ans <<endl;
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
        int n; cin>>n;
        utility(n);
    
cout << "~" << "\n";
}
	
}
// } Driver Code Ends