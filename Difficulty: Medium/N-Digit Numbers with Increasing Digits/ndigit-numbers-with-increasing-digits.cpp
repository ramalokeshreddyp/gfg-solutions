class Solution {
public:
    void dfs(int len, int n, int lastDigit, long long num, vector<int>& ans) {
        if (len == n) {
            ans.push_back((int)num);
            return;
        }

        for (int d = lastDigit + 1; d <= 9; d++) {
            dfs(len + 1, n, d, num * 10 + d, ans);
        }
    }

    vector<int> increasingNumbers(int n) {
        vector<int> ans;

        if (n == 1) {
            for (int i = 0; i <= 9; i++)
                ans.push_back(i);
            return ans;
        }

        if (n > 9) return ans;

        for (int first = 1; first <= 9; first++) {
            dfs(1, n, first, first, ans);
        }

        return ans;
    }
};