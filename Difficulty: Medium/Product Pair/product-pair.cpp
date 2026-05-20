class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        unordered_set<long long> s;

        for (long long x : arr) {
            if (x == 0) {
                if (target == 0) return true;
            } else {
                if (target % x == 0 && s.count(target / x))
                    return true;
            }
            s.insert(x);
        }

        return false;
    }
};