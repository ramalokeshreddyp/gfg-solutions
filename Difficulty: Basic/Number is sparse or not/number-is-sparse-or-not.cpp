//{ Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        int cur=0;
        while(n!=0&&n!=1){
            int rem=n%2;
            if(rem==1){
                ++cur;
               if(cur==2){
                   return false;
               }
            }
            else{
                cur=0;
            }
            n/=2;
        }
        if(n==1){
            ++cur;
        }
       if(cur==2){
           return false;
       }
       return true;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends