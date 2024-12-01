//{ Driver Code Starts


#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    long long noOfDigits(int N){
        // code here
         if (N == 1 || N == 2) {
            return 1; 
        }

      
        double logPhi = 0.20899; 
        double logSqrt5 = 0.34949; 

     
        double digits = N * logPhi - logSqrt5;

   
        return floor(digits) + 1;
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.noOfDigits(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends