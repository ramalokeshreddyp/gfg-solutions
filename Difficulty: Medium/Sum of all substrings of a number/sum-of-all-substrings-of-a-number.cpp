class Solution {
  public:
   int sumSubstrings(string &s) {
    int n = s.length();
    int total = s[0] - '0';
    int prev = total;
    for (int i = 1; i < n; i++) {
        int num = s[i] - '0';
        prev = prev * 10 + num * (i + 1);
        total += prev;
    }
    return total;
}

};