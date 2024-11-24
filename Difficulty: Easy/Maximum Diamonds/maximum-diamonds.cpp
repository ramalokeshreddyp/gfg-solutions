//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        long long sum=0;
       priority_queue<int>pq;
       for(int i=0;i<N;i++){
           pq.push(A[i]);
       }
       while(!pq.empty()){
           if(K>0){
               sum+=(long long)pq.top();
               int  num=pq.top();
               pq.pop();
               pq.push(num/2);
               K--;
           }
           else{
               break;
           }
       }
       return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends