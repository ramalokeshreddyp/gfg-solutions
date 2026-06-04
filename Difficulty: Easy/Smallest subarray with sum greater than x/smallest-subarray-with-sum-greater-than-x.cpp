class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int len=INT_MAX;
        int l=0,r=0,sum=0;
        int n=arr.size();
        while(r<n){
            sum+=arr[r];
            while(sum>x){
                len=min(len,r-l+1);
                sum-=arr[l];
                l++;
            }
            r++;
        }
       if(len==INT_MAX){
           return 0;
       }
       return len;
    }
};