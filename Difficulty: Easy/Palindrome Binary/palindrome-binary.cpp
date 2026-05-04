class Solution {
public:
    bool isBinaryPalindrome(int n) {
        int left = 31, right = 0;
        while(left > right && ((n >> left) & 1) == 0) left--;
        while(left > right) {
            if(((n >> left) & 1) != ((n >> right) & 1)) return false;
            left--;
            right++;
        }
        return true;
    }
};