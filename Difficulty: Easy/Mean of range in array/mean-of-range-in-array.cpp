class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
        int n = arr.size();
        vector<long long> pref(n);
        pref[0] = arr[0];
        for(int i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];
        
        vector<int> res;
        res.reserve(queries.size());
        
        for(auto &q : queries) {
            int l = q[0], r = q[1];
            long long sum = pref[r] - (l ? pref[l - 1] : 0);
            res.push_back(sum / (r - l + 1));
        }
        return res;
    }
};