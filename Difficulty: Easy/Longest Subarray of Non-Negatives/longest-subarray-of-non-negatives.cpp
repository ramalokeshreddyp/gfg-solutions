class Solution {
  public:
    int longestSubarry(vector<int>& arr) {
        // write code here
        int n=arr.size();
        int l=0,r=0,len=0,mx=0;
        while(r<n){
            if(arr[r]<0){
                l++;
                len=-1;
            }
            len++;
            mx=max(mx,len);
            r++;
        }
        return mx;
    }
};