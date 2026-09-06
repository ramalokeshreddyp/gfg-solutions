class Solution {
  public:
    int longestSubseq(vector<int>& arr) {
        // code here
        unordered_map<int,int>dp;
        int mx=1;
        for(auto it:arr){
            dp[it]=max(dp[it-1],dp[it+1])+1;
            mx=max(mx,dp[it]);
        }
        return mx;
    }
};