class Solution {
  public:
    int kokoEat(vector<int>& a, int k) {
        // Code here
          int l = 1, r = *max_element(a.begin(), a.end()), ans = r;
        while (l <= r) {
            int m = l + (r - l) / 2;
            long long h = 0;
            for (int x : a) {
                h += (x + m - 1) / m;
            }
            if (h <= k) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};