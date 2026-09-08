class Solution {
public:
    long long findMinDiff(vector<int>& arr, int m) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        long long ans = LLONG_MAX;

        for (int i = 0; i + m - 1 < n; i++) {
            long long diff = (long long)arr[i + m - 1] - arr[i];
            ans = min(ans, diff);
        }

        return ans;
    }
};
