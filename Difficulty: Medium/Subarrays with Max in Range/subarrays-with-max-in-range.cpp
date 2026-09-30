class Solution {
public:
    long long count(vector<int>& arr, long long x) {
        long long ans = 0;
        long long len = 0;

        for (int v : arr) {
            if (v <= x) {
                len++;
                ans += len;
            } else {
                len = 0;
            }
        }

        return ans;
    }

    long long countSubarrays(vector<int>& arr, int l, int r) {
        return count(arr, r) - count(arr, (long long)l - 1);
    }
};
