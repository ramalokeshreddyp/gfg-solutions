class Solution {
public:
    long long countKdivPairs(vector<int>& arr, int k) {
        vector<long long> freq(k, 0);
        long long ans = 0;
        for (int x : arr) {
            int r = x % k;
            ans += freq[(k - r) % k];
            freq[r]++;
        }
        return ans;
    }
};