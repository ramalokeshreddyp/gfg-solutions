class Solution {
public:
    vector<int> nextPalindrome(vector<int>& num) {
        int n = num.size();
        vector<int> res = num;

        for (int i = 0; i < n / 2; i++)
            res[n - i - 1] = res[i];

        if (res > num) return res;

        int carry = 1;
        int mid = (n - 1) / 2;

        while (mid >= 0 && carry) {
            int sum = res[mid] + carry;
            res[mid] = sum % 10;
            carry = sum / 10;
            res[n - mid - 1] = res[mid];
            mid--;
        }

        if (carry) {
            vector<int> ans(n + 1, 0);
            ans[0] = ans[n] = 1;
            return ans;
        }

        return res;
    }
};