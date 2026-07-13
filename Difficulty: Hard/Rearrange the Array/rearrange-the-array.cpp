class Solution {
public:
    static const int MOD = 1000000007;

    long long power(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    int minOperations(vector<int>& b) {
        int n = b.size();
        vector<int> vis(n, 0);
        map<int, int> mx;

        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;

            int u = i, len = 0;
            while (!vis[u]) {
                vis[u] = 1;
                u = b[u] - 1;
                len++;
            }

            int x = len;
            for (int p = 2; p * p <= x; p++) {
                if (x % p == 0) {
                    int cnt = 0;
                    while (x % p == 0) {
                        x /= p;
                        cnt++;
                    }
                    mx[p] = max(mx[p], cnt);
                }
            }
            if (x > 1) mx[x] = max(mx[x], 1);
        }

        long long ans = 1;
        for (auto &it : mx)
            ans = ans * power(it.first, it.second) % MOD;

        return ans;
    }
};