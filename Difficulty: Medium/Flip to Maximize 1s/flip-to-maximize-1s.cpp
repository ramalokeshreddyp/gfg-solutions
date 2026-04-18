class Solution {
  public:
    int maxOnes(vector<int>& arr) {
        int total = 0;
        for (int x : arr) total += x;
        int max_gain = 0, cur = 0;
        for (int x : arr) {
            int val = (x == 0 ? 1 : -1);
            cur = max(val, cur + val);
            max_gain = max(max_gain, cur);
        }
        return total + max_gain;
    }
};