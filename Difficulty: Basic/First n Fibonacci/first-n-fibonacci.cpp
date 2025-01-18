//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int>res;
        res.emplace_back(0);
        if(n==1){
            
            return res;
        }
        res.emplace_back(1);
        if(n==2){
           
            
            return res;
        }
        int a=0,b=1;
        int i=3,c=a+b;
        for(int j=i;j<=n;j++){
            res.emplace_back(c);
            a=b;
            b=c;
            c=a+b;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<int> ans = obj.fibonacciNumbers(n);

        // printing the elements of vector
        for (int i : ans)
            cout << i << ' ';
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends