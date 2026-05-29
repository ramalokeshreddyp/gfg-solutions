class Solution {
public:
    int dp[101][901];
    
    int solve(int i, int prev, string &s, vector<int> &pref) {
        int n = s.size();
        if (i == n) return 1;
        
        if (dp[i][prev] != -1) return dp[i][prev];
        
        int ans = 0;
        
        for (int j = i; j < n; j++) {
            int sum = pref[j + 1] - pref[i];
            if (sum >= prev)
                ans += solve(j + 1, sum, s, pref);
        }
        
        return dp[i][prev] = ans;
    }
    
    int validGroups(string &s) {
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + (s[i] - '0');
        
        return solve(0, 0, s, pref);
    }
};