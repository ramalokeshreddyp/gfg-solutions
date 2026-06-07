class Solution {
public:
    string profession(int level, int pos) {
        return (__builtin_popcount(pos - 1) & 1) ? "Doctor" : "Engineer";
    }
};