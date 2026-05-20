class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
    
        vector<int> last(26, -1);

        int l = 0, ans = 0;

        for (int r = 0; r < s.size(); r++) {

            int idx = s[r] - 'a';

            if (last[idx] >= l) {
                l = last[idx] + 1;
            }

            last[idx] = r;

            ans = max(ans, r - l + 1);
        }

        return ans;
   
    }
};
