class Solution {
public:
    long long sumXOR(vector<int> &arr) {
        long long n = arr.size(), ans = 0;
        for (int b = 0; b < 31; b++) {
            long long cnt = 0;
            for (int x : arr) if (x & (1 << b)) cnt++;
            ans += cnt * (n - cnt) * (1LL << b);
        }
        return ans;
    }
};