class Solution {
public:
    int getCount(int n) {
        int ans = 0;

        for (long long k = 2; k * (k + 1) / 2 <= n; k++) {
            if ((2LL * n) % k == 0) {
                long long t = (2LL * n) / k - k + 1;
                if (t > 0 && t % 2 == 0)
                    ans++;
            }
        }

        return ans;
    }
};