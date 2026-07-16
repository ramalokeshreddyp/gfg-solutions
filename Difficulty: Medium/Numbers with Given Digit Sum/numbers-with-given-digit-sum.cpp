class Solution {
    int dp[10][82];

    int solve(int digits, int sum) {
        if (digits == 0)
            return sum == 0;

        if (dp[digits][sum] != -1)
            return dp[digits][sum];

        int ans = 0;
        for (int d = 0; d <= 9; d++) {
            if (sum >= d)
                ans += solve(digits - 1, sum - d);
        }

        return dp[digits][sum] = ans;
    }

public:
    int countWays(int n, int sum) {
        memset(dp, -1, sizeof(dp));

        int ans = 0;
        for (int d = 1; d <= 9; d++) {
            if (sum >= d)
                ans += solve(n - 1, sum - d);
        }

        return ans == 0 ? -1 : ans;
    }
};