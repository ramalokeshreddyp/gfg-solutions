class Solution {
public:
    int smallestSubstring(string s) {
        int n = s.size(), l = 0, res = 1e9;
        vector<int> cnt(3, 0);
        int distinct = 0;
        
        for (int r = 0; r < n; r++) {
            if (cnt[s[r] - '0']++ == 0) distinct++;
            
            while (distinct == 3) {
                res = min(res, r - l + 1);
                if (--cnt[s[l] - '0'] == 0) distinct--;
                l++;
            }
        }
        
        return res == 1e9 ? -1 : res;
    }
};