class Solution {
public:
    bool isSumOfConsecutive(int n) {
        return n > 1 && (n & (n - 1));
    }
};