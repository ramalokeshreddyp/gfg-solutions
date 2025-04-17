//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++


// create a class addition
// with a function add
// this should return the sum of
// two values(a,b) passed in the parameter
class Addition{
  public:
  int add(int a,int b){
      return a+b;
  }
};
// code here


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	   int a, b; cin>>a>>b;
	   Addition A;
	   cout<<A.add(a, b)<<endl;
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends