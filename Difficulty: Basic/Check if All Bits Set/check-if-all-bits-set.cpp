class Solution {
  public:
    bool isBitSet(int n) {
        return n && ((n & (n + 1)) == 0);
    }
};