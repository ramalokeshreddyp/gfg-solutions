class Solution {
public:
    int count(int n, int m) {
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));

        for (int i = 1; i <= m; i++)
            dp[1][i] = 1;

        for (int len = 2; len <= n; len++) {
            for (int prev = 1; prev <= m; prev++) {
                for (int cur = 1; cur <= m; cur++) {
                    if (prev % cur == 0 || cur % prev == 0)
                        dp[len][cur] += dp[len - 1][prev];
                }
            }
        }

        long long ans = 0;
        for (int i = 1; i <= m; i++)
            ans += dp[n][i];

        return ans;
    }
};