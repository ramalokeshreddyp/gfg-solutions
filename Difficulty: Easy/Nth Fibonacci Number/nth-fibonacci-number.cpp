//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        int num1=0,num2=1;
        if(n==0){
            return num1;
        }
        if(n==1){
            return num2;
        }
        int num3;
    
        for(int i=2;i<=n;i++){
         num3=num1+num2;
            num1=num2;
            num2=num3;
            
        }
        return num3;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends