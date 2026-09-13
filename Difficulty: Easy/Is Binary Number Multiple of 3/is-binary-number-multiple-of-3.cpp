class Solution {
  public:
    bool isMultipleOf3(string& s) {
        // code here
        int rem = 0;

        for (char c : s) {
            rem = (rem * 2 + (c - '0')) % 3;
        }

        return rem == 0;
    }
};