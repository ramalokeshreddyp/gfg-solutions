class Solution {
public:
    bool dfs(int i, int j, vector<vector<int>>& mat,
             vector<vector<int>>& ans,
             vector<vector<int>>& dp, int n) {

        if (i == n - 1 && j == n - 1) {
            ans[i][j] = 1;
            return true;
        }

        if (dp[i][j] == 0) return false;

        ans[i][j] = 1;

        for (int k = 1; k <= mat[i][j]; k++) {
            if (j + k < n && mat[i][j + k] != 0) {
                if (dfs(i, j + k, mat, ans, dp, n))
                    return true;
            }

            if (i + k < n && mat[i + k][j] != 0) {
                if (dfs(i + k, j, mat, ans, dp, n))
                    return true;
            }
        }

        ans[i][j] = 0;
        dp[i][j] = 0;
        return false;
    }

    vector<vector<int>> shortestDist(vector<vector<int>>& mat) {
        int n = mat.size();

        if (mat[0][0] == 0)
            return {{-1}};

        vector<vector<int>> ans(n, vector<int>(n, 0));
        vector<vector<int>> dp(n, vector<int>(n, 1));

        if (dfs(0, 0, mat, ans, dp, n))
            return ans;

        return {{-1}};
    }
};